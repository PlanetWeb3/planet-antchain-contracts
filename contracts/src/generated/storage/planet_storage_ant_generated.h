// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_ANT_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_
#define FLATBUFFERS_ANT_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_

#include "flatbuffers/flatbuffers.h"
#include "mybuffer/mybuffer.h"
#include "planet_storage_generated.h"
#include "mybuffer/wasmlib.h"


#ifndef MYBUFFER_KEY_H_CONST_ALLOW_DOT_IN_MAP_KEY
#define MYBUFFER_KEY_H_CONST_ALLOW_DOT_IN_MAP_KEY
const bool kAllowDotInMapKey = false;
#endif

namespace planet {
namespace storage {

struct StorageM;
typedef flatbuffers::Offset<Storage> StorageMOffset;
typedef std::shared_ptr<StorageM> StorageMPtr;
typedef std::shared_ptr<MyVector<StorageM, StorageT> > StorageMVectorPtr;
typedef std::shared_ptr<MyMap<StorageM> > StorageMMapPtr;
typedef std::shared_ptr<MyMapIterable<StorageM> > StorageMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<StorageM> > StorageMMapKeyIterator;

struct TokensM;
typedef flatbuffers::Offset<Tokens> TokensMOffset;
typedef std::shared_ptr<TokensM> TokensMPtr;
typedef std::shared_ptr<MyVector<TokensM, TokensT> > TokensMVectorPtr;
typedef std::shared_ptr<MyMap<TokensM> > TokensMMapPtr;
typedef std::shared_ptr<MyMapIterable<TokensM> > TokensMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<TokensM> > TokensMMapKeyIterator;

struct TokenM;
typedef flatbuffers::Offset<Token> TokenMOffset;
typedef std::shared_ptr<TokenM> TokenMPtr;
typedef std::shared_ptr<MyVector<TokenM, TokenT> > TokenMVectorPtr;
typedef std::shared_ptr<MyMap<TokenM> > TokenMMapPtr;
typedef std::shared_ptr<MyMapIterable<TokenM> > TokenMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<TokenM> > TokenMMapKeyIterator;

struct CommodityM;
typedef flatbuffers::Offset<Commodity> CommodityMOffset;
typedef std::shared_ptr<CommodityM> CommodityMPtr;
typedef std::shared_ptr<MyVector<CommodityM, CommodityT> > CommodityMVectorPtr;
typedef std::shared_ptr<MyMap<CommodityM> > CommodityMMapPtr;
typedef std::shared_ptr<MyMapIterable<CommodityM> > CommodityMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<CommodityM> > CommodityMMapKeyIterator;

struct TimeM;
typedef flatbuffers::Offset<Time> TimeMOffset;
typedef std::shared_ptr<TimeM> TimeMPtr;
typedef std::shared_ptr<MyVector<TimeM, TimeT> > TimeMVectorPtr;
typedef std::shared_ptr<MyMap<TimeM> > TimeMMapPtr;
typedef std::shared_ptr<MyMapIterable<TimeM> > TimeMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<TimeM> > TimeMMapKeyIterator;

struct TokenURLM;
typedef flatbuffers::Offset<TokenURL> TokenURLMOffset;
typedef std::shared_ptr<TokenURLM> TokenURLMPtr;
typedef std::shared_ptr<MyVector<TokenURLM, TokenURLT> > TokenURLMVectorPtr;
typedef std::shared_ptr<MyMap<TokenURLM> > TokenURLMMapPtr;
typedef std::shared_ptr<MyMapIterable<TokenURLM> > TokenURLMMapIterablePtr;
typedef MapKeyIterator<MyMapIterable<TokenURLM> > TokenURLMMapKeyIterator;

struct StorageM : public MyTable<StorageT, Storage> {
private: 
  std::weak_ptr<MyMap<planet::storage::TokenURLM> > tokenIdToURI_;
  std::weak_ptr<MyMap<planet::storage::TokensM> > addressToToken_;
  std::weak_ptr<MyMap<planet::storage::TimeM> > addressToLastTime_;
  std::weak_ptr<MyMapIterable<planet::storage::CommodityM> > commodities_;
  using MyTable<StorageT, Storage>::MyTable;
  friend class MyFactory<StorageM, StorageT>;
  friend class MyFactory<StorageM>;
public: 
  ~StorageM() {}
  std::string get_owner() {
    return native_table_ptr_->owner;
  }
  bool set_owner(std::string _owner) {
    uint32_t size_limit = 0 ? 0 : kDefaultStringSizeLimit;
    if( _owner.length() > size_limit ) {
        mychain_lib_ptr_->MyRevert("The string size is over the limit" + std::to_string(size_limit));
    }
    set_dirty(true);
    native_table_ptr_->owner = std::move(_owner);
    return true;
  }
  uint64_t get_curTokenId() {
    return native_table_ptr_->curTokenId;
  }
  bool set_curTokenId(uint64_t _curTokenId) {
    set_dirty(true);
    native_table_ptr_->curTokenId = _curTokenId;
    return true;
  }
  uint64_t get_curItemId() {
    return native_table_ptr_->curItemId;
  }
  bool set_curItemId(uint64_t _curItemId) {
    set_dirty(true);
    native_table_ptr_->curItemId = _curItemId;
    return true;
  }
  planet::storage::TokenURLMMapPtr get_tokenIdToURI() {
    planet::storage::TokenURLMMapPtr rv;
    rv = tokenIdToURI_.lock();
    if (!rv) {
      rv = MyFactory<MyMap<planet::storage::TokenURLM> >::make_instance(mychain_lib_ptr_, 
          base_key_->get_table_field_key(FieldNodeType::MAP_V2, 3/*field_id*/, "tokenIdToURI"/*field_name*/), get_self_ptr());
      tokenIdToURI_ = rv;
    }
    return rv;
  }
  planet::storage::TokensMMapPtr get_addressToToken() {
    planet::storage::TokensMMapPtr rv;
    rv = addressToToken_.lock();
    if (!rv) {
      rv = MyFactory<MyMap<planet::storage::TokensM> >::make_instance(mychain_lib_ptr_, 
          base_key_->get_table_field_key(FieldNodeType::MAP_V2, 4/*field_id*/, "addressToToken"/*field_name*/), get_self_ptr());
      addressToToken_ = rv;
    }
    return rv;
  }
  planet::storage::TimeMMapPtr get_addressToLastTime() {
    planet::storage::TimeMMapPtr rv;
    rv = addressToLastTime_.lock();
    if (!rv) {
      rv = MyFactory<MyMap<planet::storage::TimeM> >::make_instance(mychain_lib_ptr_, 
          base_key_->get_table_field_key(FieldNodeType::MAP_V2, 5/*field_id*/, "addressToLastTime"/*field_name*/), get_self_ptr());
      addressToLastTime_ = rv;
    }
    return rv;
  }
  planet::storage::CommodityMMapIterablePtr get_commodities() {
    planet::storage::CommodityMMapIterablePtr rv;
    rv = commodities_.lock();
    if (!rv) {
      rv = MyFactory<MyMapIterable<planet::storage::CommodityM> >::make_instance(mychain_lib_ptr_, 
          base_key_->get_table_field_key(FieldNodeType::MAP_V2, 6/*field_id*/, "commodities"/*field_name*/), get_self_ptr());
      commodities_ = rv;
    }
    return rv;
  }
  uint64_t get_sumWight() {
    return native_table_ptr_->sumWight;
  }
  bool set_sumWight(uint64_t _sumWight) {
    set_dirty(true);
    native_table_ptr_->sumWight = _sumWight;
    return true;
  }
  uint64_t get_fee() {
    return native_table_ptr_->fee;
  }
  bool set_fee(uint64_t _fee) {
    set_dirty(true);
    native_table_ptr_->fee = _fee;
    return true;
  }
  uint64_t get_K() {
    return native_table_ptr_->K;
  }
  bool set_K(uint64_t _K) {
    set_dirty(true);
    native_table_ptr_->K = _K;
    return true;
  }
};

struct TokensM : public MyTable<TokensT, Tokens> {
private: 
  std::weak_ptr<MyMapIterable<planet::storage::TokenM> > tokens_;
  using MyTable<TokensT, Tokens>::MyTable;
  friend class MyFactory<TokensM, TokensT>;
  friend class MyFactory<TokensM>;
public: 
  ~TokensM() {}
  planet::storage::TokenMMapIterablePtr get_tokens() {
    planet::storage::TokenMMapIterablePtr rv;
    rv = tokens_.lock();
    if (!rv) {
      rv = MyFactory<MyMapIterable<planet::storage::TokenM> >::make_instance(mychain_lib_ptr_, 
          base_key_->get_table_field_key(FieldNodeType::MAP_V2, 0/*field_id*/, "tokens"/*field_name*/), get_self_ptr());
      tokens_ = rv;
    }
    return rv;
  }
};

struct TokenM : public MyTable<TokenT, Token> {
private: 
  using MyTable<TokenT, Token>::MyTable;
  friend class MyFactory<TokenM, TokenT>;
  friend class MyFactory<TokenM>;
public: 
  ~TokenM() {}
  uint64_t get_tokenId() {
    return native_table_ptr_->tokenId;
  }
  bool set_tokenId(uint64_t _tokenId) {
    set_dirty(true);
    native_table_ptr_->tokenId = _tokenId;
    return true;
  }
  std::string get_tokenURI() {
    return native_table_ptr_->tokenURI;
  }
  bool set_tokenURI(std::string _tokenURI) {
    uint32_t size_limit = 0 ? 0 : kDefaultStringSizeLimit;
    if( _tokenURI.length() > size_limit ) {
        mychain_lib_ptr_->MyRevert("The string size is over the limit" + std::to_string(size_limit));
    }
    set_dirty(true);
    native_table_ptr_->tokenURI = std::move(_tokenURI);
    return true;
  }
  uint64_t get_amount() {
    return native_table_ptr_->amount;
  }
  bool set_amount(uint64_t _amount) {
    set_dirty(true);
    native_table_ptr_->amount = _amount;
    return true;
  }
};

struct CommodityM : public MyTable<CommodityT, Commodity> {
private: 
  using MyTable<CommodityT, Commodity>::MyTable;
  friend class MyFactory<CommodityM, CommodityT>;
  friend class MyFactory<CommodityM>;
public: 
  ~CommodityM() {}
  uint64_t get_itemId() {
    return native_table_ptr_->itemId;
  }
  bool set_itemId(uint64_t _itemId) {
    set_dirty(true);
    native_table_ptr_->itemId = _itemId;
    return true;
  }
  uint64_t get_tokenId() {
    return native_table_ptr_->tokenId;
  }
  bool set_tokenId(uint64_t _tokenId) {
    set_dirty(true);
    native_table_ptr_->tokenId = _tokenId;
    return true;
  }
  std::string get_tokenURI() {
    return native_table_ptr_->tokenURI;
  }
  bool set_tokenURI(std::string _tokenURI) {
    uint32_t size_limit = 0 ? 0 : kDefaultStringSizeLimit;
    if( _tokenURI.length() > size_limit ) {
        mychain_lib_ptr_->MyRevert("The string size is over the limit" + std::to_string(size_limit));
    }
    set_dirty(true);
    native_table_ptr_->tokenURI = std::move(_tokenURI);
    return true;
  }
  std::string get_owner() {
    return native_table_ptr_->owner;
  }
  bool set_owner(std::string _owner) {
    uint32_t size_limit = 0 ? 0 : kDefaultStringSizeLimit;
    if( _owner.length() > size_limit ) {
        mychain_lib_ptr_->MyRevert("The string size is over the limit" + std::to_string(size_limit));
    }
    set_dirty(true);
    native_table_ptr_->owner = std::move(_owner);
    return true;
  }
  uint64_t get_price() {
    return native_table_ptr_->price;
  }
  bool set_price(uint64_t _price) {
    set_dirty(true);
    native_table_ptr_->price = _price;
    return true;
  }
  uint64_t get_amount() {
    return native_table_ptr_->amount;
  }
  bool set_amount(uint64_t _amount) {
    set_dirty(true);
    native_table_ptr_->amount = _amount;
    return true;
  }
};

struct TimeM : public MyTable<TimeT, Time> {
private: 
  using MyTable<TimeT, Time>::MyTable;
  friend class MyFactory<TimeM, TimeT>;
  friend class MyFactory<TimeM>;
public: 
  ~TimeM() {}
  uint64_t get_lastTime() {
    return native_table_ptr_->lastTime;
  }
  bool set_lastTime(uint64_t _lastTime) {
    set_dirty(true);
    native_table_ptr_->lastTime = _lastTime;
    return true;
  }
};

struct TokenURLM : public MyTable<TokenURLT, TokenURL> {
private: 
  using MyTable<TokenURLT, TokenURL>::MyTable;
  friend class MyFactory<TokenURLM, TokenURLT>;
  friend class MyFactory<TokenURLM>;
public: 
  ~TokenURLM() {}
  std::string get_url() {
    return native_table_ptr_->url;
  }
  bool set_url(std::string _url) {
    uint32_t size_limit = 0 ? 0 : kDefaultStringSizeLimit;
    if( _url.length() > size_limit ) {
        mychain_lib_ptr_->MyRevert("The string size is over the limit" + std::to_string(size_limit));
    }
    set_dirty(true);
    native_table_ptr_->url = std::move(_url);
    return true;
  }
};

inline StorageMPtr GetStorageM() {
  static std::weak_ptr<StorageM> wp;
  StorageMPtr sp;
  sp = wp.lock();
  if (!sp) {
    std::string key = "root_contract_Storage";
    std::shared_ptr<MychainLib> mychain_lib_ptr = std::make_shared<WasmLib>();
    std::unique_ptr<Key> root_key = Key::get_root_table_key(key, mychain_lib_ptr);
    std::string buf;
    int ret = mychain_lib_ptr->MyGetStorage(root_key->to_string(), buf);
    if(ret != 0) {
      return nullptr;
    }
    sp = MyFactory<StorageM>::make_instance(mychain_lib_ptr, buf, std::move(root_key) /*, nullptr*/);
    wp = sp;
  }
  return sp;
}

int InitRoot() {
    std::string key = "root_contract_Storage";
    std::shared_ptr<MychainLib> mychain_lib_ptr = std::make_shared<WasmLib>();
    std::unique_ptr<Key> root_key = Key::get_root_table_key(key, mychain_lib_ptr);
    std::string buf;
    int ret = mychain_lib_ptr->MyGetStorage(root_key->to_string(), buf);
    if(ret == 0) {
        mychain_lib_ptr->MyRevert("MyBuffer has been already initialized.");
    }
    StorageMPtr proot = MyFactory<StorageM>::make_instance(mychain_lib_ptr, std::move(root_key) /*, nullptr*/);
    return 0;
}

}  // namespace storage
}  // namespace planet

#endif  // FLATBUFFERS_ANT_GENERATED_PLANETSTORAGE_PLANET_STORAGE_H_
