#include<stdio.h>
int main(){
	float x[20],y[20],b,a,p;
	int i,j,n,w;
	float sumx = 0 , sumxx = 0, sumy = 0,sumxy = 0;
	printf(" enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		scanf("%f",&y[i]);
	}
	for(i = 0 ;i<n;i++){
		sumxx = sumxx + x[i] * x[i];
		sumx = sumx + x[i];
		sumxy = sumxy  + x[i] * y[i];
		sumy = sumy+ y[i];	}
	b  = (n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	a = (sumy-b*sumx)/n;
	printf(" the results are %f , %f",a,b);
	printf(" enter w ");
	scanf("%d",&w);
	p = a + b *w;
	printf("p is %f",p);
}






