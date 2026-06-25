#include<stdio.h>
int isPalindrome(int n)
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isPalindrome(num)){
        printf("%d is a Palindrome number.");
    }
    else{
        printf("%d is not Palindrome number.");
    }
    return 0;
}
int isPalidrome(int n){
    int original = n;
    int reverse = 0,digit;
    while(n>0){
        digit = n%10;
        reverse = reverse*10 + digit;
        n= n/10;
    }
    return (original ==reverse);
}
