//this is main method for testing implementation of basic algorithms

/*
gcc -c -g main.c arrays.c algorithms.c
gcc -c -g arrays.c
gcc -c -g algorithms.c
gcc -o main main.o arrays.o algorithms.o

in library arrays.c are basic function for maninpulation with arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include "algorithms.h"

int main(int argc, char **argv) {

	srand(time(0));
	// This pointer will hold the 
    // base address of the block created 
    int* pole; 
    int n;

    // Get the number of elements for the array 
    printf("Enter number of elements:\n");
    scanf("%d", &n); 

    // Dynamically allocate memory using malloc() 
    pole = generate_array(n); 
    print_array(pole,n);
    pole = insertion_sort(pole,n);
    print_array(pole,n);

    free(pole);
	return 0;
}