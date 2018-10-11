#include "lib.h"

#include <spdlog/spdlog.h>
#include <stdio.h>
#include "lib.h"

int main()
{
//    auto logger = spdlog::stdout_logger_mt("console");
//    logger->info("version {} was started", version());

    printf("build %d\n", version());
    printf("Hello, World!\n");
    return 0;
}
