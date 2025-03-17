#include <cstdio>   // Standard C library for output

int main(void) {   // Main should take no arguments (void)
    /* Print message using printf for simplicity and portability */
    if (printf("Hello World\n") < 0) {   // Ensure error handling for printf
        return 1;   // Return error code if printing fails
    }

    return 0;   // Indicate successful execution
}