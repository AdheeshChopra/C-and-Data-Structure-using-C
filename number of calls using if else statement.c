#include<stdio.h>
int main(){
    int num_calls;
    float amount=0.0;
    printf("Enter the number of calls made: ");
    scanf("%d", &num_calls);
    if (num_calls <= 200)
    {
        amount = 0.0;
    }
    else if (num_calls <= 500)
    {
        amount = (num_calls - 200) * 1.0;
    }
    else
    {
        amount = (300 * 1.0) + ((num_calls - 500) * 2.0);
    }
    printf("Amount payable: %.2f", amount);
return 0;
}
