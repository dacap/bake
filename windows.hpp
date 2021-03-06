/*
        Copyright © 2015 Felipe Tavares <felipe.oltavares@gmail.com>

        This work is free. You can redistribute it and/or modify it under the
        terms of the Do What The Fuck You Want To Public License, Version 2,
        as published by Sam Hocevar. See the LICENSE file for more details.
*/

#ifndef BAKE_WINDOWS_H
#define BAKE_WINDOWS_H

#ifdef __WIN32__

#include <windows.h>
#include <string>
#include <vector>
using namespace std;

namespace bake {
    struct dirent {
        char d_name[255];
    };

    /*
        Windows scandir
    */
    int scandir (char *, struct dirent***, char*,
                 int (*)(const struct dirent **, const struct dirent **));
}
#endif

#endif /* BAKE_WINDOWS_H */
