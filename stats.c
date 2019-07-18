/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Program analyzes an array of data and prints out data
 * and analytics of it.
 * 
 * Analyzes an array of unsigned char data items and reports 
 * analytics on the maximum, minimum, mean, and median of the data set. 
 * Data set is reordered from large to small. All statistics is rounded 
 * down to the nearest integer. After analysis and sorting is done, 
 * data is printed to the screen in nicely formatted presentation. 
 *
 * @author Vladimir Smagin
 * @date 07/18/2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  
	printf("\nOriginal Array:\n");
	print_array(test, SIZE);
	
	sort_array(test, SIZE);
	printf("\nSorted Array from Max to Min:\n");
	print_array(test, SIZE);
	
	print_statistics(test);
}

/* Add other Implementation File Code Here */

/*A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.*/
void print_statistics(unsigned char *data) {
	
	printf("\n");
	printf("Minimum: %d\n", find_minimum(data, SIZE));
	printf("Maximum: %d\n", find_maximum(data, SIZE));
	printf("Mean: %d\n", find_mean(data, SIZE));
	printf("Median: %d\n", find_median(data, SIZE));
} 

/*Given an array of data and a length, prints the array to the screen*/
void print_array(unsigned char *data, int size) {
	
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}


/*Given an array of data and a length, returns the median value*/
unsigned char find_median(unsigned char *data, int size) {
	//sort_array(data, size);
	
	if (size%2)
		return (data[size/2] + data[size/2+1])/2;
	else
		return (data[size/2+1]);
}


/*Given an array of data and a length, returns the mean*/
unsigned char find_mean(unsigned char *data, int size) {
	//sort_array(data, size);
	
	unsigned int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += data[i];
	}
	return (sum/size);
}

/*Given an array of data and a length, returns the maximum*/
unsigned char find_maximum(unsigned char *data, int size) {
	//sort_array(data, size);
	return (data[0]);
}

/*Given an array of data and a length, returns the minimum*/
unsigned char find_minimum(unsigned char *data, int size) {
	//sort_array(data, size);
	return (data[size-1]);
}

/*Given an array of data and a length, sorts the array from largest to 
 * smallest. (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value. )
 * 
 * Returns: sum of data */
void sort_array(unsigned char *data, int size) {
	
	unsigned int sum = 0;
	
	//Selection sort algorithm
	for (int i = 0; i < size; i++) {
		int max = i;
		for (int j = i+1; j < size; j++) {
			if (data[j] > data[max])
				max = j;
		}
		if (max != i) {
			char temp = data[i];
			data[i] = data[max];
			data[max] = temp;
		}
		sum += data[i];
	}
}
