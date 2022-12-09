#include<stdio.h>
int main(){
	float x[100],a[100][100];
	float l[100],_sum,xp;
	int i=0,j=0,n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	for(i = 0 ; i<n;i++){
		printf("enter x[%d] :",i+1);
		scanf("%f",&x[i]);
		printf("enter a[0][%d] : ",i+1);
		scanf("%f",&a[0][i]);
	}
	printf("enter the interpolation value : ");
	scanf("%f",&xp);
	for(i=0;i<n;i++){
		for(j=0;j< n-i;j++){
			a[i][j] = (a[i-1][j+1]- a[i-1][j])/(x[i+j]-x[j]);
		}
	}
	_sum = a[0][0];
	for(i=1;i<n;i++){
		l[i] = 1;
		for(j=0;j<i-1;j++){
			l[i] = l[i] * (xp-x[j]);
		}
		_sum = _sum + a[i][0]*l[i];
	}
	printf(" The value at interpolation %f is %f",xp,_sum);
}
