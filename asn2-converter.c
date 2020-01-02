#include <stdio.h>
int kmToMile(char x);
int mToFeet(char x);
int cmToInch(char x);
int cToF(char x);
int main()
{

	int i;
        printf("1 for conversion between Kilometer and Mile \n2 for conversion between Meter and Feet \n3 for conversion between Centimetre and Inch \n4 for conversion between Celsius and Fahrenheit \n5 for quit \n");
	printf("choose your option:");
	scanf("%d",&i);
	while(i!=5){
		switch(i){
			case 1:
				kmToMile(i);
				break;
			case 2:
				mToFeet(i);
				break;
			case 3:
				cmToInch(i);
				break;
			case 4:
				cToF(i);
				break;

			default:
				printf("INVALID OPTION! please enter again:\n");
				return main();
		 	}
	printf("1 for conversion between Kilometer and Mile \n2 for conversion between Meter and Feet \n3 for conversion between Centimetre and Inch \n4 for conversion between Celsius and Fahrenheit \n5 for quit \n");
        printf("choose your option:");
	scanf("%d",&i);
	}
	printf("end of program\n");
	return 0;

}

int kmToMile(char i){
	char c;
	printf("K for conversion from Kilometer to Mile\nM for conversion from Mile to Kilometer\n");
	printf("choose your option:");
	scanf(" %c",&c);
	switch(c){
		double t;
		case 'K':
			printf("\nenter the value in Kilometer:");
			scanf("%lf",&t);
			printf("%lf km equals to %lf mile\n",t,t/1.609);
			break;
		case 'M':
			printf("\nenter the value in Miles:");
           		scanf("%lf",&t);
           		printf("%lf miles is equal to %lf km\n\n",t,t*1.609);
            		break;
		default:
			printf("INVALID INPUT!! please enter again:");
			scanf(" %c",&c);
			return kmToMile(c);
		}
}
	
int mToFeet(char i){
	char ch;
	printf("M for conversion from Meter to Feet\nF for conversion from Feet to Meter\n");
	printf("choose your option:");
	scanf(" %c",&ch);
	switch(ch){
		double t;
		case 'M':
			printf("enter the value in meter:\n");
			scanf("%lf",&t);
			printf("%lf m equals to %lf feet\n",t,t*3.28084);
			break;
		case 'F':
			printf("enter the value in feet:\n");
			scanf("%lf",&t);
			printf("%lf feet is equal to %lf  m\n\n",t,t/3.28084);
			break;
		default:
			printf("INVALID INPUT! please enter again:");
			scanf(" %c",&ch);
			return mToFeet(ch);

	}
}
int cmToInch(char  i ){
	char c;
	printf("C for conversion from Centimetre to Inch\nI for conversion from Inch to Centimetre\n");
	printf("choose your option:");
	scanf(" %c",&c);
	switch(c){
		double t;
		case 'C':
			printf("enter the value in centimetre:\n");
			scanf("%lf",&t);
			printf("%lf cm equals to %lf inch\n\n",t,t/2.54);
			break;
		case 'I':
			printf("enter the value in Inch:\n");
			scanf("%lf",&t);
			printf("%lf inch equals to %lf cm\n\n",t,t*2.54);
			break;
		default:
			printf("INVALID INPUT! please enter again:");
			scanf(" %c",&c);
			return cmToInch(c);
	}
}
int cToF(char i ){
	char c;
	printf("C for conversion from Celsius to Fahrenheit\nF for conversion from Fahrenheit to Celsius");
	printf("choose your option:");
	scanf(" %c",&c);
	switch(c){
		double t;
		case 'C':
			printf("\nenter the value in Celsius:");
			scanf("%lf",&t);
			printf("%lf Celsius is equal to %lf Fahrenheit\n\n",t,((t*9)/5)+32);
			break;
		case 'F':
			printf("\n enter the value in Fahrenheit:");
           		scanf("%lf",&t);
            		printf("%lf Fahrenheit is equal to %lf Celsius\n\n",t,((t-32)*5/9));
            		break;
		default:
			printf("INVALID INPUT! please enter again:");
			scanf(" %c",&c);
			return cToF(c);
	}
}
