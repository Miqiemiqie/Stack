//
// Created by 蒋兴宇 on 12/2/2023.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef int StackDataType;
typedef struct Stack
{
    StackDataType* a;
    int top; //因为是顺序栈，所以需要top作为栈顶指针来
    int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);

void StackPush(ST* ps, StackDataType x);
void StackPop(ST* ps);

bool StackIsEmpty(ST* ps);
StackDataType StackTop(ST* ps); //返回栈顶元素的值
int StackSize(ST* ps); //返回顺序栈空间的元素个数









#endif //STACK_STACK_H
