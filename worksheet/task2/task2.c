/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Ashkan Ramjerdi
 * ID: xcqc0000
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	printf("Enter a hexadecimal:");
    scanf("%8s",hex);
	int len=strlen(hex);
	for (int i=0,exp=len-1; i<len && exp>=0; i++,exp--){
		switch (toupper(hex[i])){
			case '1':
				decimal+=1*pow(16,exp);
				break;
			case '2':
				decimal+=2*pow(16,exp);
				break;
			case '3':
				decimal+=3*pow(16,exp);
				break;
			case '4':
				decimal+=4*pow(16,exp);
				break;
			case '5':
				decimal+=5*pow(16,exp);
				break;
			case '6':
				decimal+=6*pow(16,exp);
				break;
			case '7':
				decimal+=7*pow(16,exp);
				break;
			case '8':
				decimal+=8*pow(16,exp);
				break;
			case '9':
				decimal+=9*pow(16,exp);
				break;
			case 'A':
				decimal+=10*pow(16,exp);
				break;
			case 'B':
				decimal+=11*pow(16,exp);
				break;
			case 'C':
				decimal+=12*pow(16,exp);
				break;
			case 'D':
				decimal+=13*pow(16,exp);
				break;
			case 'E':
				decimal+=14*pow(16,exp);
				break;
			case 'F':
				decimal+=15*pow(16,exp);
				break;
			default :
				printf("Error: Invalid Hexadecimal\n");
				return 0;
		}
	}
	 
		
	 // if input contains invalid hex digit
	 // printf("Error: Invalid Hexadecimal\n");
	
	 // print the decimal result
		printf("decimal:%ld\n",decimal);
	
	return 0;
}