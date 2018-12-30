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
 * @brief Declarations file for Assignment 1
 *
 * Contains all function declarations for Assignment 1 in the course "Introduction to Embedded Systems Software and
 * Development Environments
 *
 * @author Nick Newell
 * @date December 27, 2018
 *
 */



#include <stdio.h>
#include "stats.h"

/******************************************************************************
 *
 * Constants
 *
 */

#define SIZE (40) /* Size of the Data Set */

int main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    int minumum, maximum, median, mean = 0;

    /* Statistics and Printing Functions Go Here */
    sort_array(test, SIZE);

    minumum = find_minimum(test, SIZE);
    maximum = find_maximum(test, SIZE);
    median = find_median(test, SIZE);
    mean = find_mean(test, SIZE);

    print_array(test, SIZE);
    print_statistics(minumum, maximum, median, mean);

    return 0;
}

/****
 Add other Implementation File Code Here
*/
void print_statistics(unsigned char min, unsigned char max, float med , float mean) {
    //
}
unsigned char find_minimum(unsigned char  * ptr, int count) {
    //
}

unsigned char find_maximum(unsigned char  * ptr, int count) {
    //
}

float find_median(unsigned char  * ptr, int count) {
    //
}

float find_mean(unsigned char  * ptr, int count) {
    //
}

void print_array(unsigned char  * ptr, int count) {
    //
}

void sort_array(unsigned char * ptr, int count) {
    //
}