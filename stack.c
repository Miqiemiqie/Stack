//
// Created by 蒋兴宇 on 12/2/2023.
//

#include "stack.h"

void StackInit(ST* ps)
{
    assert(ps);
    ps->a = NULL;
    ps->capacity=ps->top=0;
}
void StackDestroy(ST* ps)
{
    free(ps->a);
    ps->a = NULL;
    ps->capacity = ps->top = 0;
}

void StackPush(ST* ps, StackDataType x)
{
    assert(ps);
    if (ps->top == ps->capacity)
    {
        int newcapacity = ps->capacity==0 ? 4 : ps->capacity*2;
        StackDataType* tmp = realloc(ps->a, newcapacity*sizeof(StackDataType));
        if (tmp == 0)
        {
            printf("realloc fial\n");
            exit(-1);
        }
        ps->capacity = newcapacity;
        ps->a = tmp;
    }
    ps->a[ps->top] = x;
    ps->top++;
}
void StackPop(ST* ps)
{
    assert(ps);
    assert(!StackIsEmpty(ps));
    ps->top--;
}

bool StackIsEmpty(ST* ps)
{
    assert(ps);
/*    if (ps->top == 0)
        return true;
    else
        return false;*/
    return ps->top==0;
}
StackDataType StackTop(ST* ps)
{
    assert(ps);
    assert(!StackIsEmpty(ps));
    return ps->a[ps->top-1];
}
int StackSize(ST* ps)
{
    assert(ps);
    return ps->top;
}