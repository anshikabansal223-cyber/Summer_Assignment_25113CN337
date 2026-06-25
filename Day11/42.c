#include<stdio.h>
int maximum(int a, int b);
int main(){
    int num1,num2,max;
    printf("Enter a numbers:");
    scanf("%d %d",&num1,&num2);
    max = maximum(num1,num2);
    printf("Max = %d",max);
    return 0;
}
int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
