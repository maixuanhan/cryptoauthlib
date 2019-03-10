#ifndef ATCA_DEBUG_H
#define ATCA_DEBUG_H

#ifdef ECC_DEBUG
#include <stdio.h>
char * eccx08_strip_path_atca(char * in_str);
#define DEBUG_ATCA(f, ...)    fprintf(stderr, "\e[35m$$ATCA: %s:%d:%s(): " f "\e[39m", eccx08_strip_path_atca(__FILE__), __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define DEBUG_ATCA(...)   asm("nop")
#endif

#endif // ATCA_DEBUG_H