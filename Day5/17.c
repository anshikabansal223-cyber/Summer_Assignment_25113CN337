// WAP to check perfect number
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d is the perfect number.",n);
    }
    else{
        printf("%d is not perfect number.",n);
    }
    return 0;
}
