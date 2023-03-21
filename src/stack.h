/* File stack.h */
#ifndef STACK_H
#define STACK_H

#define bool int
#define true 1
#define false 0

struct Stack {
    int top;
    int *data; // data[]
    int size;
};

bool Stack_IsEmpty(struct Stack *q);

bool Stack_Pop(struct Stack *q);

bool Stack_Push(struct Stack *q);

void Show_Stack(struct Stack *q);

// Test:
void Stack_ToString();

#endif /* stack.h */
