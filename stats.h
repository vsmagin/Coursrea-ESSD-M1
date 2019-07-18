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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

 
 /**
 * @brief A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param unsigned char *test - pointer to array of characters
 *
 * @return void
 */
void print_statistics(unsigned char *test);

/**
 * @brief Given an array of data and a length, 
 * prints the array to the screen
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return void
 */
void print_array(unsigned char *data, int size);

/**
 * @brief Given an array of data and a length, 
 * returns the median value 
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return unsinged char - median value of the array
 */
unsigned char find_median(unsigned char *data, int size);


/**
 * @brief  Given an array of data and a length, 
 * returns the mean value
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return unsigned char - mean value of the array
 */
unsigned char find_mean(unsigned char *data, int size);


/**
 * @brief  Given an array of data and a length, 
 * returns the maximum value
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return unsigned char = maximum value of the array
 */
unsigned char find_maximum(unsigned char *data, int size);


/**
 * @brief  Given an array of data and a length, 
 * returns the minimum value
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return unsigned char - minimum value of the array
 */
unsigned char find_minimum(unsigned char *data, int size);

/**
 * @brief  Given an array of data and a length, 
 * sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value. )
 *
 * @param unsigned char *test - pointer to array of characters
 * @param int size - size of the array of characters
 *
 * @return void
 */
void sort_array(unsigned char *data, int size);

#endif /* __STATS_H__ */
