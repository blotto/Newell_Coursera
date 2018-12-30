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

int main(void) {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    unsigned char minumum, maximum;
    float median, mean = 0;

    /* Statistics and Printing Functions Go Here */
    sort_array(test, SIZE);

    minumum = find_minimum(test, SIZE);
    maximum = find_maximum(test, SIZE);
    median = find_median(test, SIZE);
    mean = find_mean(test, SIZE);

    print_array(test, SIZE);
    print_statistics(minumum, maximum, median, mean);

}

/****
 Add other Implementation File Code Here
*/
void print_statistics(unsigned char min, unsigned char max, float med , float mean) {
    printf("Min:\t %u\n", min);
    printf("Max:\t %u\n", max);
    printf("Median:\t %.1f\n", med);
    printf("Mean:\t %.2f\n", mean);
}
unsigned char find_minimum(unsigned char  * ptr, unsigned int count) {
    return ptr[count-1];
}

unsigned char find_maximum(unsigned char  * ptr, unsigned int count) {
    return ptr[0];
}

float find_median(unsigned char  * ptr, unsigned int count) {

    if(count%2==0) {
        // an even sized array, average middle two elements
        return((ptr[count/2 - 1] + ptr[count/2]) / 2.0);
    } else {
        // an odd sized array, simply return element directly in the middle
        return ptr[(count-1)/2];
    }

}

float find_mean(unsigned char  * ptr, unsigned int count) {
    int i;
    float sum = 0;

    for(i = 0; i < count; i++) {
        sum += *ptr;
        ptr++;
    }

    return (sum / count);
}

void print_array(unsigned char  * ptr, unsigned int count) {
    int i;

    if (count <= 0) {
        printf("No valid array size provided. Unable to print array.");
        return;
    }

    printf("{ ");
    for(i = 0; i < count; i++) {
        printf("%d", ptr[i]);
        if ( i < count - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

void sort_array(unsigned char * ptr, unsigned int count) {
    int i, j;
    int temp;
    if ( count <= 0 ) {
        count = 1;
    }

    for (i=0; i<count-1; i++) {
        for (j=i+1; j<count; j++) {
            if (ptr[j] > ptr[i]) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}