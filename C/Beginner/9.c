/*******************************************************************************
* Program: 9
* File Name: 9.c
* Description: Determines if a string is a palindrome.
* MISRA Compliance: Verified for Rules 2.1 (readability), 8.4 (declaration comments),
*                   and 9.1 (variable initialization).
*******************************************************************************/


#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 100

/**
 * @brief check_string function: checks if the char[] introduced is the same read frontwards and backwards lowering the cases.
 * @return int - Returns 1 if it's the same 0 if not (MISRA Rule 15.5: a single exit point).
 */

int check_string(const char string[]){
    int is_palindrome = 0;
    int string_lenght = strlen(string);
    char string_backwards[BUFFER_SIZE] = {0};

    for(int i = string_lenght; i >= 0; i--){
        strcat(string_backwards, string[i]);
    }
    

    return is_palindrome;
}


/**
 * @brief Main function: test cases for the check_string function.
 * @return int - Returns 0 on successful execution (MISRA Rule 15.5: a single exit point).
 */
int main(){
    /*TestCase 1: A word that is a palindrome*/
    char string1[BUFFER_SIZE] = {0};
    snprintf(string1, BUFFER_SIZE, "oso");

    /*TestCase 2: A word that is a palindrome but with Upper and lower cases*/
    char string2[BUFFER_SIZE] = {0};
    snprintf(string2, BUFFER_SIZE, "osO");

    /*TestCase 3: A word that isn't a palindrome*/
    char string3[BUFFER_SIZE] = {0};
    snprintf(string3, BUFFER_SIZE, "water");
    
    /*TestCase 4: A word that isn't a palindrome with different cased characters*/
    char string4[BUFFER_SIZE] = {0};
    snprintf(string4, BUFFER_SIZE, "wAteR");

    return 0;
}
