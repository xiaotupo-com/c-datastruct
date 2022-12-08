/**
 * 栈数据结构头文件
 * stack.h
 * 小土坡
*/
#ifndef __STACK_H
#define __STACK_H

#include <stdbool.h>

#define STACK_MAX_LENGTH 5
#define Ok 0
#define Error 1
typedef char State;
typedef  int ElementType;


struct Stack {
	ElementType el[STACK_MAX_LENGTH];
	int top; // 栈顶
		
};


void init_stack(struct Stack *s); // 初始化栈，让 top 等于 -1
bool is_empty(struct Stack *s); // 判断 Stack 是否为空
State stack_push(struct Stack *s, ElementType e); // 向 s 中压入数据
State get_stack_count(struct Stack *s, int *count); // 返回 s 中的数据数量
State stack_get_top(struct Stack *s, int *top); // 返回栈顶数据
State stack_pop(struct Stack *s, ElementType *e); // 出栈数据


#endif
