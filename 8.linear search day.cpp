#include <stdio.h>
int main()
{  
    int num;
    int i,search_number,found = 0;
    printf("enter the number of elements :  ");
    scanf("%d",&num);
    int array[num];
    printf("enter the elements : ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&search_number);
    for (i=0;i<num;i++)
    {
        if (search_number==array[i])
        {
            found = 1;
            break;
        }
    }
    if (found==1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
        
    return 0;
}
