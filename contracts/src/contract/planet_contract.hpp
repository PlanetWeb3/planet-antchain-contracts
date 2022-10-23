/*******************************************************************************
 * This file is auto generated by ChainStack, add your biz logic here
 *
 * FileName : planet_contract.hpp
 * Desc     : Planet controller instance, this file is generated for user to modify.
 * History  :
 * License  :
 *******************************************************************************/

#ifndef PLANET_CONTRACT_H
#define PLANET_CONTRACT_H

#include "generated/base/planet_contract_base.hpp"
#include "generated/model/planet_model.h"
#include "shared/error_code.h"

using namespace planet;

class PlanetContractImpl : public PlanetContractBase{
public:
    PlanetContractImpl() {
        // construct your service pointer here...
    }

    std::string GetOwner() {
        return GetStorage()->get_owner();
    }
    
    void MintNFT(const std::string& token_u_r_i, const uint64_t& amount) {
        std::string sender = Bin2Hex(GetSender().get_data());
        std::string contract = Bin2Hex(GetSelf().get_data());
        
        Require(amount >= 1, "Zero Amount");
        Require(sender == GetStorage()->get_owner(), "Only Owner");
        
        uint64_t curTokenId = GetStorage()->get_curTokenId();
        auto addressToToken = GetStorage()->get_addressToToken();

        if (!(addressToToken->has_element(contract))) {
            addressToToken->add_element(contract);
        }
        auto tokens = addressToToken->get_element(contract)->get_tokens();
        auto token = tokens->add_element(std::to_string(curTokenId));
        token->set_tokenId(curTokenId);
        token->set_tokenURI(token_u_r_i);
        token->set_amount(amount);

        GetStorage()->get_tokenIdToURI()->add_element(std::to_string(curTokenId));
        GetStorage()->get_tokenIdToURI()->get_element(std::to_string(curTokenId))->set_url(token_u_r_i);
        curTokenId++;

        GetStorage()->set_curTokenId(curTokenId);
        GetStorage()->set_sumWight(GetStorage()->get_sumWight() + amount);
    }

    std::vector<model::Token> GetNFT(const std::string& owner) {
        auto addressToToken = GetStorage()->get_addressToToken();
        if (!(addressToToken->has_element(owner)))
            return {};
        auto tokens = addressToToken->get_element(owner)->get_tokens();
        std::vector<model::Token> res;
        for (auto it = tokens->get_map_key_iterator(); it.valid(); ++it) {
            std::string key = *it;
            auto token = tokens->get_element(key);
            res.push_back(model::Token{token->get_tokenId(), token->get_tokenURI(), token->get_amount()});
        }
        return res;
    }

    void TransferNFT(const std::string& from, const std::string& to, const uint64_t& token_id, const uint64_t& amount) {
        Require(amount >= 1, "Zero Amount");
        LoseToken(from, token_id, amount);
        GetToken(to, token_id, amount);
        if (to == Bin2Hex(GetSelf().get_data())) {
            GetStorage()->set_sumWight(GetStorage()->get_sumWight() + amount);
        }
        if (from == Bin2Hex(GetSelf().get_data())) {
            GetStorage()->set_sumWight(GetStorage()->get_sumWight() - amount);
        }
    }

    void AddItemToMarket(const uint64_t& token_id, const uint64_t& amount, const uint64_t& price) {
        std::string sender = Bin2Hex(GetSender().get_data());
        std::string contract = Bin2Hex(GetSelf().get_data());

        LoseToken(sender, token_id, amount);
        uint64_t curItemId = GetStorage()->get_curItemId();
        auto commodity = GetStorage()->get_commodities()->add_element(std::to_string(curItemId));
        auto token = GetStorage()->get_addressToToken()->get_element(contract)->get_tokens()->get_element(std::to_string(token_id));
        commodity->set_itemId(curItemId);
        commodity->set_tokenId(token->get_tokenId());
        commodity->set_tokenURI(token->get_tokenURI());
        commodity->set_owner(sender);
        commodity->set_price(price);
        commodity->set_amount(amount);
        GetStorage()->set_curItemId(curItemId + 1);
    }

    void BuyItemAndTransferOwnership(const uint64_t& item_id, const uint64_t& amount) {
        std::string sender = Bin2Hex(GetSender().get_data());
        std::string contract = Bin2Hex(GetSelf().get_data());

        auto commodities = GetStorage()->get_commodities();
        Require(commodities->has_element(std::to_string(item_id)), "Item Not Exist");
        auto commodity = commodities->get_element(std::to_string(item_id));
        Require(sender != commodity->get_owner(), "Buy Oneself");
        Require(amount >= 1, "Zero Amount");
        uint64_t tokenId = commodity->get_tokenId();
        uint64_t price = commodity->get_price();
        uint64_t tokenAmount = commodity->get_amount();
        std::string owner = commodity->get_owner();
        Require(tokenAmount >= amount, "Exceed Supply");
        Require(GetValue() == price * amount, "Incorrect Money");

        DecreaseSupply(tokenAmount, amount, item_id);
        GetToken(sender, tokenId, amount);
        TransferBalance(Identity{owner}, GetValue());
    }

    void RedeemItems(const uint64_t& itemId, const uint64_t& amount) {
        std::string sender = Bin2Hex(GetSender().get_data());

        Require(amount >= 1, "Zero Amount");
        auto commodities = GetStorage()->get_commodities();
        Require(commodities->has_element(std::to_string(itemId)), "Item Not Exist");
        auto commodity = commodities->get_element(std::to_string(itemId));
        Require(sender == commodity->get_owner(), "Redeem Others");
        uint64_t tokenId = commodity->get_tokenId();
        uint64_t tokenAmount = commodity->get_amount();
        Require(tokenAmount >= amount, "Exceed Supply");

        DecreaseSupply(tokenAmount, amount, itemId);
        GetToken(sender, tokenId, tokenAmount); 
    }

    std::vector<model::Commodity> GetUnsoldItems() {
        auto commodities = GetStorage()->get_commodities();
        std::vector<model::Commodity> res{};
        for (auto it = commodities->get_map_key_iterator(); it.valid(); ++it) {
            std::string key = *it;
            auto commodity = commodities->get_element(key);
            res.push_back(model::Commodity{commodity->get_itemId(), commodity->get_tokenId(),
                                           commodity->get_tokenURI(), commodity->get_owner(),
                                           commodity->get_price(), commodity->get_amount()});
        }
        return res;
    }

    std::vector<model::Commodity> GetCommoditiesByAddress(const std::string& owner) {
        auto commodities = GetStorage()->get_commodities();
        std::vector<model::Commodity> res{};
        for (auto it = commodities->get_map_key_iterator(); it.valid(); ++it) {
            std::string key = *it;
            auto commodity = commodities->get_element(key);
            if (commodity->get_owner() != owner) continue;
            res.push_back(model::Commodity{commodity->get_itemId(), commodity->get_tokenId(),
                                           commodity->get_tokenURI(), commodity->get_owner(),
                                           commodity->get_price(), commodity->get_amount()});
        }
        return res;
    }

    std::vector<model::Token> GetRandomKItems() {
        std::string sender = Bin2Hex(GetSender().get_data());
        std::string owner = GetStorage()->get_owner();
        std::string contract = Bin2Hex(GetSelf().get_data());

        Require(sender == owner || GetValue() >= GetStorage()->get_fee() ||
                !(GetStorage()->get_addressToLastTime()->has_element(sender)) ||
                GetBlockTimeStamp() - GetStorage()->get_addressToLastTime()->get_element(sender)->get_lastTime() >= 86400000, 
                "No Owner No Money No Time"); // Not Secure
        uint64_t num;
        if (GetValue() != 0) {
            num = GetValue() / GetStorage()->get_fee() * GetStorage()->get_K();
        } else {
            num = GetStorage()->get_K();
        }
        uint64_t sumWeight = GetStorage()->get_sumWight();
        Require(sumWeight >= num, "Insufficient Pool");
        std::vector<model::Token> res{};
        for (uint64_t i = 0; i < num; i++) {
            uint64_t randomNumber = i % sumWeight + 1; // Not Secure
            auto tokens = GetStorage()->get_addressToToken()->get_element(contract)->get_tokens();
            for (auto it = tokens->get_map_key_iterator(); it.valid(); ++it) {
                std::string key = *it;
                auto token = tokens->get_element(key);
                uint64_t tokenAmount = token->get_amount();
                if (randomNumber <= tokenAmount) {
                    res.push_back(model::Token{token->get_tokenId(), token->get_tokenURI(), 1});
                    TransferNFT(contract, owner, token->get_tokenId(), 1);
                    break;
                } else {
                    randomNumber -= tokenAmount;
                }         
            }
        }
        if (!(GetStorage()->get_addressToLastTime()->has_element(sender)))
            GetStorage()->get_addressToLastTime()->add_element(sender);
        GetStorage()->get_addressToLastTime()->get_element(sender)->set_lastTime(GetBlockTimeStamp());
        return res;
    }
    
    void ChangeFee(const uint64_t& fee) {
        Require(GetStorage()->get_owner() == Bin2Hex(GetSender().get_data()), "Not Owner");
        GetStorage()->set_fee(fee); 
    }

    void ChangeK(const uint64_t& k) {
        Require(GetStorage()->get_owner() == Bin2Hex(GetSender().get_data()), "Not Owner");
        GetStorage()->set_K(k); 
    }

    uint64_t GetContractBalance() {
        uint64_t balance = 0;
        GetBalance(GetSelf(), balance);
        return balance;
    }

    void WithDraw(const uint64_t& amount) {
        Require(GetStorage()->get_owner() == Bin2Hex(GetSender().get_data()), "Not Owner");
        TransferBalance(Identity{GetStorage()->get_owner()}, amount);
    }

    uint64_t LastGetTime() {
        std::string sender = Bin2Hex(GetSender().get_data());
        if (!(GetStorage()->get_addressToLastTime()->has_element(sender)))
            return 0;
        return GetStorage()->get_addressToLastTime()->get_element(sender)->set_lastTime(GetBlockTimeStamp());
    }

    std::string GetContractAddress() {
        return Bin2Hex(GetSelf().get_data());
    }

private:
    // add your local var definitions here...
    void LoseToken(std::string owner, uint64_t tokenId, uint64_t amount) {
        auto addressToToken = GetStorage()->get_addressToToken();
        Require(addressToToken->has_element(owner), "Owner Not Exist");
        auto tokens = addressToToken->get_element(owner)->get_tokens();
        Require(tokens->has_element(std::to_string(tokenId)), "Token Not Exist");
        auto token = tokens->get_element(std::to_string(tokenId));
        Require(token->get_amount() >= amount, "Insufficient Amount");
        uint64_t newAmount = token->get_amount() - amount;
        if (newAmount == 0) {
            tokens->delete_element(std::to_string(tokenId));
        } else {
            token->set_amount(token->get_amount() - amount);
        }
    }

    void GetToken(std::string owner, uint64_t tokenId, uint64_t amount) {
        auto addressToToken = GetStorage()->get_addressToToken();
        if (!(addressToToken->has_element(owner))) {
           addressToToken->add_element(owner); 
        }
        auto tokens = addressToToken->get_element(owner)->get_tokens();
        if (!(tokens->has_element(std::to_string(tokenId)))) {
            auto token = tokens->add_element(std::to_string(tokenId));
            token->set_tokenId(tokenId);
            token->set_amount(0);
            token->set_tokenURI(GetStorage()->get_tokenIdToURI()->get_element(std::to_string(tokenId))->get_url()); 
        }
        auto tokenFind = tokens->get_element(std::to_string(tokenId));
        tokenFind->set_amount(tokenFind->get_amount() + amount);
    }

    void DecreaseSupply(uint64_t tokenAmount, uint64_t amount, uint64_t itemId) {
        auto commodities = GetStorage()->get_commodities();
        auto commodity = commodities->get_element(std::to_string(itemId));
        if (tokenAmount > amount) {
            commodity->set_amount(tokenAmount - amount);
        } else {
           commodities->delete_element(std::to_string(itemId)); 
        }
    }
};

#endif //PLANET_CONTRACT_H