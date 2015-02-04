#include <format.h>
#include <stdio.h>

int main()
{
    puts(fmt::format("{0}, {1}", "Hello", "World").c_str());
    return 0;
}
