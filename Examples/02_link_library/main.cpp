#include <format.h>
#include <iostream>

int main()
{
    std::cout << fmt::format("{0}, {1}", "Hello", "World") << std::endl;
    return 0;
}
