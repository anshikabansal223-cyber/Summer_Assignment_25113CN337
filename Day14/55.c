#include<stdio.h>
int main(){
    int arr[100],n,i;
    int largest, secondlargest;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest = secondlargest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    secondlargest = -2147483648;
    for(i=0;i<n;i++){
        if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    printf("The largest element is %d\n",largest);
    printf("The second largest element is %d\n",secondlargest);
    return 0;
}
