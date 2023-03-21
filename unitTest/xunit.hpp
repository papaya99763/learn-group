/* File xunit.h */
#ifndef XUNIT_H
#define XUNIT_H

#define bool int
#define true 1
#define false 0

bool XUnit_Assert_Int(int expected, int actual) {
    return (expected == actual);
}

bool XUnit_Assert_IntArray(int expected[], int actual[], int size);

bool XUnit_Assert_String(char expected[], char actual[]);

#endif /* xunit.h */
