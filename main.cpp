#include "lib.h"

#include <spdlog/spdlog.h>
#include <stdio.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());

    printf("%ul\r\n", TRAVIS_BUILD_NUMBER);
    printf("Hello World!\r\n");
    return 0;
}
