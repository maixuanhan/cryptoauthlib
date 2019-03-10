#include "atca_debug.h"

#ifdef ECC_DEBUG
char * eccx08_strip_path_atca(char * in_str)
{
    char * tmp = in_str;
    char * rv;

    if (!in_str)
        return "";
#ifdef _WIN32
    while (tmp = strchr(tmp, '\\'))
#else
    while (tmp = strchr(tmp, '/'))
#endif
    {
        rv = ++tmp;
    }

    return rv;
}
#endif