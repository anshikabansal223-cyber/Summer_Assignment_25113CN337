#include<stdio.h>
long long factorial(int n);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial = %lld",factorial(num));
    return 0;
}
long long factorial(int n){
    long long fact =1;
    int i;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
