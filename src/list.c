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

int At(int arr[], int size, int idx) {
    // todo: 
    return -1;
}

bool Find(int arr[], int size, int value, int *result) {
    // todo: 
    return false;
}

bool Remove(int arr[], int size, int idx) {
    // todo: 
    return false;
}

bool Insert(int arr[], int size, int idx, int value) {
    // todo: 
    return false;
}

bool Append(int arr[], int size, int value) {
    // todo: 
    return false;
}

bool Invert(int arr[], int size) {
    // todo: 
    return false;
}

bool Join(int ori[], int ori_size, int join[], int join_size) {
    // todo: 
    return false;
}

bool Sort(int arr[], int size, int type) {
    // todo: 
    return false;
}
