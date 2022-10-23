/*******************************************************************************
 * This file is auto generated by ChainStack, DO NOT MODIFY
 *
 * FileName : planet_contract_base.cpp
 * Desc     : Super class of contract. Sub class implements actual contract logic.
 * History  :
 * License  :
 *******************************************************************************/

#ifndef CDL_PLANET_CONTRACT_BASE_H
#define CDL_PLANET_CONTRACT_BASE_H

#include "generated/model/planet_model.h"
#include "generated/log/planet_log.h"
#include "generated/commons/error_code.h"
#include "generated/storage/planet_storage_ant_generated.h"

#include "libs/commons_2.0.0/dependency.h"
#include "libs/commons_2.0.0/logger.h"


using namespace planet;
using cstack::libs::commons::Logger;

class PlanetContractBase {

public:
    virtual ~PlanetContractBase() {}

    // LOGGER日志工具
    Logger LOGGER;

    void SetStorageMPtr(const storage::StorageMPtr& storage){
        storage_ = storage;
    }

    storage::StorageMPtr GetStorage() {
        return storage_;
    }


    /**
     * @external_call true
     */
    virtual std::string GetOwner() = 0;

    /**
     * @external_call true
     */
    virtual void MintNFT(
                    const std::string& token_u_r_i,
                    const uint64_t& amount) = 0;

    /**
     * @external_call true
     */
    virtual std::vector<model::Token> GetNFT(
                    const std::string& owner) = 0;

    /**
     * @external_call true
     */
    virtual void TransferNFT(
                    const std::string& from,
                    const std::string& to,
                    const uint64_t& token_id,
                    const uint64_t& amount) = 0;

    /**
     * @external_call true
     */
    virtual void AddItemToMarket(
                    const uint64_t& token_id,
                    const uint64_t& amount,
                    const uint64_t& price) = 0;

    /**
     * @external_call true
     */
    virtual void BuyItemAndTransferOwnership(
                    const uint64_t& item_id,
                    const uint64_t& amount) = 0;

    /**
     * @external_call true
     */
    virtual void RedeemItems(
                    const uint64_t& item_id,
                    const uint64_t& amount) = 0;

    /**
     * @external_call true
     */
    virtual std::vector<model::Commodity> GetUnsoldItems() = 0;

    /**
     * @external_call true
     */
    virtual std::vector<model::Commodity> GetCommoditiesByAddress(
                    const std::string& owner) = 0;

    /**
     * @external_call true
     */
    virtual std::vector<model::Token> GetRandomKItems() = 0;

    /**
     * @external_call true
     */
    virtual void ChangeFee(
                    const uint64_t& fee) = 0;

    /**
     * @external_call true
     */
    virtual void ChangeK(
                    const uint64_t& k) = 0;

    /**
     * @external_call true
     */
    virtual uint64_t GetContractBalance() = 0;

    /**
     * @external_call true
     */
    virtual void WithDraw(
                    const uint64_t& amount) = 0;

    /**
     * @external_call true
     */
    virtual uint64_t LastGetTime() = 0;


    // 重写跨合约调用方法（因为目前的CallContract定义在Contract对象里，委托的合约对象调用不到）
    template <typename T, typename... Args>
    inline decltype(auto) CallContract(const mychain::Identity& contract_id,
                                       const std::string& method,
                                       uint64_t value,
                                       uint64_t gas,
                                       Args... args) {
        auto params = pack(std::tuple<std::decay_t<Args>...>(args...));
        int code = detail::CallContract(
            contract_id.get_data().data(), contract_id.get_data().size(),
            method.data(), method.size(), value, gas,
            params.data(), params.size());

        // no matter call succeed or not, always get the result
        char* val = get_chain_data_buffer();
        uint32_t val_len = STORAGE_LIMIT;
        int get_ret = detail::GetCallResult(val, &val_len);
        if (get_ret) {
            code = 1;
            std::string msgPacked = pack("get result failed"s);
            val = msgPacked.data();
            val_len = msgPacked.size();
        } else if (val_len > STORAGE_LIMIT) {
            code = 1;
            std::string msgPacked = pack("bad result size"s);
            val = msgPacked.data();
            val_len = msgPacked.size();
        }
        auto ret = BuildCallResult<T>(code, std::string(val));

        return ret;
    }

private:
    // world state(mybuffer)访问对象
    planet::storage::StorageMPtr storage_;

};

#endif //CDL_PLANET_CONTRACT_BASE_H