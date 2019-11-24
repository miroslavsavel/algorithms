//gcc arrays.c -g -w -o arrays
/*
podla tohto somimplementoval kniznicu
https://computer.howstuffworks.com/c15.htm

*/
#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"


//this function allocate and random generate an array
int *generate_array(int length)
{
	int* pole;
	
	pole = (int*)malloc(length * sizeof(int));
	// Check if the memory has been successfully 
    // allocated by malloc or not 
    if (pole == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n");

        //assign random numbers to elements of array 1 -100
		for(int j = 0; j < length; j++)
		{
			pole[j]=rand() % 100 + 1;
		}

        return pole; 
    }    
}


//20191104
//this function display an array 
//input is pointer to array and lenght of array
/*
	https://www.geeksforgeeks.org/size_t-data-type-c-language/
*/
void print_array(int *pole, size_t length)
{
	size_t i = 0;
	// Print the elements of the array 
    printf("The elements of the array are: ");
    printf("\n"); 
    for( ; i < length; ++i )      
    	printf("%d\t", pole[i]);
    printf("\n");
}

