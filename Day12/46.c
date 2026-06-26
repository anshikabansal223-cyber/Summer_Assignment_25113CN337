#include<stdio.h>
int isArmstrong(int n);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(isArmstrong(num)){
        printf("%d is Armstrong number",num);
    }
    else{
        printf("%d is not Armstrong number",num);
    }
    return 0;
}
int isArmstrong(int n){
    int original = n;
    int digit,sum=0;
    while(n>0){
        digit = n%10;
        sum = sum +(digit*digit*digit);
        n=n/10;
    }
    return (original == sum);
}
