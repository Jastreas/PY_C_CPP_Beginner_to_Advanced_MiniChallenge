/*******************************************************************************
* Program: 10
* File Name: 10.c
* Description: Implement fgets() to read a line from a file (Improved to experiment).
* MISRA Compliance: Verified for Rules 2.1 (readability), 8.4 (declaration comments),
*                   and 9.1 (variable initialization).
*******************************************************************************/

#include <stdio.h>    /* Standard I/O library */
#include <string.h>   /* String manipulation functions */

#define BUFFER_SIZE 100 /* Define buffer size for reading lines */

/**
 * @brief Main function: Opens a file, reads lines using fgets, and prints them.
 * @return int - Returns 0 if execution is successful.
 * 
 * MISRA Rule 15.5: Single exit point in the function.
 */
int main(void) {

    FILE *fptr = NULL;  /* File pointer initialized to NULL to ensure safe use */
    char line[BUFFER_SIZE] = {0};  /* Initialize the buffer with zeros */
    
    /* Open file for reading */
    fptr = fopen("exercises_practice.txt", "r");
    
    if (fptr == NULL) {  /* Ensure the file opened successfully */
        (void)printf("Error: Unable to open file.\n");
        return 1;  /* Return an error code if the file cannot be opened */
    }

    /* Read lines from the file and print them */
    while (fgets(line, BUFFER_SIZE, fptr) != NULL) {
        /* Remove newline character if present */
        line[strcspn(line, "\n")] = '\0';
        
        /* Print the line */
        (void)printf("%s\n", line);
    }

    /* Close the file */
    fclose(fptr);

    return 0;  /* Ensure single exit point (MISRA Rule 15.5) */
}

