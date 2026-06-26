#include<stdio.h>
int main(){
    int arr[100],n,i,key;
    int found =0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element need to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found =1;
            printf("The postion where element is found is %d\n",i+1);
            break;
        }
    }
    if(found ==0){
        printf("Element not found.");
    }
    return 0;
}                                                                                                                        
