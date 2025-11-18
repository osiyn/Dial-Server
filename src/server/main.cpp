#include "spdlog/spdlog.h"

int main()
{
    for(int i = 0; i < 10; i++) {
        spdlog::info("Test");
    }
    spdlog::info("Hello World");
    return 0;
}