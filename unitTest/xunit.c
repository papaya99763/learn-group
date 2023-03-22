#include <stdio.h>
#include "xunit.h"

bool XUnit_Assert_Int(int expected, int actual) {
    return (expected == actual);
}

bool XUnit_Assert_IntArray(int expected[], int actual[], int size) {
    // todo:
    return false;
}

bool XUnit_Assert_String(char expected[], char actual[]) {
    // todo:
    return false;
}
