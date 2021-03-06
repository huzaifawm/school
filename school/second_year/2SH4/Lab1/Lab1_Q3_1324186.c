/* 
 * File:   main.c
 * Author: mirzahw
 *
 * Created on September 18, 2014, 3:07 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    /* Part A*/
    int x; /* Used to get users number*/
    printf("Enter a number: "); /* Asks the user for the number*/
    scanf("%d" , &x); /* Gives x the value the user inputs*/
    if (x>99 && x<1000) /* Used to determine if x is a 3-digit number*/
    {
        printf("\nYour number is a 3 digit number\n\n"); /* If x is then this code occurs*/
    }
    else
    {
        printf("\nYour number either consists of more than 3 digits or less than\n\n"); /* Otherwise this code occurs*/
    }
    /*Part B*/
    while (x != 0) /* Loop runs until x is equal to 0*/
    {
        printf("\nPlease input an integer (0 to end): "); /* Asks the user to input any number*/
        scanf("%d", &x); /* Gives x the value the user inputs*/
        if (x>99 && x<1000) /* Used to determine if x is a 3-digit number*/
        {
            printf("Your input is a 3-digit number %d", x); /* If x is then this code occurs*/
        }
    }
    return (EXIT_SUCCESS);
}
