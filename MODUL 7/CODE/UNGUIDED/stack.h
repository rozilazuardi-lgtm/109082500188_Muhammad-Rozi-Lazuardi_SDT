#ifndef STACK_H
#define STACK_H

typedef int infotype;

struct Stack {
    infotype info[20];
    int top;
};

void createStack(Stack &s);
void push(Stack &s, infotype x);
infotype pop(Stack &s);
void printInfo(Stack s);
void balikStack(Stack &s);

void pushAscending(Stack &s, infotype x);
void getInputStream(Stack &s);

#endif