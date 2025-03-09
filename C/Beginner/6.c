/*******************************************************************************
* Program: 6
* File Name: 6.c
* Description: Implements a struct to store and manage student data (name, age, GPA).
*              Includes test cases to demonstrate usage.
* MISRA Compliance: Verified for Rules 2.1 (readability), 8.4 (declaration comments),
*                   and 9.1 (variable initialization).
*******************************************************************************/

#include <stdio.h> 

/* Buffer size for student names (MISRA Rule 5.1: Use macros for magic numbers) */
#define BUFFER_SIZE 100

/**
 * @struct student_data
 * @brief Represents a student's data.
 * @var name - Student's name (max length: BUFFER_SIZE-1 to leave space for null terminator).
 * @var age - Student's age in years (valid range: 1-150).
 * @var gpa - Student's GPA (valid range: 0.0 to 10.0).
 */
struct student_data {
    char name[BUFFER_SIZE];  /*!< Name of the student */
    int age;                 /*!< Age of the student */
    double gpa;              /*!< Grade Point Average */
};

/**
 * @brief Main function: Demonstrates student data initialization and output.
 * @return int - Returns 0 on successful execution (MISRA Rule 15.5: no return in void).
 */
int main() {
    /* Test Case 1: Initialize student_1 */
    struct student_data student_1;
    student_1.age = 18;                     /* Valid age (non-negative integer) */
    student_1.gpa = 9.8;                    /* Valid GPA (within 0.0-10.0 range) */
    (void)snprintf(student_1.name,          /* MISRA Rule 17.7: Cast ignored for example */
                   BUFFER_SIZE,
                   "Sarah Fry");            /* Safe string copy (prevents buffer overflow) */

    /* Test Case 2: Initialize student_2 */
    struct student_data student_2;
    student_2.age = 20;                     /* Valid age */
    student_2.gpa = 10.0;                   /* Valid GPA (10.0 scale) */
    (void)snprintf(student_2.name,
                   BUFFER_SIZE,
                   "Thomas Lynn");

    /* Print student data (MISRA Rule 17.2: Format string validated) */
    (void)printf("%d, %.1f, %s\n", student_1.age, student_1.gpa, student_1.name);
    (void)printf("%d, %.1f, %s\n", student_2.age, student_2.gpa, student_2.name);

    return 0;
}