//gauss elimination method
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 3;
    float matrix[10][10], ratio, x[10];
    int i, j, k;
    printf("Enter the matrix : ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n+1; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    for (i = 1; i <= n - 1; i++)
    {
        if (matrix[i][i] == 0.0)
        {
            printf("Mathematical error occured\n");
        }
        for (j = i + 1; j <= n; j++)
        {
            ratio = matrix[j][i] / matrix[i][i];
            for (k = 1; k <= n + 1; k++)
            {
                matrix[j][k] = matrix[j][k] - ratio * matrix[i][k];
            }
        }
    }

    x[n] = matrix[n][n + 1] / matrix[n][n];
    for (i = n - 1; i >= 1; i--)
    {
        x[i] = matrix[i][n + 1];
        for (j = i + 1; j <= n; j++)
        {
		  x[i]= x[i] - matrix[i][j]*x[j];		  
        }
        x[i] =x[i]/matrix[i][i];
    }
     for(i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %f\n",i, x[i]);
	 }
}