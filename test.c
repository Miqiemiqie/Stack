#include "stack.h"


void test1()
{
    ST st;
    StackInit(&st);
    StackPush(&st,1);
    StackPush(&st,2);
    StackPush(&st,3);
    StackPush(&st,4);
    StackPop(&st);
    StackPop(&st);
    StackPush(&st,5);
    StackPush(&st,6);
    StackPush(&st,7);
    StackPush(&st,8);
    while (st.top)
    {
        printf("%d ", st.a[st.top-1]);
        st.top--;
    }
//    while (!StackIsEmpty(&st))
//    {
//        printf("%d ",StackTop(&st));
//        StackPop(&st);
//    }
    StackDestroy(&st);
}




int main() {
    test1();
    return 0;
}
