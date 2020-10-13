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
 * @brief It is the implementation file which the main function will be written, in addition to all the other functions prototyped in "stats.h"
 *
 * The main code  for this program will be written inside the main() function, all the required functions will be deeclared aswell.
 * for more details about the program check the file  "README.md"
 *
 * @author Mohamed Sadek
 * @date Tuesday, October 13,2020 
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

}

void print_statistics (unsigned char minimum,unsigned char maximum,unsigned char mean, unsigned char median)
{

}

void print_array (unsigned char* array_adress,unsigned char array_length)
{

}

unsigned char find_median (unsigned char* array_adress,unsigned char array_length)
{

}

unsigned char find_mean (unsigned char* array_adress,unsigned char array_length)
{

}

unsigned char find_maximum (unsigned char* array_adress,unsigned char array_length)
{

}

unsigned char find_minimum (unsigned char* array_adress,unsigned char array_length)
{

}

void sort_array (unsigned char* array_adress,unsigned char array_length)
{

}


/* Add other Implementation File Code Here */
