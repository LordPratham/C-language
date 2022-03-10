#include<stdio.h>

int isPalindrome(int a){
    int n=0,r=a;
    // 345
    while(r){
        n=(10*n)+ r%10;
        r=r/10;
    }
    if (n==a){
        printf("%d  is a Palindrome",a);
    }
    return 1;
}
int main()
{
    isPalindrome(44566544);
    return 0;
}
