/**
 * 该例子为 栈数据结构的练习代码
*/

#include "stack.h"

/**
 * 初始化 Stack
*/
void init_stack(struct Stack *s)
{
    s->top = -1;
}

/**
 * 判断 Stack 是否为空
 * 为空：返回 true
 * 非空：返回 false
*/
bool is_empty(struct Stack *s)
{
    bool temp;
    if (s->top == -1) {
        temp = true;
    } else {
        temp = false;
    }

    return temp;
}

/**
 * 向栈中压入数据
*/
State stack_push(struct Stack *s, ElementType e)
{
    // 判断栈是否满了
    if (s->top > STACK_MAX_LENGTH -1) {
        return Error;
    }

    s->top += 1;
    s->el[s->top] = e;

    return Ok;
}

/**
 * 获取栈中的数据数量
*/
State get_stack_count(struct Stack *s, int *count)
{
    if (is_empty(s)) {
        return Error;
    }

    *count = s->top + 1;

    return Ok;
}

/**
 * 获取栈顶数据
*/
State stack_get_top(struct Stack *s, int *top)
{
    if (is_empty(s)) {
        return Error;
    }

    *top = s->el[s->top];

    return Ok;
}

/**
 * 出栈
*/
State stack_pop(struct Stack *s, ElementType *e)
{
    if (is_empty(s)) {
        return Error;
    }

    *e = s->el[s->top];
    s->top--;
    
    return Ok;
}