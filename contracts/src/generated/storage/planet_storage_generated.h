// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_
#define FLATBUFFERS_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_

#include "flatbuffers/flatbuffers.h"

namespace planet {
namespace storage {

struct Storage;
struct StorageBuilder;
struct StorageT;

struct Tokens;
struct TokensBuilder;
struct TokensT;

struct Token;
struct TokenBuilder;
struct TokenT;

struct Commodity;
struct CommodityBuilder;
struct CommodityT;

struct Time;
struct TimeBuilder;
struct TimeT;

struct TokenURL;
struct TokenURLBuilder;
struct TokenURLT;

struct StorageT : public flatbuffers::NativeTable {
  typedef Storage TableType;
  std::string owner;
  uint64_t curTokenId;
  uint64_t curItemId;
  std::vector<std::unique_ptr<planet::storage::TokenURLT>> tokenIdToURI;
  std::vector<std::unique_ptr<planet::storage::TokensT>> addressToToken;
  std::vector<std::unique_ptr<planet::storage::TimeT>> addressToLastTime;
  std::vector<std::unique_ptr<planet::storage::CommodityT>> commodities;
  uint64_t sumWight;
  uint64_t fee;
  uint64_t K;
  StorageT()
      : curTokenId(0),
        curItemId(0),
        sumWight(0),
        fee(1ULL),
        K(5ULL) {
  }
};

struct Storage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef StorageT NativeTableType;
  typedef StorageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_OWNER = 4,
    VT_CURTOKENID = 6,
    VT_CURITEMID = 8,
    VT_TOKENIDTOURI = 10,
    VT_ADDRESSTOTOKEN = 12,
    VT_ADDRESSTOLASTTIME = 14,
    VT_COMMODITIES = 16,
    VT_SUMWIGHT = 18,
    VT_FEE = 20,
    VT_K = 22
  };
  const flatbuffers::String *owner() const {
    return GetPointer<const flatbuffers::String *>(VT_OWNER);
  }
  flatbuffers::String *mutable_owner() {
    return GetPointer<flatbuffers::String *>(VT_OWNER);
  }
  uint64_t curTokenId() const {
    return GetField<uint64_t>(VT_CURTOKENID, 0);
  }
  bool mutate_curTokenId(uint64_t _curTokenId) {
    return SetField<uint64_t>(VT_CURTOKENID, _curTokenId, 0);
  }
  uint64_t curItemId() const {
    return GetField<uint64_t>(VT_CURITEMID, 0);
  }
  bool mutate_curItemId(uint64_t _curItemId) {
    return SetField<uint64_t>(VT_CURITEMID, _curItemId, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>> *tokenIdToURI() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>> *>(VT_TOKENIDTOURI);
  }
  flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>> *mutable_tokenIdToURI() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>> *>(VT_TOKENIDTOURI);
  }
  const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>> *addressToToken() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>> *>(VT_ADDRESSTOTOKEN);
  }
  flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>> *mutable_addressToToken() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>> *>(VT_ADDRESSTOTOKEN);
  }
  const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>> *addressToLastTime() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>> *>(VT_ADDRESSTOLASTTIME);
  }
  flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>> *mutable_addressToLastTime() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>> *>(VT_ADDRESSTOLASTTIME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>> *commodities() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>> *>(VT_COMMODITIES);
  }
  flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>> *mutable_commodities() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>> *>(VT_COMMODITIES);
  }
  uint64_t sumWight() const {
    return GetField<uint64_t>(VT_SUMWIGHT, 0);
  }
  bool mutate_sumWight(uint64_t _sumWight) {
    return SetField<uint64_t>(VT_SUMWIGHT, _sumWight, 0);
  }
  uint64_t fee() const {
    return GetField<uint64_t>(VT_FEE, 1ULL);
  }
  bool mutate_fee(uint64_t _fee) {
    return SetField<uint64_t>(VT_FEE, _fee, 1ULL);
  }
  uint64_t K() const {
    return GetField<uint64_t>(VT_K, 5ULL);
  }
  bool mutate_K(uint64_t _K) {
    return SetField<uint64_t>(VT_K, _K, 5ULL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_OWNER) &&
           verifier.VerifyString(owner()) &&
           VerifyField<uint64_t>(verifier, VT_CURTOKENID) &&
           VerifyField<uint64_t>(verifier, VT_CURITEMID) &&
           VerifyOffset(verifier, VT_TOKENIDTOURI) &&
           verifier.VerifyVector(tokenIdToURI()) &&
           verifier.VerifyVectorOfTables(tokenIdToURI()) &&
           VerifyOffset(verifier, VT_ADDRESSTOTOKEN) &&
           verifier.VerifyVector(addressToToken()) &&
           verifier.VerifyVectorOfTables(addressToToken()) &&
           VerifyOffset(verifier, VT_ADDRESSTOLASTTIME) &&
           verifier.VerifyVector(addressToLastTime()) &&
           verifier.VerifyVectorOfTables(addressToLastTime()) &&
           VerifyOffset(verifier, VT_COMMODITIES) &&
           verifier.VerifyVector(commodities()) &&
           verifier.VerifyVectorOfTables(commodities()) &&
           VerifyField<uint64_t>(verifier, VT_SUMWIGHT) &&
           VerifyField<uint64_t>(verifier, VT_FEE) &&
           VerifyField<uint64_t>(verifier, VT_K) &&
           verifier.EndTable();
  }
  StorageT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(StorageT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Storage> Pack(flatbuffers::FlatBufferBuilder &_fbb, const StorageT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct StorageBuilder {
  typedef Storage Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_owner(flatbuffers::Offset<flatbuffers::String> owner) {
    fbb_.AddOffset(Storage::VT_OWNER, owner);
  }
  void add_curTokenId(uint64_t curTokenId) {
    fbb_.AddElement<uint64_t>(Storage::VT_CURTOKENID, curTokenId, 0);
  }
  void add_curItemId(uint64_t curItemId) {
    fbb_.AddElement<uint64_t>(Storage::VT_CURITEMID, curItemId, 0);
  }
  void add_tokenIdToURI(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>>> tokenIdToURI) {
    fbb_.AddOffset(Storage::VT_TOKENIDTOURI, tokenIdToURI);
  }
  void add_addressToToken(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>>> addressToToken) {
    fbb_.AddOffset(Storage::VT_ADDRESSTOTOKEN, addressToToken);
  }
  void add_addressToLastTime(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>>> addressToLastTime) {
    fbb_.AddOffset(Storage::VT_ADDRESSTOLASTTIME, addressToLastTime);
  }
  void add_commodities(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>>> commodities) {
    fbb_.AddOffset(Storage::VT_COMMODITIES, commodities);
  }
  void add_sumWight(uint64_t sumWight) {
    fbb_.AddElement<uint64_t>(Storage::VT_SUMWIGHT, sumWight, 0);
  }
  void add_fee(uint64_t fee) {
    fbb_.AddElement<uint64_t>(Storage::VT_FEE, fee, 1ULL);
  }
  void add_K(uint64_t K) {
    fbb_.AddElement<uint64_t>(Storage::VT_K, K, 5ULL);
  }
  explicit StorageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StorageBuilder &operator=(const StorageBuilder &);
  flatbuffers::Offset<Storage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Storage>(end);
    return o;
  }
};

inline flatbuffers::Offset<Storage> CreateStorage(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> owner = 0,
    uint64_t curTokenId = 0,
    uint64_t curItemId = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::TokenURL>>> tokenIdToURI = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Tokens>>> addressToToken = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Time>>> addressToLastTime = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Commodity>>> commodities = 0,
    uint64_t sumWight = 0,
    uint64_t fee = 1ULL,
    uint64_t K = 5ULL) {
  StorageBuilder builder_(_fbb);
  builder_.add_K(K);
  builder_.add_fee(fee);
  builder_.add_sumWight(sumWight);
  builder_.add_curItemId(curItemId);
  builder_.add_curTokenId(curTokenId);
  builder_.add_commodities(commodities);
  builder_.add_addressToLastTime(addressToLastTime);
  builder_.add_addressToToken(addressToToken);
  builder_.add_tokenIdToURI(tokenIdToURI);
  builder_.add_owner(owner);
  return builder_.Finish();
}

inline flatbuffers::Offset<Storage> CreateStorageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *owner = nullptr,
    uint64_t curTokenId = 0,
    uint64_t curItemId = 0,
    const std::vector<flatbuffers::Offset<planet::storage::TokenURL>> *tokenIdToURI = nullptr,
    const std::vector<flatbuffers::Offset<planet::storage::Tokens>> *addressToToken = nullptr,
    const std::vector<flatbuffers::Offset<planet::storage::Time>> *addressToLastTime = nullptr,
    const std::vector<flatbuffers::Offset<planet::storage::Commodity>> *commodities = nullptr,
    uint64_t sumWight = 0,
    uint64_t fee = 1ULL,
    uint64_t K = 5ULL) {
  auto owner__ = owner ? _fbb.CreateString(owner) : 0;
  auto tokenIdToURI__ = tokenIdToURI ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::TokenURL>>(*tokenIdToURI) : 0;
  auto addressToToken__ = addressToToken ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Tokens>>(*addressToToken) : 0;
  auto addressToLastTime__ = addressToLastTime ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Time>>(*addressToLastTime) : 0;
  auto commodities__ = commodities ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Commodity>>(*commodities) : 0;
  return planet::storage::CreateStorage(
      _fbb,
      owner__,
      curTokenId,
      curItemId,
      tokenIdToURI__,
      addressToToken__,
      addressToLastTime__,
      commodities__,
      sumWight,
      fee,
      K);
}

flatbuffers::Offset<Storage> CreateStorage(flatbuffers::FlatBufferBuilder &_fbb, const StorageT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TokensT : public flatbuffers::NativeTable {
  typedef Tokens TableType;
  std::vector<std::unique_ptr<planet::storage::TokenT>> tokens;
  TokensT() {
  }
};

struct Tokens FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TokensT NativeTableType;
  typedef TokensBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKENS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>> *tokens() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>> *>(VT_TOKENS);
  }
  flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>> *mutable_tokens() {
    return GetPointer<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>> *>(VT_TOKENS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TOKENS) &&
           verifier.VerifyVector(tokens()) &&
           verifier.VerifyVectorOfTables(tokens()) &&
           verifier.EndTable();
  }
  TokensT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TokensT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Tokens> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokensT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TokensBuilder {
  typedef Tokens Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tokens(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>>> tokens) {
    fbb_.AddOffset(Tokens::VT_TOKENS, tokens);
  }
  explicit TokensBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TokensBuilder &operator=(const TokensBuilder &);
  flatbuffers::Offset<Tokens> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Tokens>(end);
    return o;
  }
};

inline flatbuffers::Offset<Tokens> CreateTokens(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<planet::storage::Token>>> tokens = 0) {
  TokensBuilder builder_(_fbb);
  builder_.add_tokens(tokens);
  return builder_.Finish();
}

inline flatbuffers::Offset<Tokens> CreateTokensDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<planet::storage::Token>> *tokens = nullptr) {
  auto tokens__ = tokens ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Token>>(*tokens) : 0;
  return planet::storage::CreateTokens(
      _fbb,
      tokens__);
}

flatbuffers::Offset<Tokens> CreateTokens(flatbuffers::FlatBufferBuilder &_fbb, const TokensT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TokenT : public flatbuffers::NativeTable {
  typedef Token TableType;
  uint64_t tokenId;
  std::string tokenURI;
  uint64_t amount;
  TokenT()
      : tokenId(0),
        amount(0) {
  }
};

struct Token FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TokenT NativeTableType;
  typedef TokenBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKENID = 4,
    VT_TOKENURI = 6,
    VT_AMOUNT = 8
  };
  uint64_t tokenId() const {
    return GetField<uint64_t>(VT_TOKENID, 0);
  }
  bool mutate_tokenId(uint64_t _tokenId) {
    return SetField<uint64_t>(VT_TOKENID, _tokenId, 0);
  }
  const flatbuffers::String *tokenURI() const {
    return GetPointer<const flatbuffers::String *>(VT_TOKENURI);
  }
  flatbuffers::String *mutable_tokenURI() {
    return GetPointer<flatbuffers::String *>(VT_TOKENURI);
  }
  uint64_t amount() const {
    return GetField<uint64_t>(VT_AMOUNT, 0);
  }
  bool mutate_amount(uint64_t _amount) {
    return SetField<uint64_t>(VT_AMOUNT, _amount, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKENID) &&
           VerifyOffset(verifier, VT_TOKENURI) &&
           verifier.VerifyString(tokenURI()) &&
           VerifyField<uint64_t>(verifier, VT_AMOUNT) &&
           verifier.EndTable();
  }
  TokenT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TokenT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Token> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokenT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TokenBuilder {
  typedef Token Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tokenId(uint64_t tokenId) {
    fbb_.AddElement<uint64_t>(Token::VT_TOKENID, tokenId, 0);
  }
  void add_tokenURI(flatbuffers::Offset<flatbuffers::String> tokenURI) {
    fbb_.AddOffset(Token::VT_TOKENURI, tokenURI);
  }
  void add_amount(uint64_t amount) {
    fbb_.AddElement<uint64_t>(Token::VT_AMOUNT, amount, 0);
  }
  explicit TokenBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TokenBuilder &operator=(const TokenBuilder &);
  flatbuffers::Offset<Token> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Token>(end);
    return o;
  }
};

inline flatbuffers::Offset<Token> CreateToken(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t tokenId = 0,
    flatbuffers::Offset<flatbuffers::String> tokenURI = 0,
    uint64_t amount = 0) {
  TokenBuilder builder_(_fbb);
  builder_.add_amount(amount);
  builder_.add_tokenId(tokenId);
  builder_.add_tokenURI(tokenURI);
  return builder_.Finish();
}

inline flatbuffers::Offset<Token> CreateTokenDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t tokenId = 0,
    const char *tokenURI = nullptr,
    uint64_t amount = 0) {
  auto tokenURI__ = tokenURI ? _fbb.CreateString(tokenURI) : 0;
  return planet::storage::CreateToken(
      _fbb,
      tokenId,
      tokenURI__,
      amount);
}

flatbuffers::Offset<Token> CreateToken(flatbuffers::FlatBufferBuilder &_fbb, const TokenT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct CommodityT : public flatbuffers::NativeTable {
  typedef Commodity TableType;
  uint64_t itemId;
  uint64_t tokenId;
  std::string tokenURI;
  std::string owner;
  uint64_t price;
  uint64_t amount;
  CommodityT()
      : itemId(0),
        tokenId(0),
        price(0),
        amount(0) {
  }
};

struct Commodity FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CommodityT NativeTableType;
  typedef CommodityBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ITEMID = 4,
    VT_TOKENID = 6,
    VT_TOKENURI = 8,
    VT_OWNER = 10,
    VT_PRICE = 12,
    VT_AMOUNT = 14
  };
  uint64_t itemId() const {
    return GetField<uint64_t>(VT_ITEMID, 0);
  }
  bool mutate_itemId(uint64_t _itemId) {
    return SetField<uint64_t>(VT_ITEMID, _itemId, 0);
  }
  uint64_t tokenId() const {
    return GetField<uint64_t>(VT_TOKENID, 0);
  }
  bool mutate_tokenId(uint64_t _tokenId) {
    return SetField<uint64_t>(VT_TOKENID, _tokenId, 0);
  }
  const flatbuffers::String *tokenURI() const {
    return GetPointer<const flatbuffers::String *>(VT_TOKENURI);
  }
  flatbuffers::String *mutable_tokenURI() {
    return GetPointer<flatbuffers::String *>(VT_TOKENURI);
  }
  const flatbuffers::String *owner() const {
    return GetPointer<const flatbuffers::String *>(VT_OWNER);
  }
  flatbuffers::String *mutable_owner() {
    return GetPointer<flatbuffers::String *>(VT_OWNER);
  }
  uint64_t price() const {
    return GetField<uint64_t>(VT_PRICE, 0);
  }
  bool mutate_price(uint64_t _price) {
    return SetField<uint64_t>(VT_PRICE, _price, 0);
  }
  uint64_t amount() const {
    return GetField<uint64_t>(VT_AMOUNT, 0);
  }
  bool mutate_amount(uint64_t _amount) {
    return SetField<uint64_t>(VT_AMOUNT, _amount, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_ITEMID) &&
           VerifyField<uint64_t>(verifier, VT_TOKENID) &&
           VerifyOffset(verifier, VT_TOKENURI) &&
           verifier.VerifyString(tokenURI()) &&
           VerifyOffset(verifier, VT_OWNER) &&
           verifier.VerifyString(owner()) &&
           VerifyField<uint64_t>(verifier, VT_PRICE) &&
           VerifyField<uint64_t>(verifier, VT_AMOUNT) &&
           verifier.EndTable();
  }
  CommodityT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CommodityT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Commodity> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommodityT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CommodityBuilder {
  typedef Commodity Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_itemId(uint64_t itemId) {
    fbb_.AddElement<uint64_t>(Commodity::VT_ITEMID, itemId, 0);
  }
  void add_tokenId(uint64_t tokenId) {
    fbb_.AddElement<uint64_t>(Commodity::VT_TOKENID, tokenId, 0);
  }
  void add_tokenURI(flatbuffers::Offset<flatbuffers::String> tokenURI) {
    fbb_.AddOffset(Commodity::VT_TOKENURI, tokenURI);
  }
  void add_owner(flatbuffers::Offset<flatbuffers::String> owner) {
    fbb_.AddOffset(Commodity::VT_OWNER, owner);
  }
  void add_price(uint64_t price) {
    fbb_.AddElement<uint64_t>(Commodity::VT_PRICE, price, 0);
  }
  void add_amount(uint64_t amount) {
    fbb_.AddElement<uint64_t>(Commodity::VT_AMOUNT, amount, 0);
  }
  explicit CommodityBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CommodityBuilder &operator=(const CommodityBuilder &);
  flatbuffers::Offset<Commodity> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Commodity>(end);
    return o;
  }
};

inline flatbuffers::Offset<Commodity> CreateCommodity(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t itemId = 0,
    uint64_t tokenId = 0,
    flatbuffers::Offset<flatbuffers::String> tokenURI = 0,
    flatbuffers::Offset<flatbuffers::String> owner = 0,
    uint64_t price = 0,
    uint64_t amount = 0) {
  CommodityBuilder builder_(_fbb);
  builder_.add_amount(amount);
  builder_.add_price(price);
  builder_.add_tokenId(tokenId);
  builder_.add_itemId(itemId);
  builder_.add_owner(owner);
  builder_.add_tokenURI(tokenURI);
  return builder_.Finish();
}

inline flatbuffers::Offset<Commodity> CreateCommodityDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t itemId = 0,
    uint64_t tokenId = 0,
    const char *tokenURI = nullptr,
    const char *owner = nullptr,
    uint64_t price = 0,
    uint64_t amount = 0) {
  auto tokenURI__ = tokenURI ? _fbb.CreateString(tokenURI) : 0;
  auto owner__ = owner ? _fbb.CreateString(owner) : 0;
  return planet::storage::CreateCommodity(
      _fbb,
      itemId,
      tokenId,
      tokenURI__,
      owner__,
      price,
      amount);
}

flatbuffers::Offset<Commodity> CreateCommodity(flatbuffers::FlatBufferBuilder &_fbb, const CommodityT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TimeT : public flatbuffers::NativeTable {
  typedef Time TableType;
  uint64_t lastTime;
  TimeT()
      : lastTime(0) {
  }
};

struct Time FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TimeT NativeTableType;
  typedef TimeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LASTTIME = 4
  };
  uint64_t lastTime() const {
    return GetField<uint64_t>(VT_LASTTIME, 0);
  }
  bool mutate_lastTime(uint64_t _lastTime) {
    return SetField<uint64_t>(VT_LASTTIME, _lastTime, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_LASTTIME) &&
           verifier.EndTable();
  }
  TimeT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TimeT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Time> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TimeT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TimeBuilder {
  typedef Time Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_lastTime(uint64_t lastTime) {
    fbb_.AddElement<uint64_t>(Time::VT_LASTTIME, lastTime, 0);
  }
  explicit TimeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TimeBuilder &operator=(const TimeBuilder &);
  flatbuffers::Offset<Time> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Time>(end);
    return o;
  }
};

inline flatbuffers::Offset<Time> CreateTime(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t lastTime = 0) {
  TimeBuilder builder_(_fbb);
  builder_.add_lastTime(lastTime);
  return builder_.Finish();
}

flatbuffers::Offset<Time> CreateTime(flatbuffers::FlatBufferBuilder &_fbb, const TimeT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TokenURLT : public flatbuffers::NativeTable {
  typedef TokenURL TableType;
  std::string url;
  TokenURLT() {
  }
};

struct TokenURL FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TokenURLT NativeTableType;
  typedef TokenURLBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_URL = 4
  };
  const flatbuffers::String *url() const {
    return GetPointer<const flatbuffers::String *>(VT_URL);
  }
  flatbuffers::String *mutable_url() {
    return GetPointer<flatbuffers::String *>(VT_URL);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_URL) &&
           verifier.VerifyString(url()) &&
           verifier.EndTable();
  }
  TokenURLT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TokenURLT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<TokenURL> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokenURLT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TokenURLBuilder {
  typedef TokenURL Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_url(flatbuffers::Offset<flatbuffers::String> url) {
    fbb_.AddOffset(TokenURL::VT_URL, url);
  }
  explicit TokenURLBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TokenURLBuilder &operator=(const TokenURLBuilder &);
  flatbuffers::Offset<TokenURL> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TokenURL>(end);
    return o;
  }
};

inline flatbuffers::Offset<TokenURL> CreateTokenURL(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> url = 0) {
  TokenURLBuilder builder_(_fbb);
  builder_.add_url(url);
  return builder_.Finish();
}

inline flatbuffers::Offset<TokenURL> CreateTokenURLDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *url = nullptr) {
  auto url__ = url ? _fbb.CreateString(url) : 0;
  return planet::storage::CreateTokenURL(
      _fbb,
      url__);
}

flatbuffers::Offset<TokenURL> CreateTokenURL(flatbuffers::FlatBufferBuilder &_fbb, const TokenURLT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline StorageT *Storage::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::StorageT> _o = std::unique_ptr<planet::storage::StorageT>(new StorageT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Storage::UnPackTo(StorageT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = owner(); if (_e) _o->owner = _e->str(); }
  { auto _e = curTokenId(); _o->curTokenId = _e; }
  { auto _e = curItemId(); _o->curItemId = _e; }
  { auto _e = tokenIdToURI(); if (_e) { _o->tokenIdToURI.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tokenIdToURI[_i] = std::unique_ptr<planet::storage::TokenURLT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = addressToToken(); if (_e) { _o->addressToToken.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->addressToToken[_i] = std::unique_ptr<planet::storage::TokensT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = addressToLastTime(); if (_e) { _o->addressToLastTime.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->addressToLastTime[_i] = std::unique_ptr<planet::storage::TimeT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = commodities(); if (_e) { _o->commodities.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->commodities[_i] = std::unique_ptr<planet::storage::CommodityT>(_e->Get(_i)->UnPack(_resolver)); } } }
  { auto _e = sumWight(); _o->sumWight = _e; }
  { auto _e = fee(); _o->fee = _e; }
  { auto _e = K(); _o->K = _e; }
}

inline flatbuffers::Offset<Storage> Storage::Pack(flatbuffers::FlatBufferBuilder &_fbb, const StorageT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateStorage(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Storage> CreateStorage(flatbuffers::FlatBufferBuilder &_fbb, const StorageT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const StorageT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _owner = _o->owner.empty() ? 0 : _fbb.CreateString(_o->owner);
  auto _curTokenId = _o->curTokenId;
  auto _curItemId = _o->curItemId;
  auto _tokenIdToURI = _o->tokenIdToURI.size() ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::TokenURL>> (_o->tokenIdToURI.size(), [](size_t i, _VectorArgs *__va) { return CreateTokenURL(*__va->__fbb, __va->__o->tokenIdToURI[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _addressToToken = _o->addressToToken.size() ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Tokens>> (_o->addressToToken.size(), [](size_t i, _VectorArgs *__va) { return CreateTokens(*__va->__fbb, __va->__o->addressToToken[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _addressToLastTime = _o->addressToLastTime.size() ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Time>> (_o->addressToLastTime.size(), [](size_t i, _VectorArgs *__va) { return CreateTime(*__va->__fbb, __va->__o->addressToLastTime[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _commodities = _o->commodities.size() ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Commodity>> (_o->commodities.size(), [](size_t i, _VectorArgs *__va) { return CreateCommodity(*__va->__fbb, __va->__o->commodities[i].get(), __va->__rehasher); }, &_va ) : 0;
  auto _sumWight = _o->sumWight;
  auto _fee = _o->fee;
  auto _K = _o->K;
  return planet::storage::CreateStorage(
      _fbb,
      _owner,
      _curTokenId,
      _curItemId,
      _tokenIdToURI,
      _addressToToken,
      _addressToLastTime,
      _commodities,
      _sumWight,
      _fee,
      _K);
}

inline TokensT *Tokens::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::TokensT> _o = std::unique_ptr<planet::storage::TokensT>(new TokensT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Tokens::UnPackTo(TokensT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = tokens(); if (_e) { _o->tokens.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tokens[_i] = std::unique_ptr<planet::storage::TokenT>(_e->Get(_i)->UnPack(_resolver)); } } }
}

inline flatbuffers::Offset<Tokens> Tokens::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokensT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTokens(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Tokens> CreateTokens(flatbuffers::FlatBufferBuilder &_fbb, const TokensT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TokensT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _tokens = _o->tokens.size() ? _fbb.CreateVector<flatbuffers::Offset<planet::storage::Token>> (_o->tokens.size(), [](size_t i, _VectorArgs *__va) { return CreateToken(*__va->__fbb, __va->__o->tokens[i].get(), __va->__rehasher); }, &_va ) : 0;
  return planet::storage::CreateTokens(
      _fbb,
      _tokens);
}

inline TokenT *Token::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::TokenT> _o = std::unique_ptr<planet::storage::TokenT>(new TokenT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Token::UnPackTo(TokenT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = tokenId(); _o->tokenId = _e; }
  { auto _e = tokenURI(); if (_e) _o->tokenURI = _e->str(); }
  { auto _e = amount(); _o->amount = _e; }
}

inline flatbuffers::Offset<Token> Token::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokenT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateToken(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Token> CreateToken(flatbuffers::FlatBufferBuilder &_fbb, const TokenT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TokenT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _tokenId = _o->tokenId;
  auto _tokenURI = _o->tokenURI.empty() ? 0 : _fbb.CreateString(_o->tokenURI);
  auto _amount = _o->amount;
  return planet::storage::CreateToken(
      _fbb,
      _tokenId,
      _tokenURI,
      _amount);
}

inline CommodityT *Commodity::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::CommodityT> _o = std::unique_ptr<planet::storage::CommodityT>(new CommodityT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Commodity::UnPackTo(CommodityT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = itemId(); _o->itemId = _e; }
  { auto _e = tokenId(); _o->tokenId = _e; }
  { auto _e = tokenURI(); if (_e) _o->tokenURI = _e->str(); }
  { auto _e = owner(); if (_e) _o->owner = _e->str(); }
  { auto _e = price(); _o->price = _e; }
  { auto _e = amount(); _o->amount = _e; }
}

inline flatbuffers::Offset<Commodity> Commodity::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommodityT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCommodity(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Commodity> CreateCommodity(flatbuffers::FlatBufferBuilder &_fbb, const CommodityT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CommodityT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _itemId = _o->itemId;
  auto _tokenId = _o->tokenId;
  auto _tokenURI = _o->tokenURI.empty() ? 0 : _fbb.CreateString(_o->tokenURI);
  auto _owner = _o->owner.empty() ? 0 : _fbb.CreateString(_o->owner);
  auto _price = _o->price;
  auto _amount = _o->amount;
  return planet::storage::CreateCommodity(
      _fbb,
      _itemId,
      _tokenId,
      _tokenURI,
      _owner,
      _price,
      _amount);
}

inline TimeT *Time::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::TimeT> _o = std::unique_ptr<planet::storage::TimeT>(new TimeT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Time::UnPackTo(TimeT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = lastTime(); _o->lastTime = _e; }
}

inline flatbuffers::Offset<Time> Time::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TimeT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTime(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Time> CreateTime(flatbuffers::FlatBufferBuilder &_fbb, const TimeT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TimeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _lastTime = _o->lastTime;
  return planet::storage::CreateTime(
      _fbb,
      _lastTime);
}

inline TokenURLT *TokenURL::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<planet::storage::TokenURLT> _o = std::unique_ptr<planet::storage::TokenURLT>(new TokenURLT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TokenURL::UnPackTo(TokenURLT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = url(); if (_e) _o->url = _e->str(); }
}

inline flatbuffers::Offset<TokenURL> TokenURL::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TokenURLT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTokenURL(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<TokenURL> CreateTokenURL(flatbuffers::FlatBufferBuilder &_fbb, const TokenURLT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TokenURLT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _url = _o->url.empty() ? 0 : _fbb.CreateString(_o->url);
  return planet::storage::CreateTokenURL(
      _fbb,
      _url);
}

inline const planet::storage::Storage *GetStorage(const void *buf) {
  return flatbuffers::GetRoot<planet::storage::Storage>(buf);
}

inline const planet::storage::Storage *GetSizePrefixedStorage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<planet::storage::Storage>(buf);
}

inline Storage *GetMutableStorage(void *buf) {
  return flatbuffers::GetMutableRoot<Storage>(buf);
}

inline bool VerifyStorageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<planet::storage::Storage>(nullptr);
}

inline bool VerifySizePrefixedStorageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<planet::storage::Storage>(nullptr);
}

inline void FinishStorageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<planet::storage::Storage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedStorageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<planet::storage::Storage> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<planet::storage::StorageT> UnPackStorage(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<planet::storage::StorageT>(GetStorage(buf)->UnPack(res));
}

inline std::unique_ptr<planet::storage::StorageT> UnPackSizePrefixedStorage(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<planet::storage::StorageT>(GetSizePrefixedStorage(buf)->UnPack(res));
}

}  // namespace storage
}  // namespace planet

#endif  // FLATBUFFERS_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_
