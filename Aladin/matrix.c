#include<stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter number of row");
    scanf("%d",&n);

    printf("Enter number of columns");
    scanf("%d",&m);
     int matrix[n][m];
     printf("\nenter elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {scanf("%d",&matrix[i][j]);}
    }
    printf("\nentered matrix");
    for (i=0;i<n;i++){
    printf("\n");
    
        for(j=0;j<m;j++)
        {printf("%d\t",matrix[i][j]);}
    }       
return 0;
}
