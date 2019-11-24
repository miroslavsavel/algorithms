/*
	in this library are imlementations of basic algorithms
*/



#include <stdio.h>
#include <stdlib.h>
#include "algorithms.h"


/*2019 CLRS implementation of insertion sort
	This function returns sorted array
*/
int *insertion_sort(int *pole, size_t lenghtOfArray)
{
	//funkcia dostane pole a zoradi jeho prvky pomocou insertion sortu
	printf("Insertion sort: \n");
	//according CLRS pseudocode page 18


	int key,i;
	for(int j = 1; j< lenghtOfArray; j++)
	{
		key = pole[j];
		//insert pole[j] into the sorted sequence pole[1...j-1].
		i = j - 1;
		while (i >=  0 && pole[i] > key)
		{
			pole[i+1] = pole[i];
			i = i-1;
			pole[i+1] = key;
		}		
	}
	printf("\n");
	return pole;	
}

