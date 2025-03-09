//Program: 4
//File Name: 4.c
//Description: Create an array of 10 numbers and print their values.

#include <stdio.h>

int main(){
    int number_list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++){ printf("%d ", number_list[i]); }
    return 0;
}