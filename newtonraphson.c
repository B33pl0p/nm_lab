#include<stdio.h>
#include<math.h>
float func(float x){
  return (x*tan(x)-1);
}
float derrivative(float x){
      return x*(1/(cos(x)*cos(x))) +tan(x);
}
int main(){
    float x0,x1,e;
    int count=1;
    printf("Enter the value of e :");
    scanf("%f",&e);
    printf("Enter an initial value x0: ");
    scanf("%f",&x0);
    while(1){
    x1 = x0 - (func(x0)/derrivative(x0));
    if(fabs((x1-x0)/x1)<e){
        break;
    }
    else{
        x0=x1;
    }
     count++;
    }
printf("The root is %f",x1);
printf("\nThe number of iteration is %d",count);
}