#include<stdio.h>
int main(){
    int arr[100],n,i,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}    
