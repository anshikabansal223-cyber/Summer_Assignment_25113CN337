#include<stdio.h>
int main(){
    int arr[100],n,i,j=0,a;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            a= arr[i];
            arr[i]= arr[j];
            arr[j]=a;
            j++;
        }
    }
    printf("Array after moving zereos to end:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
