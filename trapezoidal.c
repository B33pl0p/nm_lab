#include<stdio.h>
#include<math.h>
float func(float x)
{
    return 1 + pow(x,3);
}
int main()
{
    float a,b,h,I;

    printf("Enter the value of a and b ");
    scanf("%f%f",&a,&b);
    h = b-a;
    I = (h/2)*(func(a)+func(b));
    printf("The value of integral is %.3lf",I);
    return 0;
}
