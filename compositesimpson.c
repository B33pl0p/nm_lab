#include <stdio.h>
#include <math.h>
float func(float x)
{
    return 1 + pow(x, 3);
}
int main()
{
    float a, b, I = 0, h;
    int n;
    printf(" enter the lower and uppper limit of integration :");
    scanf("%f%f", &a, &b);
    printf("Enter the number of strips required :");
    scanf("%d", &n);
    h = (b - a) / n;
   float temp1=0,temp2=0;
   int i,j;
    for (i = 1; i <= n-1; i += 2)
    {
        temp1 += func(a + (i * h));
    }
    for (j = 2; j <= n-1; j += 2)
    {
        temp2 += func(a + (j * h));
    }

    I = (h / 3) * ((func(a) + func(b) + 4 * temp1 + 2 * temp2));

    printf("The value of integral is %.3lf", I);
}