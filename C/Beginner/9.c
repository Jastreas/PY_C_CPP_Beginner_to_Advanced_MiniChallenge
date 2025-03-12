/*******************************************************************************
* Program: 9
* File Name: 9.c
* Description: Determines if a string is a palindrome.
* MISRA Compliance: Verified for Rules 2.1 (readability), 8.4 (declaration comments),
*                   and 9.1 (variable initialization).
*******************************************************************************/

#include <stdio.h>   /* Standard input-output library */
#include <string.h>  /* String manipulation functions */
#include <ctype.h>   /* Character handling functions */

#define BUFFER_SIZE 100          /* Define buffer size for string storage */
#define TEMPORAL_BUFFER_SIZE 2   /* Define buffer size for temporary character storage */

/**
 * @brief check_string function: checks if the input string is the same when read forward and backward, ignoring case.
 * @param[in] string Constant character array representing the input string.
 * @return int - Returns 1 if the string is a palindrome, 0 otherwise.
 *
 * MISRA Rule 15.5: Ensures a single exit point in the function.
 */
int check_string(const char string[]) {
    int is_palindrome = 0;  /* Variable to store palindrome status (1 = true, 0 = false) */
    int string_lenght = strlen(string); /* Calculate string length */
    char string_backwards[BUFFER_SIZE] = {0}; /* Buffer to store reversed string */
    char temp[TEMPORAL_BUFFER_SIZE] = {0}; /* Temporary buffer to hold characters */

    /* Reverse the input string and store in string_backwards */
    for (int i = string_lenght - 1; i >= 0; i--) {
        temp[0] = string[i];  /* Assign character to temp */
        temp[1] = '\0';       /* Null-terminate temp */
        strcat(string_backwards, temp); /* Append temp to string_backwards */
    }
    
    /* Compare original string with reversed string (case insensitive) */
    for (int i = string_lenght - 1; i >= 0; i--) {
        if (tolower(string[i]) == tolower(string_backwards[i])) {
            is_palindrome = 1; /* Set palindrome flag to true */
        } else {
            is_palindrome = 0; /* Set palindrome flag to false */
            break; /* Exit loop early if mismatch is found */
        }
    }

    return is_palindrome; /* Return result (MISRA Rule 15.5: Single exit point) */
}

/**
 * @brief Main function: Executes test cases for the check_string function.
 * @return int - Returns 0 on successful execution.
 *
 * MISRA Rule 15.5: Ensures a single exit point in the function.
 */
int main(void) {
    int is_palindrome = 0; /* Variable to store test results */

    /* Test Case 1: A word that is a palindrome */
    char string1[BUFFER_SIZE] = {0}; /* String declaration with initialization */
    snprintf(string1, BUFFER_SIZE, "oso"); /* Assign test string */
    is_palindrome = check_string(string1);
    (void)printf("%d\n", is_palindrome); /* Print result */

    /* Test Case 2: A palindrome with mixed case */
    char string2[BUFFER_SIZE] = {0};
    snprintf(string2, BUFFER_SIZE, "osO");
    is_palindrome = check_string(string2);
    (void)printf("%d\n", is_palindrome);
    
    /* Test Case 3: A word that is not a palindrome */
    char string3[BUFFER_SIZE] = {0};
    snprintf(string3, BUFFER_SIZE, "water");
    is_palindrome = check_string(string3);
    (void)printf("%d\n", is_palindrome);

    /* Test Case 4: A non-palindrome with mixed case */
    char string4[BUFFER_SIZE] = {0};
    snprintf(string4, BUFFER_SIZE, "wAteR");
    is_palindrome = check_string(string4);
    (void)printf("%d\n", is_palindrome);

    return 0; /* Ensure single exit point (MISRA Rule 15.5) */
}
