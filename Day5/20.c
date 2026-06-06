// WAP to find largest prime factor
#include<stdio.h>
int main(){
    int n,i,j,count,largest=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            count =0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        }
        if(count==2){
            largest=i;
        }
    }
    printf("The largest prime factor is %d\n",largest);
    return 0;
}
