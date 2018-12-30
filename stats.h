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
 * @file stats.h
 * @brief Declarations file for Assignment 1
 *
 * Contains all function declarations for Assignment 1 in the course "Introduction to Embedded Systems Software and
 * Development Environments
 *
 * @author Nick Newell
 * @date December 27, 2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief print the statistics of an array
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param min the minimum value of dataset in array
 * @param max the maximum value of dataset in array
 * @param med the median value of dataset in array
 * @param mean the mean value of dataset in array
 *
 * @return none
 */
void print_statistics(unsigned char min, unsigned char max, float med , float mean);

/**
 * @brief print array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return none
 */
void print_array(unsigned char * ptr, int count);

/**
 * @brief find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return median of data in array
 */
float find_median(unsigned char  * ptr, int count);

/**
 * @brief find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return mean of data in array
 */
float find_mean(unsigned char  * ptr, int count);

/**
 * @brief find maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return  maximum of data in array
 */
unsigned char find_maximum(unsigned char  * ptr, int count);

/**
 * @brief find minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return minimum of data in array
 */
unsigned char find_minimum(unsigned char  * ptr, int count);

/**
 * @brief sorts array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the
 * largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param ptr pointer to the array
 * @param count length of array to print
 *
 * @return none
 */
void sort_array(unsigned char  * ptr, int count);

#endif /* __STATS_H__ */