#include <stdio.h>
#include <math.h>
#include <ctype.h>
struct stack
{
    int top;
    int operand[20];
};
void push(struct stack *, int);
void pop(struct stack *);
int main()
{
    struct stack s;
    char str1[40];
    int i = 0, result, op1, op2;
    s.top;
    printf("Enter an expression in postfix form\n");
    while ((str1[i] = getchar()) != '\n')
    {
        if (isdigit(str1[i]))
        {
            push(&s, str1[i] - '0');
        }
        else
        {
            op2 = s.operand[s.top];
            pop(&s);
            op1 = s.operand[s.top];
            pop(&s);
            switch (str1[i])
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '*':
                result = op1 * op2;
                break;
            case '/':
                result = op1 / op2;
                break;
            }
            printf("\nIntermediate result=%d", result);
            return 0;
        }
        i++;
    }
    printf("\nThe value of expression=%d", result);
    return 0;
}
void push(struct stack *ps, int n)
{
    ps->top++;
    ps->operand[ps->top] = n;
}
void pop(struct stack *ps)
{
    ps->top--;
}