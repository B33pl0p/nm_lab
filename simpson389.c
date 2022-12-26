#include<stdio.h>
#include<math.h>
float func(float x)
{
    return 1 + pow(x,3);
}
int main(){
    float a,b,I=0,h;
    printf(" enter the lower and uppper limit of integration :");
    scanf("%f%f",&a,&b);
    h = (b-a)/3;
    I = (3*h/8)*(func(a)+3*func(a+h)+3*func(a+2*h)+func(b));
  

    printf("The value of integral is %.3lf",I);
}