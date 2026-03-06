/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Jonathan Monks
 * ID: 201986903 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	int num;
	char letter;
	
	printf("Enter a hexadecimal:");

	fgets(hex, sizeof(hex), stdin);

	hex[strcspn(hex, "\n")] = '\0';

	int length = strlen(hex);

	for(int i=0; i<length; i++) {
        char c = hex[i];
		if (sscanf(&hex[i], "%1d", &num) == 1) { // checks if single digit (%1d) is a num (==1 if true)
			if(0 <= num && num <= 9) { // checks digit entered is valid (between 0 and 9)
					decimal = decimal * 16 + num; // manually calculates hex to decimal
            } else {
                printf("Error: Invalid Hexadecimal\n");
                exit(0);
            }

		} else if(sscanf(&hex[i], "%1c", &letter) == 1) {
            char upLetter = toupper(letter); // turns character into upper case so that lower case characters are not seen as invalid :)
			switch (upLetter) { // uses switch case to match letter to correct value e.g. A=10
				case 'A': 
					decimal = decimal * 16 + 10;
					break;
				case 'B': 
					decimal = decimal * 16 + 11;
					break;
				case 'C': 
					decimal = decimal * 16 + 12;
					break;
				case 'D': 
					decimal = decimal * 16 + 13;
					break;
				case 'E': 
					decimal = decimal * 16 + 14;
					break;
				case 'F': 
					decimal = decimal * 16 + 15;
					break;
                default:
                    printf("Error: Invalid Hexadecimal\n");
                    exit(0);
				
			}
		} else {
			printf("Error: Invalid Hexadecimal\n");
            exit(0);
		}
	}

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}