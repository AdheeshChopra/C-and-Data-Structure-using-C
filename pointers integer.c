#include<stdlib.h>
#include<stdio.h>
int main()
{
    int age=10;
    int*ptr ;
    ptr =&age;
    printf("%d\n", age);
    printf("%d\n", ptr);
    printf("%u\n", &age);
    printf("%u\n", &ptr);
    printf("%u\n", *ptr);
    printf("%u\n", &age);

return 0;
}
