#include <stdio.h>

#include "config.h"

#ifdef USE_SUB_MODULE
#include <sub_module.h>
#endif

int main()
{
#ifdef USE_SUB_MODULE
    print_dot();
#else
    puts("Hello, World!");
#endif
    return 0;
}
