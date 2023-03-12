#include <stdio.h>
#include "list.h"

void Show_Sequence(int arr[], int size) {
    for (int i = size-1; i>=0; i--) {
        printf ("%d " , arr[i]);
    }
}

void Show_Invert(int arr[], int size) {
    for(int i=0 ; i<size; i++) {
        printf("%d ", arr[i]);
    }
}