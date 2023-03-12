#include <stdio.h>
#include "../src/list.h"

int main(void) {
    
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    
    // For Test
    Show_Sequence(arr, 10);
    printf("\n");
    
    Show_Invert(arr, 10);

    return 0;
}
