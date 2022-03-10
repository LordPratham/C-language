#include <stdio.h>
int main(){
    

    int subject[6];
    int a[5]={1,2,3,4,5};
    for(int i=0;i<=5;i++){
        printf("Enter Subject %d :-",i);
        scanf("%d",&subject[i]);



    }


    for (int i = 0; i <=5; i++)
    {
        printf("Marks %d \n",subject[i]);
    }
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    
    return 0;
}
