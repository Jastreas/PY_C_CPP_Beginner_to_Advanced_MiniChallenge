//Program: 2
//File Name: 2.c
//Description: Add two numbers entered by the user.
//Main Challenge: Checking for the user input

#include <stdio.h>

int buffer_is_empty(int c){
    //Description: Checks if the character is equivalent to an empty buffer, if it's not empty ungets the character
    //Parameters:
    //  c: Int, stores the next character from the buffer
    //Returns: 1 if empty, 0 if not empty

    if(c == '\n' || c == EOF){
        return 1; //emtpy buffer
    } else {
        ungetc(c, stdin); //non-empty buffer
        return 0;
    }
}

void buffer_clear(){
    //Description: Gets all the characters from the buffer until \n or end of line (until is empty)
    //Used: Just in the calculate_sum method for cleaning the buffer so user can input again
    //printf("LOG: Clearing the buffer...\n"); //LOG
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF);
}

int calculate_sum(){
    int n1 = 0, n2 = 0, buffer_state = 0; //buffer state 0 empty, 1 has stuff

    do {
        printf("Introduce the first number:\n"); //Asking for input
        scanf("%d", &n1); //Storing the input if correct
        
        buffer_state = buffer_is_empty(getchar()); //Knowing buffer state
        //printf("LOG: Buffer state: %d\n", buffer_state); //LOG

        if(buffer_state == 0){ buffer_clear(); } //Clean buffer if wrong input

    } while(buffer_state != 1);

    do {
        printf("Introduce the second number:\n"); //Asking for input
        scanf("%d", &n2); //Storing the input if correct
        
        buffer_state = buffer_is_empty(getchar()); //Knowing the buffer state
        //printf("LOG: Buffer state: %d\n", buffer_state); //LOG

        if(buffer_state == 0){ buffer_clear(); } //Clean buffer if wrong input

    } while(buffer_state != 1);

    return n1 + n2;
}


int main(){
    printf("Result: %d\n", calculate_sum());
    return 0;
}
