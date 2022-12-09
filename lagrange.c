	//lagranges interpolation
	#include<stdio.h>
	int main(){
		float x[100],fx[100],xp,l[100],sum = 0;
		int n,i,j;
		printf(" \nenter the value of n :");
		scanf("%d",&n);
		for (i = 1 ;i<=n ;i++) {
			printf("\nenter x[%d] ",i);
			scanf("%f", &x[i]);
			printf(" \nenter fx[%d] ",i);
			scanf("%f", &fx[i]);				
		}
	printf(" \nenter the interpolation value : ");
	scanf("%f",&xp);
	
		for(i = 1 ; i<=n;i++){
			l[i] = 1;
			for(j =1 ;j<=n;j++){
				if(i!=j){
				l[i] = l[i]*((xp-x[j])/(x[i]-x[j]));
			}
			}
			sum = sum + fx[i] * l[i];		
			}
		printf("\n the value at interpolation %.2f is %.2f",xp,sum);
		}
