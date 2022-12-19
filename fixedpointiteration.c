#include<stdio.h>
#include<math.h>
float func(float x){
    return sin(x) + 3*x - 2;
}
float gx(float x){
    return (2-sin(x))/3;
}
int main(){
    float x0,x1,initial_guess,e;
    int max_iteration;
    int count=1;
    printf("Enter the value of initial_guess,e,max_iteration : ");
    scanf("%f%f%d",&initial_guess,&e,&max_iteration);
    while(1){
        x1 = gx(x0);
        count++;
        if(count > max_iteration){
            printf("The method failed after %d iterations",max_iteration);
           break;
        }
        
        x0 = x1;
        if(fabs(func(x1)<e)){
            break;
        }
        
    }
    printf("The root is %f",x1);
    printf("\nThe number of iteration is %d",count);
   
}