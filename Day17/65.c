#include<stdio.h>
int main(){
    int arr1[100],arr2[200],arr3[300];
    int n1,n2,i;
    printf("Enter the no of elements in first array:");
    scanf("%d",&n1);
    printf("Enter the %d elements:\n",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the no of elements in second array:");
    scanf("%d",&n2);
    printf("Enter the %d elements:\n",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        arr3[n1+i] = arr2[i];
    }
    printf("The merged array is:\n");
    for(i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}
