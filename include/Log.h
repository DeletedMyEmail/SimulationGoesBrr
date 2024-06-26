#pragma once

#include <spdlog/spdlog.h>

#define LOG_WARN(x) Log::getLogger()->warn(x)
#define LOG_INFO(x) Log::getLogger()->info(x)
#define LOG_ERROR(x) Log::getLogger()->error(x)

class Log{
public:
    static void init();
    static std::shared_ptr<spdlog::logger>& getLogger();
private:
    static std::shared_ptr<spdlog::logger> sLogger;
};
