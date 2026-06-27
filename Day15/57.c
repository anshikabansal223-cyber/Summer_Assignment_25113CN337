#include<stdio.h>
int main(){
    int arr[100],n,i,a;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        a = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1] = a;
    }
    printf("The reversed array:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
