#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

void List_Show(int arr[], int size, enum Direction dir) {
    enum Direction v = Vertical;
    enum Direction h = Horizontal;

    if(dir == v) {
        for (int i = 0; i < size; i++) {
            printf("Arr[%d] = %d\n", i, arr[i]);
        }
    }
    else if (dir == h) {
        printf("Arr[]: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    puts("\n");
}

void List_Init(int arr[], int size, int defaultValue) {
    // todo:
}

void List_Clear(int arr[], int size) {
    return List_Init(arr, size, 0);
}

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

void RandList(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max+1) + min;
    }
}