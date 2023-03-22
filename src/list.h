
/* File list.h */
#ifndef LIST_H
#define LIST_H

#include "../src/globalDef.hpp"

enum Direction { Vertical = 0, Horizontal = 1 };
void List_Show(int arr[], int size, enum Direction dir);

void List_Init(int arr[], int size, int defaultValue);

void List_Clear(int arr[], int size);

// Obsolete:
void Show_Sequence(int arr[], int size);
// Obsolete:
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

void RandList(int arr[], int size, int min, int max);

#endif /* list.h */
