
/* File string.h */
#ifndef STRING_H
#define STRING_H

#define bool int
#define true 1
#define false 0

void ToString(char str[]);

int Size(char str[]);

int Length(char str[]);

bool Find(char str[], char word[], int *result);

int Count(char str[], char word[]);

#endif /* string.h */