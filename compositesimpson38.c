#include<stdio.h>
#include<math.h>
float func(float x)
{
    return 1 + pow(x,3);
}
int main(){
    float a,b,I=0,h;
    int n;
    printf(" enter the lower and uppper limit of integration :");
    scanf("%f%f",&a,&b);
    printf("Enter the number of strips required :");
    scanf("%d",&n);
    h = (b-a)/n;
    float oddpart = 0,evenpart = 0;
    int i,j;
    for(i=3;i<=n-1;i+=2){
        oddpart += func(a+(i*h));
    }
    for(j=2;j<=n-1;j+=2){
        evenpart += func(a+(j*h));
    }
    
    

}