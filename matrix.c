#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int sum=0;
    printf("Enter elements of array \n");
    //taking input of array
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element at[%d][%d]:  ",i,j);
            scanf("%d",(*(a+i)+j));

        }
    }
    //printing array
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    //calculation sum of diagonal elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j)
           {
               sum=sum+(*(*(a+i)+j));
           }
        }
    } 
    printf("\n%d is sum of diagonal elements",sum);   
    return 0;

}