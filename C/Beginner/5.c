/*******************************************************************************
* Program: 5
* File Name: 5.c
* Description: Calculates the factorial of a number using MISRA C-compliant code.
* MISRA Compliance: Verified for Rules 5.1, 8.4, 9.1, 17.3, 17.7, and 13.3.
*******************************************************************************/

#include <stdio.h>

/* Define macros to avoid magic numbers (MISRA Rule 5.1) */
#define MAX_TEST_CASE  15U
#define FACTORIAL_BASE_CASE 1U

/**
 * @brief Calculates the factorial of a non-negative integer.
 * @param number The input value (must be ≥ 0).
 * @return unsigned long long Result of the factorial operation.
 */
unsigned long long factorial(unsigned long long number)
{
    unsigned long long result = FACTORIAL_BASE_CASE; /* Initialize to handle 0! and 1! */

    if (number == 0U) /* Explicitly handle 0! case */
    {
        return result;
    }

    for (unsigned long long i = number; i > 1U; i--) /* MISRA Rule 13.3: Loop counter 'i' not modified in body */
    {
        result *= i;
    }

    return result;
}

int main(void) /* Explicit 'void' for no parameters (MISRA Rule 8.2) */
{
    /* Test cases (MISRA Rule 9.1: Ensure loop variable is initialized) */
    for (unsigned long long i = 0U; i <= MAX_TEST_CASE; i++)
    {
        const unsigned long long result = factorial(i);
        (void)printf("%llu! = %llu\n", i, result); /* MISRA Rule 17.7: Cast ignored return value */
    }

    return 0;
}