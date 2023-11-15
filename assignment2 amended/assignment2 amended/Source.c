/* Assignment 2*/

#include <stdio.h>

/* function main begins program execution */

int main(void)
{
	double radius;
	double diameter;
	double pi;

	/* assign the value of 3.14159 to pi*/
	pi = 3.14159;

	/* takes the radius as an integer as input from the user */
	printf("Enter the radius of the circle: \n");
	scanf("%lf", &radius);

	/* prints the diameter, circumference and area of the circle */
	printf("\nThe diameter is %f\nThe circumference is %f\nThe area is %f\n",
		radius * 2, pi * radius * 2, pi * radius * radius);

	return 0;
}