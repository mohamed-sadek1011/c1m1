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
 * @brief This is the implementation file in which the main function will be written, in addition to all the other functions prototyped in
 * "stats.h"
 *
 * The main code  for this program will be written inside the main() function, all the required functions will be implemented aswell.
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

  unsigned char median=0,mean=0,maximum=0,minimum=0;

  median  = find_median(test,SIZE);
  mean    = find_mean(test,SIZE);
  maximum = find_maximum(test,SIZE);
  minimum = find_minimum(test,SIZE);

  print_statistics(minimum,maximum,mean,median); 
  sort_array(test,SIZE);
  print_array(test,SIZE);
}



void print_statistics (unsigned char minimum,unsigned char maximum,unsigned char mean, unsigned char median)
{
printf("The array statistics:\n");
printf("The minimum number is : %d\n",minimum);
printf("The maximum number is : %d\n",maximum);
printf("The median is : %d\n",median);
printf("The mean is : %d\n",mean);
}

void print_array (unsigned char* array_adress,unsigned char array_length)
{
printf("%d elements array:\n",array_length);
for (unsigned char i = 1; i <= array_length ; i++)
{
if ( i == 1 )
printf("{%d, ",*array_adress);
else if ( i == array_length )
printf("%d}\n",*array_adress);
else
printf("%d, ",*array_adress);
array_adress++;
}
}

unsigned char find_median (unsigned char* array_adress,unsigned char array_length)
{
unsigned char median;
sort_array(array_adress,array_length);
if ( array_length % 2 == 0 )
{
array_adress += (array_length/2);
median = *array_adress;
array_adress++;
median = ( median + *array_adress ) / 2;
}
else
{
array_adress += (array_length/2+1);
median = *array_adress;
}
return median;
}

unsigned char find_mean (unsigned char* array_adress,unsigned char array_length)
{
unsigned short int sum = 0;
unsigned char mean;

for ( unsigned char i = 1 ; i <= array_length ; i++ )
{
sum += *array_adress;
array_adress++; 
}

mean = sum/array_length;
return mean;

}

unsigned char find_maximum (unsigned char* array_adress,unsigned char array_length)
{
sort_array(array_adress,array_length);
return *array_adress;
}

unsigned char find_minimum (unsigned char* array_adress,unsigned char array_length)
{
sort_array(array_adress,array_length);
array_adress += (array_length-1);
return *array_adress;

}

void sort_array (unsigned char* array_adress,unsigned char array_length)
{
unsigned char* prev_element_adress = array_adress;
unsigned char* current_element_adress = array_adress+1;
for ( unsigned char i = 1 ; i <= (array_length-1)  ; i++ )
{
prev_element_adress = array_adress;
current_element_adress = array_adress+1;

for ( unsigned char i = 1 ; i <= (array_length-1) ; i++ )
{
if ( *prev_element_adress < *current_element_adress )
exchange_two_variables( prev_element_adress, current_element_adress );

prev_element_adress++;
current_element_adress++;

}
}
}


void exchange_two_variables(unsigned char* x, unsigned char* y)
{
*x = *x + *y;
*y = *x - *y;
*x = *x - *y;
}
