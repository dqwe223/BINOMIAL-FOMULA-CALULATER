#include<stdio.h>
#include<math.h>

int main(){
	float n,p,x;
	double a,b=1,c=1,d=1;
	printf("~~BINOMIAL FOMULA CALULATER~~\n\n");
	printf("Enter the n value :");
	scanf("%f",&n);
	printf("Enter the p value :");
	scanf("%f",&p);
	printf("Enter the x value :");
	scanf("%f",&x);
	
	for(a=n;a>=1;a--){
		b=b*a;	
	}
	for(a=x;a>=1;a--){
		c*=a;
	}
	for(a=n-x;a>=1;a--){
		d*=a;
	}
	
	float q=1-p;
	float ncx=b/(c*d);
	float px=pow(p,x);
	float qx=pow(q,n-x);

	double anw=ncx*px*qx;
	printf("\n\nanswer in Binomial Fomula = %.5f",anw);
	
	
	return 0;
}
