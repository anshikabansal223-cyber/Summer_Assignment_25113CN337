//WAP to check whether it is strong number
#include<stdio.h>
int main(){
    int n,a,digit,i;
    int sum =0,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n;
    while(a>0){
        digit = a%10;
        fact =1;
        for(i=1;i<=digit;i++){
            fact = fact*i;
            
        }
        sum = sum+fact;
        a=a/10;
    }
    if(sum==n){
        printf("%d is strong number",n);
    }
    else{
        printf("%d is not strong number.",n);
    }
    return 0;
}
