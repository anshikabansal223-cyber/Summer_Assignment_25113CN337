#include<stdio.h>
int main(){
    int arr[100],n,i,j,a;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("Array in descending order:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
