/*******************************************************************************
 * This file is auto generated by ChainStack, DO NOT MODIFY
 *
 * FileName : validator.h
 * Desc     : Param validation utils.
 * History  :
 * License  :
 *******************************************************************************/

#ifndef CSTACK_LIBS_COMMONS_VALIDATOR_H
#define CSTACK_LIBS_COMMONS_VALIDATOR_H

#include "dependency.h"
#include "error_code.h"

namespace cstack {
namespace libs {
namespace commons {

class Validator {

public:

    template<typename T>
    static void RangeCheck(const std::string &field, const T *min, const T *max, const T value) {
        mychain::Require(min == nullptr || value >= *min, VALIDATION_ERROR_OUT_OF_RANGE(field));
        mychain::Require(max == nullptr || value <= *max, VALIDATION_ERROR_OUT_OF_RANGE(field));
    }

    template<typename T>
    static void ValueCheck(const std::string &field, const T &expected, const T &actual) {
        mychain::Require(expected == actual, VALIDATION_ERROR_VALUE_NOT_EQUAL(field));
    }

    template<typename T>
    static void SizeCheck(const std::string &field, const T &expected, const T &actual) {
        mychain::Require(expected == actual, VALIDATION_ERROR_SIZE_OUT_OF_RANGE(field));
    }

    template<typename T>
    static void SizeCheck(const std::string &field, const T *min, const T *max, const T &size) {
        mychain::Require(min == nullptr || size >= *min, VALIDATION_ERROR_SIZE_OUT_OF_RANGE(field));
        mychain::Require(max == nullptr || size <= *max, VALIDATION_ERROR_SIZE_OUT_OF_RANGE(field));
    }

    static void ContainCheck(const std::string &field, const std::string &str, const std::string &sub_str) {
        mychain::Require(str.find(sub_str) != std::string::npos, VALIDATION_ERROR_NOT_CONTAIN(field));
    }

    static void PrefixCheck(const std::string &field, const std::string &str, const std::string &prefix) {
        mychain::Require(str.rfind(prefix, 0) == 0, VALIDATION_ERROR_PREFIX_NOT_MATCH(field));
    }

    static void SuffixCheck(const std::string &field, const std::string &str, const std::string &suffix) {
        mychain::Require(str.length() >= suffix.length() && 0 == str.compare(str.length() - suffix.length(), suffix.length(), suffix),
        VALIDATION_ERROR_SUFFIX_NOT_MATCH(field));
    }

    template<typename T>
    static void NotBlankCheck(const std::string &field, const T &data) {
        mychain::Require(!data.empty(), VALIDATION_ERROR_EMPTY(field));
    }

    static void RequiredFieldCheck(const rapidjson::Value::Object &object, const std::string &field) {
        mychain::Require(object.HasMember(field.data()), VALIDATION_ERROR_FIELD_MISSING(field));
        mychain::Require(!object[field.data()].IsNull(), VALIDATION_ERROR_FIELD_NULL(field));
    }

    static void RequiredFieldCheck(const rapidjson::Value &value) {
        mychain::Require(!value.IsNull(), VALIDATION_ERROR_ELEMENT_NULL);
    }
};
} // namespace commons
} // namespace libs
} // namespace cstack
#endif //CSTACK_LIBS_COMMONS_VALIDATOR_H