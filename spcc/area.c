#include<conio.h>
#include "areas.h"

int main()
{
	float area_circle, r, area_square, area_triangle , area_rectangle;
	int ch,n1,n2;
	while(ch!=5){
	printf("\n\n1. Area of Circle \n2.Area of Square \n3.Area of Triangle \n4.Area of Rectangle \n5.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	
	switch(ch){
	case 1: printf("\nEnter radius: ");
		    scanf("%f", &r);
			area_circle = C_area(r);
			printf("Area of circle = %f", area_circle);
			break;
	case 2: printf("Enter side: ");
		    scanf("%d", &n1);
			area_square = S_area(n1);
			printf("Area of square = %f", area_square);
			break;
	case 3: printf("\nEnter base and height: ");
		    scanf("%d %d", &n1, &n2);
			area_triangle = T_area(n1, n2);
			printf("Area of triangle = %f", area_triangle);
			break;
	case 4: printf("\nEnter length and breadth: ");
		    scanf("%d %d", &n1, &n2);
			area_rectangle = R_area(n1, n2);
			printf("Area of Rectangle = %f", area_rectangle);
			
	case 5: break;
	}
	}
	return 0;
}

