
/* File list.h */
#ifndef LIST_H
#define LIST_H

#include "../src/globalDef.hpp"

void Show_Sequence(int arr[], int size);

void Show_Invert(int arr[], int size);

bool At(int arr[], int size, int idx, int *result);

bool Find(int arr[], int size, int value, int *result);

bool Remove(int arr[], int size, int idx);

bool Insert(int arr[], int size, int idx, int value);

bool Append(int arr[], int size, int value);

bool Invert(int arr[], int size);

bool Join(int ori[], int ori_size, int join[], int join_size);

enum SortType { ToMax = 0, ToMin = 1 };

bool Sort(int arr[], int size, int type);

#endif /* list.h */
