 
#include<conio.h> 
#include"convert.h" 
int main() { 
int n; 
float a,res; 
while(1) {  
printf("\n\n1. Celsius<-->Fahrenheit \n2. metre<-->feet \n3. litre<-->cubic feet \n4. Exit"); 
printf("\nEnter your choice: "); 
scanf("%d",&n); 
switch(n){ 
	case 1: printf("\nEnter value in Celsius for conversion: "); 
	scanf("%f",&a); 
	res = ctof(a); 
	printf("%f C = %f F",a,res); 
	printf("\nEnter value in Fahrenheit for conversion: "); 
	scanf("%f",&a); 
		res = ftoc(a); 
	printf("%f F = %f C",a,res); 
	break; 
	case 2: printf("\nEnter value in meters for conversion: "); 
	scanf("%f",&a); 
	res = mtof(a); 
	printf("%f m = %f ft",a,res); 
	printf("\nEnter value in feet for conversion: ");
	scanf("%f",&a); 
	res = ftom(a); 
	printf("%f ft = %f m",a,res); 
	break; 
	case 3: printf("\nEnter value in litres for conversion: "); 
	scanf("%f",&a); 
	res = ltocf(a); 
	printf("%f l = %f cu ft",a,res); 
	printf("\nEnter value in cubic feet for conversion: "); 
	scanf("%f",&a); 
	res = cftol(a); 
	printf("%f cu ft = %f l",a,res); 
	break; 
	case 4: exit(0); 
	break; 
	default:printf("\nEnter valid choice!!!"); 
	break; 
	} 
} 
return 0; 
}

