#include<stdio.h>
int main()
{
    int a[12],sum=0;
    for(int i=0;i<12;i++){

    printf("Enter Number : - ");
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    printf("Sum Is %d",sum);
    return 0;
}
