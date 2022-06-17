#include <stdio.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char ch)
{
    stack[++top]=ch;
}

char pop()
{
    return stack[top--];
}

int isDigit(char n)
{
    if(n<='0' && n>='9')
      return 1;
}
int isOp(char choice){
    if(choice=='+'||'-' ||'*' ||'/')
        return 1;
}

int answer(char postfix[])
{
    int a,b,c,i=0;
    char choice;

    for (i = 0; postfix[i] != '/0' ; ++i)
    {
        choice=postfix[i];
        a=pop();
        b=pop();
        if(isOp==1){
            if(choice=='+')
              c=b+a;
            if(choice=='-')
                c=b-a;
            if(choice=='*')
                 c=b*a;
            if(choice=='/')
                  c=b/a;

         push(c);

        }
         else if(isDigit(postfix[i]==1))
                push(postfix[i]-'0');
    }
   return pop(stack);
}


int main()
{
    char postfix[MAX];
    printf("enter postfix Expression : ");
    scanf("%s",postfix);
    printf ("postfix evaluation: %d",answer(postfix));
    return 0;
}
