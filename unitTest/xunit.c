#include <stdio.h>
#include "xunit.h"

bool XUnit_Assert_Int(int expected, int actual) {
    return (expected == actual);
}

bool XUnit_Assert_IntArray(int expected[], int actual[], int size) {
    for (int i = 0; i < size; i++) {
        if(expected[i] != actual[i]) {
            return false;
        }
    }
    
    return true;
}

bool XUnit_Assert_String(char expected[], char actual[]) {
    int idx = 0;
    while(expected[idx] != '\0') {
        if(expected[idx] != actual[idx]) {
            return false;
        }
        idx++;
    }
    
    return true;
}
