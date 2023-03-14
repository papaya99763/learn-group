// Demo program
#include <stdio.h>
#include "../src/list.h"

#define SIZE 10

int main(void) {
    
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
    
    // For Test
    Show_Sequence(arr, SIZE);
    printf("\n");
    
    Show_Invert(arr, SIZE);
    printf("\n");

    int result, idx = 6;
    if(At(arr, SIZE, idx, &result) == true) {
        printf("  Actual: At(arr, 10, %d) = %d\n", idx, result);    // actual
        printf("Expected: arr[%d] = %d\n", idx, result);            // expected
    }

    puts("\n");
    puts("===================================");
    return 0;
}
