#include<stdio.h>
int main()
{
    int a[12],temp;
    for(int i=0;i<12;i++){

    printf("Enter Number : - ");
    scanf("%d",&a[i]);

    }
    temp = a[0];
    for(int i=0;i<12;i++){
        if (a[i]>temp){
            temp=a[i];
        }

    }
    printf("Max Value is %d\n",temp);

    temp = a[0];
    for(int i=0;i<12;i++){
        if (a[i]<temp){
            temp=a[i];
        }

    }
    printf("Min Value is %d\n",temp);

    return 0;
}
