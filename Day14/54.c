#include<stdio.h>
int main(){
    int arr[100],i,n,key;
    int count =0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element which frequency needs to be counted:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("Frequency of %d = %d",key,count);
    return 0;
}
