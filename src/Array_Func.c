#include <stdio.h>

int  i;
void Show_Array_RL(int arr[], int size) {
    for (i=size;i>1;i=i-1){
        printf ("%d " , arr[i]);
    }
};