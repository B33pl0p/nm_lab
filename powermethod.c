#include <stdio.h>
#include <math.h>
int main()
{
    int n = 3;
    float matrix[10][10], ratio, x[10], xnew[10], tolerable_error;
    int i, j, k;
    printf("Enter the matrix : ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("Enter the tolerable error : ");
    scanf("%f", &tolerable_error);
    printf("Enter the initial guess vector : ");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    float lambda = 1;
    multiplication:
    for (i = 1; i <= n; i++)
    {
        float temp = 0.0;
        for (j = 1; j <= n; j++)
        {
            temp += matrix[i][j] * x[j];
        }
        xnew[i] = temp;
    }
    for (i = 1; i <= n; i++)
    {
        x[i] = xnew[i];
    }
    float lambda_new = x[1];
    for (i = 2; i <= n; i++)
    {
        if (x[i] > lambda_new)
        {
            lambda_new = x[i];
        }
    }
    for (i = 1; i <= n; i++)
    {
        x[i] = x[i] / lambda_new;
    }
    for (i = 1; i <= n; i++){
    if(fabs(lambda_new - lambda) > tolerable_error)
    {
        lambda = lambda_new;
        goto multiplication;
    }
    else {
        printf("The largest eigen value is %f\n", lambda_new);
        printf("The corresponding eigen vector is :");
        for (i = 1; i <= n; i++)
        {
            printf("%f \n", x[i]);
        }

    }
}
}   
    
      
        

    
    