/*******************************************************************************
* Program: 7
* File Name: 7.c
* Description: A program that counts how many times a character appears in a string.
*              Includes test cases to demonstrate usage.
* MISRA Compliance: .
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief count_vowels function: Loop through a string of chars introduced as 
 *                               parameter and checks if its a vowel, adding +1 
 *                               to a counter if it is.
 * @param word (the input must be a char array).
 * @return int - Returns the total vowel count ((int)vowel_counter variable) (MISRA Rule 15.5: a single exit point).
 */
int count_vowels(const char word[]){

    int vowel_counter = 0;  /*init to 0*/
    int word_length = strlen(word); /*Declaring outside the loop for improving efficiency*/

    for(int i = 0; i < word_length; i++){

        int current_character = tolower(word[i]); /*Assignation of the character to lowercase it and anylize it better*/
                                               
        if(current_character == 'a' || current_character == 'e' ||
           current_character == 'i' || current_character == 'o' ||
           current_character == 'u'){
            vowel_counter++;
        }
        //(void)printf("%c\n", word[i]);//Debug
    }

    return vowel_counter;
}


/**
 * @brief Main function: Description of the function.
 * @return int - Returns 0 on successful execution (MISRA Rule 15.5: a single exit point).
 */
int main(void){ /* Explicit 'void' for no parameters (MISRA Rule 8.2) */

    /*All test cases should print 3*/
    /*Test Case 1: Create a string with a text fully in lower case*/
    char string1[] = {"example"}; 
    (void)printf("%d\n", count_vowels(string1));
    
    /*Test Case 2: Create a string with a text fully in upper case*/
    char string2[] = {"EXAMPLE"}; 
    (void)printf("%d\n", count_vowels(string2));

    /*Test Case 3: Create a string with a text with various upper and lower case characters*/
    char string3[] = {"ExaMplE"}; 
    (void)printf("%d\n", count_vowels(string3));
    
    
    /*Test Case 4: Passing a string value with various upper and lower case characters*/
    (void)printf("%d\n", count_vowels("ExaMpLe"));
    
    /*Test Case 5: Passing a string value with various types of characters*/
    (void)printf("%d\n", count_vowels("4Exam2Ple\n"));

    return 0;
}