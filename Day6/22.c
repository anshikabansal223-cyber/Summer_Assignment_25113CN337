//WAP to convert binary to decimal
#include<stdio.h>
int main(){
    int n,decimal =0, rem, base = 1;
    printf("Enter a binary number:");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        decimal = decimal + rem*base;
        base = base*2;
        binary = binary/10;
    }
    printf("Decimal equivalent = %d",decimal);
    return 0;
}
