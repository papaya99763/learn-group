/* File xunit.h */
#ifndef XUNIT_H
#define XUNIT_H

#include "../src/globalDef.hpp"

bool XUnit_Assert_Int(int expected, int actual);

bool XUnit_Assert_IntArray(int expected[], int actual[], int size);

bool XUnit_Assert_String(char expected[], char actual[]);

#endif /* xunit.h */
