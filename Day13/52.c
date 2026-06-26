#include<stdio.h>
int main(){
    int arr[100],n,i;
    int odd=0, even=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("No of even numbers is %d\n",even);
    printf("No of odd numbers is %d\n",odd);
    return 0;
}
