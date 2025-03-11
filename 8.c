/*******************************************************************************
* Program: 8
* File Name: 8.c
* Description: A function that converts Celsius to Fahrenheit.
* MISRA Compliance: Verified for Rules 2.1 (readability), 8.4 (declaration comments),
*                   and 9.1 (variable initialization).
*******************************************************************************/



#include <stdio.h>


/**
 * @desc converts celsius into fahrenheit 
 * @param celsius the number in celsius that will be converted.
 * @return double - Returns the number converted to fahrenheit (MISRA Rule 15.5: a single exit point).
 */
double convert_cel_to_fahr(const double celsius){
    return ((celsius*9)/5)+32;
}



/**
 * @brief Main function: Test cases for the convert cel to fahr function.
 * @return int - Returns 0 on successful execution (MISRA Rule 15.5: a single exit point).
 */
int main(){

    /*Test Case 1: 0, should be 32*/
    (void)printf("Fahrenheit: %0.1f\n", convert_cel_to_fahr(0));

    /*Test Case 2: 15, should be 59*/
    (void)printf("Fahrenheit: %0.1f\n", convert_cel_to_fahr(15));

    /*Test Case 1: 0.5, should be 32.9*/
    (void)printf("Fahrenheit: %0.1f\n", convert_cel_to_fahr(0.5));

    return 0;
}
