#include <stdio.h>

int main()
{
	float value;
	float convalue;
	char format;
	
	printf("#######################################");
	printf("\n# A.	Inch to Centimetre	      #");
	printf("\n# B.	Feet to Centimetre	      #");
	printf("\n# C.	Feet to Meter		      #");
	printf("\n# D.	Yard to Meter		      #");
	printf("\n# E.	Mile to Kilometre	      #");
	printf("\n# F.	Ounce to Gram		      #");
	printf("\n# G.	Pound to Kilogram	      #");
	printf("\n# H.	Ton to Kilogram		      #");
	printf("\n# I.	Pint to Liter		      #");
	printf("\n# J.	Quart to Liter		      #");
	printf("\n# K.	Gallon to Liter		      #");
	printf("\n#######################################");
	
	printf("\nPlease enter value to convert (e.g: 10): ");
	scanf("%f", &value);
	printf("\nPlease enter choice conversion (A-K): ");
	scanf("\n%c", &format);

	switch(format)
	{
		case 'A':
		case 'a': 
			convalue = value*2.54;
			printf("\n%.4f inch = %.4f cm",value, convalue);
			break;
		case 'B':
		case 'b':
			convalue = value*30.48;
			printf("\n%.4f foot = %.4f cm",value, convalue);
			break;
		case 'C':
		case 'c':
			convalue = value*0.3048;
			printf("\n%.4f foot = %.4f m",value, convalue);
			break;
		case 'D':
		case 'd':
			convalue = value*0.9144;
			printf("\n%.4f yard = %.4f m",value, convalue);
			break;
		case 'E':
		case 'e':
			convalue = value*1.609344;
			printf("\n%.4f miles = %.4f km",value, convalue);
			break;
		case 'F':
		case 'f':
			convalue = value*28.349523;
			printf("\n%.4f ounces = %.4f g",value, convalue);
			break;			
		case 'G':
		case 'g':
			convalue = value*0.453592;
			printf("\n%.4f pound = %.4f kg",value, convalue);
			break;			
		case 'H':
		case 'h':
			convalue = value*907.18474;
			printf("\n%.4f ton = %.4f kg",value, convalue);
			break;			
		case 'I':
		case 'i':
			convalue = value*0.473163;
			printf("\n%.4f pints = %.4f l",value, convalue);
			break;			
		case 'J':
		case 'j':
			convalue = value*0.946326;;
			printf("\n%.4f quarts = %.4f l",value, convalue);
			break;			
		case 'K':
		case 'k':
			convalue = value*3.785306;
			printf("\n%.4f gallons = %.4f l",value, convalue);
			break;
		default: printf("\nYou entered the out of choice conversion");
	}
	return 0;
}
