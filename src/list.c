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

bool At(int arr[], int size, int idx, int *result) {
    
    // Argument Checking
    if(idx < 0 || idx >= size) {
        printf("|> Error: Index out of range\n");
        *result = -1;
        return false;
    }
    
    *result = arr[idx];
    return true;
}

bool Find(int arr[], int size, int value, int *result) {

    //Argument Checking
    for( int i = 0; i < size ; i++){
        if(value == arr[i] ) {
            *result = i;
            return true;
        }
    }
    *result = -1 ;
    return false;
}

bool Remove(int arr[], int size, int idx) {
        // Argument Checking
    if(idx < 0 || idx >= size) {
        printf("|> Error: Index out of range\n");
        return false;
    }
    for (int j = idx ; j < size ; j++){
        arr[j]=arr[j+1];
    }
    return true;
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
