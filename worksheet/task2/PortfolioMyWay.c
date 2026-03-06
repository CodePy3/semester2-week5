/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Jonathan Monks
 * ID: 201986903 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

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
		if (sscanf(&hex[i], "%d", &num) == 1) {
			switch (num) {
				case 0:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 1:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 2:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 3:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 4:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 5:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 6:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 7:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 8:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				case 9:
					decimal += (num*(pow(16,(length-1-i))));
					break;
				default:
					printf("Error: Invalid Hexadecimal\n");
	
			}
		} else if(sscanf(&hex[i], "%c", &letter) == 1) {
			switch (letter) {
				case 'A': 
					decimal += 10 *(pow(16,(length-1-i)));
					break;
				case 'B': 
					decimal += (11*(pow(16,(length-1-i))));
					break;
				case 'C': 
					decimal += (12*(pow(16,(length-1-i))));
					break;
				case 'D': 
					decimal += (13*(pow(16,(length-1-i))));
					break;
				case 'E': 
					decimal += (14*(pow(16,(length-1-i))));
					break;
				case 'F': 
					decimal += (15*(pow(16,(length-1-i))));
					break;
				
			}
		} else {
			printf("Error: Invalid Hexadecimal\n");
		}
	}

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}