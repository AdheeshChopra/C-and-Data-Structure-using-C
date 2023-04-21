#include<stdio.h>
int main(){
    int n;
    int t1=0, t2=1;
    int next_term;
    printf("enter the length ");
    scanf("%d", &n);
    printf("%d %d", t1, t2);
    next_term=t1+t2;
    while(next_term<=n)
    {
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
        printf(" %d",next_term);
    }
return 0;
}
