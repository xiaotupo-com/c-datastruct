#include <stdio.h>
#include "stack.h"

int main()
{
    struct Stack s1;
    init_stack(&s1);

    stack_push(&s1, 1);
    stack_push(&s1, 3);
    stack_push(&s1, 6);
    stack_push(&s1, 2);
    stack_push(&s1, 8);

    int count;
    get_stack_count(&s1, &count);
    printf("s1 中有 %d 个数据\n", count);

    ElementType top;
    stack_get_top(&s1, &top);
    printf("Top: %d\n", top);

    while (!is_empty(&s1))
    {
        ElementType t;
        stack_pop(&s1, &t);
        printf("%d\n", t);
    }

    if (is_empty(&s1)) {
        printf("s1 为空\n");
    } else {
        printf("s1 为非空\n");
    }
    

    return 0;
}