#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],difference[10][10];
    int rows, cols;
    int i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFirst Matrix is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of second matrix\n:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSecond matrix is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            difference[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nSubtraction of matrices:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}
