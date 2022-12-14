/*******************************************************************************
 * This file is auto generated by ChainStack, DO NOT MODIFY
 *
 * FileName : assertor.h
 * Desc     : Define contract assertor utils.
 * History  :
 * License  :
*******************************************************************************/

#ifndef CSTACK_LIBS_COMMONS_ASSERTOR_H
#define CSTACK_LIBS_COMMONS_ASSERTOR_H

#include "dependency.h"

using namespace mychain;

namespace cstack {
namespace libs {
namespace commons {
    std::string BuildErrorMsg(uint32_t error_code, const std::string& msg) {
        return std::to_string(uint32_t(error_code)) + ":" + msg;
    }

    void Assert(bool condition, uint32_t error_code, const std::string& msg) {
        Require(condition, BuildErrorMsg(error_code, msg));
    }
} // namespace commons
} // namespace libs
} // namespace cstack
#endif //CSTACK_LIBS_COMMONS_ASSERTOR_H