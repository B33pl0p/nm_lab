#include<stdio.h>
#include<math.h>
float func(float x){
    return (x*x- 4*x - 10);
}
int main(){
    float x0,x1,x2,e;
    int count=1;
    printf("Enter the value of x0,x1,e : ");
    scanf("%f%f%f",&x0,&x1,&e);
    while(1){
    count++;
    x2 = x1-(((x1-x0)*func(x1))/(func(x1)-func(x0)));
    x0=x1;
    x1=x2;
    if(fabs((x1-x0)/x1)<e)
        break;
    }
    
printf("The root is %f",x2);
printf("\nThe number of iteration is %d",count);
}