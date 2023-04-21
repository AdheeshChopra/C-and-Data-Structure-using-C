#include<stdio.h>
int main(){
    float a, b;
    char oper;
    printf("enter an operator\n");
    scanf("%c", &oper);
    printf("enter the operants\n");
    scanf("%d%d", &a, &b);
    switch(oper)
    {
    case '+':
        printf("sum is %d", a+b);
        break;
    case '-':
        printf("difference is %d", a-b);
        break;
    case '*':
        printf("product is %d", a*b);
        break;
    case '/':
        printf("division is %d", a/b);
        break;
    default:
        printf("operator not found");
    }
return 0;
}
