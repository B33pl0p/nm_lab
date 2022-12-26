#include<stdio.h>
#include<math.h>
float func(float x)
{
    return 1 + pow(x,3);
}
int main(){
    float a,b,I=0,h;
    int n,i,temp=0;
    printf(" enter the lower and uppper limit of integration :");
    scanf("%f%f",&a,&b);
    printf("Enter the number of strips required :");
    scanf("%d",&n);
    h = (float)(b-a)/n;
    I = (func(a)+func(b));
    for(i=1;i<=n-1;i++){
        temp +=  func(a+(i*h));
    }
    I =(h/2)* ( I + 2*temp);
    printf("The value of integral is %.3lf",I);
}