#include "lib.h"

#include <spdlog/spdlog.h>
#include <stdio.h>
#include "version.h"

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());

    printf("build %ul\r\n", PROJECT_VERSION_PATCH);
    printf("Hello, World!\r\n");
    return 0;
}
