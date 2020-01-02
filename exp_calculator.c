#include <stdio.h>
float calExponent(float x,int y);
float main(){
	float a;
	int b;
	do{
		printf("please enter base:");
		scanf(" %f",&a);
		printf("please enter exponent:");
		scanf(" %d",&b);
		if(b<0) printf("please enter a positive number:");
	}
	while(b<0);
	printf("the value with the base %f, exponent %d, is %f\n", a,b,calExponent(a,b));
	return 0;
}

float calExponent(float a,int b){
	if(b==0) return 1;
	else if(b==1)return a;

	else if(b % 2 ==0){
		float c = calExponent(a,b/2);
		return c*c;
	}
	else{
		float c = calExponent(a,b/2);
		return c*c*a;
	}
}
