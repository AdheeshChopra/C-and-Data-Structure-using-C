#include <stdio.h>
int main()
{
    int arr[100], pos , i , n;
    printf("enter number of elements in array\n");
    scanf("%d", &n);
    printf("enter %d elements\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the location where you wish to delete element\n");
    scanf("%d", &pos);
    if(pos>=n+1)
    {
        printf("deletion not possible.\n");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("resultant array:\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}