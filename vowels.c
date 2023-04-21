#include<stdio.h>
int main(){
char ch;
printf("enter the alphabet\n");
scanf("%c", &ch);
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
    printf("you have entered a vowel");
}
else
{
    printf("you have entered a consonant");
}
return 0;
}
