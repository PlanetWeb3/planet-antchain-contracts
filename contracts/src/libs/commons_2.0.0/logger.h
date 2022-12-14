/*******************************************************************************
 * This file is auto generated by ChainStack, DO NOT MODIFY
 *
 * FileName : logger.h
 * Desc     : Logger utils, can print different levels of log.
 * History  :
 * License  :
 *******************************************************************************/

#ifndef CSTACK_LIBS_COMMONS_LOGGER_H
#define CSTACK_LIBS_COMMONS_LOGGER_H

#include "dependency.h"

using namespace mychain;

namespace cstack {
namespace libs {
namespace commons {

#define STP_LOGGER_LOG          "___Logger___"

#define LEVEL_TRACE            0
#define LEVEL_DEBUG            1
#define LEVEL_INFO             2
#define LEVEL_WARN             3
#define LEVEL_ERROR            4
#define LEVEL_FATAL            5

#ifdef  CSTACK_LOG_LEVEL
#define ACCEPT_LEVEL           CSTACK_LOG_LEVEL
#else
#define ACCEPT_LEVEL           LEVEL_DEBUG
#endif


class Logger {

public:

    void Trace(const std::string& msg){

        if(LEVEL_TRACE < ACCEPT_LEVEL){
            return;
        }

        std::vector<std::string> event;

        event.push_back(pack(LEVEL_TRACE));
        event.push_back(pack(msg));

        Log(event, {STP_LOGGER_LOG});
    }

    void Trace(const uint32_t error_code, const std::string& msg){
        Trace(std::to_string(error_code) + ":" + msg);
    }

    void Trace(const uint32_t error_code, const std::string& msg, const std::string &content){
        Trace(std::to_string(error_code) + ":" + msg + ":" + content);
    }

    void Debug(const std::string& msg){

        if(LEVEL_DEBUG < ACCEPT_LEVEL){
            return;
        }

        std::vector<std::string> event;

        event.push_back(pack(LEVEL_DEBUG));
        event.push_back(pack(msg));

        Log(event, {STP_LOGGER_LOG});
    }

    void Debug(const uint32_t error_code, const std::string& msg){
        Debug(std::to_string(error_code) + ":" + msg);
    }

    void Debug(const uint32_t error_code, const std::string& msg, const std::string &content){
        Debug(std::to_string(error_code) + ":" + msg + ":" + content);
    }

    void Info(const std::string& msg){

        if(LEVEL_INFO < ACCEPT_LEVEL){
            return;
        }

        std::vector<std::string> event;

        event.push_back(pack(LEVEL_INFO));
        event.push_back(pack(msg));

        Log(event, {STP_LOGGER_LOG});
    }

    void Info(const uint32_t error_code, const std::string& msg){
        Info(std::to_string(error_code) + ":" + msg);
    }

    void Info(const uint32_t error_code, const std::string& msg, const std::string &content){
        Info(std::to_string(error_code) + ":" + msg + ":" + content);
    }

    void Warn(const std::string& msg){

        if(LEVEL_WARN < ACCEPT_LEVEL){
            return;
        }

        std::vector<std::string> event;

        event.push_back(pack(LEVEL_WARN));
        event.push_back(pack(msg));

        Log(event, {STP_LOGGER_LOG});
    }

    void Warn(const uint32_t error_code, const std::string& msg){
        Warn(std::to_string(error_code) + ":" + msg);
    }

    void Warn(const uint32_t error_code, const std::string& msg, const std::string &content){
        Warn(std::to_string(error_code) + ":" + msg + ":" + content);
    }

    void Error(const std::string& msg){

        if(LEVEL_ERROR < ACCEPT_LEVEL){
            return;
        }

        std::vector<std::string> event;

        event.push_back(pack(LEVEL_ERROR));
        event.push_back(pack(msg));

        Log(event, {STP_LOGGER_LOG});
    }

    void Error(const uint32_t error_code, const std::string& msg){
        Error(std::to_string(error_code) + ":" + msg);
    }

    void Error(const uint32_t error_code, const std::string& msg, const std::string &content){
        Error(std::to_string(error_code) + ":" + msg + ":" + content);
    }
};

} // namespace commons
} // namespace libs
} // namespace cstack
#endif //CSTACK_LIBS_COMMONS_LOGGER_H