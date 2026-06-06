//WAP to print factors of number
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factors are:\n");
    for(i=1;i<=n;i++){
        n%i==0;
        printf("%d\n",i);
    }
    return 0;
}
