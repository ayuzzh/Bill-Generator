
#include <iostream>
#include "macros.h"

#ifndef MISC_FUNCS
#define MISC_FUNCS

void clsrc()
{
	PRINT << "\033[2J\033[1;1H";
}

STRING get_line_input()
{
        STRING line;
        std::getline(INPUT, line);
        return line;
}

#endif
