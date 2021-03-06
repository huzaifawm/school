/* 
 * File:   main.c
 * Author: mirzahw
 *
 * Created on September 18, 2014, 3:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 0; /* Original number user inputs*/
    int j = 0; /* Used to determine if number is between 1 and 25 along with being odd*/
    int g; /* Used to determine if number is odd*/
    while (j == 0) /* Loops until the user inputs an even number between 1 and 25*/
    {
        printf("Enter an odd number between 1 and 25: "); /* Asks the user for a number*/
        scanf("%d" , &n); /* Stores number in n*/
        g = n%2; /* Divides number by 2 and give g the remainder value*/
        if (n>=1 && n<=25 && g == 1) /* If number is between 1 and 25 along with g having the value of 1*/
        {
            j = 1; /* j becomes 1 to end the loop*/
        }
        else /* Otherwise*/
        {
            j = 0; /* j is still 0 and the loop continues*/
        }
    }
    printf("\nPart A\n"); /* First part, rectangle*/
    int l = 2*n-1; /* Formula to determine columns*/
    int k = 0; /* Place holder variable used throughout code*/
    int r = 0; /* Place holder variable used throughout code*/
    while (k != n) /* Loops until n number of lines are printed*/
    {
        while (r != l) /* Loops until number of columns are printed)*/
        {
            printf("*"); /* Prints '*'*/
            r++; /* Adds one to r, eventually r will equal l to end loop*/
        } /* The first line is printed*/
        k++; /* Adds one to k, eventually k will equal n to end loop*/
        r = 0; /* Sets r back to 0*/
        printf("\n"); /* Starts the next loop on a new line*/
    } /* Big loop for lines and small loop for number of columns*/
    printf("\n\nPart B\n"); /* Second part, Pyramid*/
    k = 0; /* Sets place holder variable to 0*/
    r = n - 1; /* Sets place holder variable to n*/
    int z = 1; /* Creates and sets place holder variable to 1*/
    int b = 1; /* Creates and sets place holder variable to 1*/
    int y = 1; /* Creates and sets place holder variable to 1*/
    while (k != n) /* Loops until n number of lines are printed*/
    {
        printf("\n"); /* Starts on a new line*/
        while (r != 0) /* Used to print spaces*/
        {
            printf(" "); /* Prints spaces*/
            r = r-1; /* Takes away one value from r to get it to gradually get to 0*/
        } /* Prints the specific number of spaces on the first line*/
        while (y != 0) /* Used to print '*'*/
        {
            printf("*"); /* Prints '*'*/
            y = y-1; /* Takes one value away from y to gradually get to 0*/
        } /* Prints the specific number of '*'*/
        r = ((n-1)-b); /* Sets the r value one less than is was before*/
        b++; /* Adds one to b, used to reduce the r value by one*/
        z  = z + 2; /* Used to increase the number of '*' outputted by 2*/
        y = z; /* Sets y value to equal the new z*/
        k++; /* Adds one to k, eventually k will equal n to end loop*/
    }
    printf("\n\nPart C\n"); /* Third part, Weird shape*/
    k = 0; /* Sets place holder variable to 0*/
    r = 0; /* Sets place holder variable to 0*/
    z = 0; /* Sets place holder variable to 0*/
    while (k != n) /* Loops until n number of lines are printed*/
    {
        while (r != l/* This is 'l' not one*/) /* Used to print '*'*/
        {
            printf("*"); /* Prints '*'*/
            r++; /* Adds one to r, eventually r is become equivalent to 'l'*/
        }
        z = z+2; /* Adds two to z, used to print two less '*'*/
        r = z; /* Gives r the value of z*/
        printf("\n"); /* Starts the next loop on a new line*/
        k++; /* Adds one to k, eventually k will equal n to end loop*/
    }
    printf("\n\nPart D\n"); /* Fourth part, Hour glass*/
    k = 0; /* Sets place holder variable to 0*/
    r = n; /* Sets place holder variable to n*/
    z = 0; /* Sets place holder variable to 0*/
    y = 0; /* Sets place holder variable to 0*/
    b = n; /* Sets place holder variable to n*/
    int v = 1; /* Creates and sets place holder variable to 1*/
    int u = n/2; /* Creates and sets place holder variable to half of n*/
    int o = 1; /* Creates and sets place holder variable to 1*/
    int q = 1; /* Creates and sets place holder variable to 1*/
    while (k != n) /* Loops until n number of lines are printed*/
    {
        if (b > 1) /* Checks to see if the value of b is above 1, if yes the following code is executed*/
        {
            while (z != 0) /* Loops until z is equal to 0*/
            {
                printf(" "); /* prints a space*/
                z = z-1; /* Subtracts one from z, eventually z will equal 0*/
            } /* Used to print spaces, starts with 0 and increases by 1 for each line, until b equals 1*/
            while (r > 0)
            {
                printf("*"); /* prints '*'*/
                r = r-1; /* Subtracts one from r, eventually r will equal 0*/
            } /* Used to print '*', starts with n and decreases by 2 for each line, until b equals 1*/
        }
        else /* Once b is equal to 1 or less the following code executes, note b will be equal to 1*/
        {
            while(u != 0) /* Loops until u is equal to 0*/
            {
                printf(" "); /* prints a space*/
                u = u-1; /* Subtracts one from u, eventually u will equal 0*/
            } /* u is equivalent to half of n using integer division, used to make correct number of spaces*/
            while (v != 0) /* Loops until v is equal to 0*/
            {
                printf("*"); /* prints '*'*/
                v = v-1; /* Subtracts one from v, eventually v will equal 0*/
            } /* u is equivalent to one, used to make correct number of '*'*/
            u = ((n/2)-q); /* u now becomes half of n, using integer division, subtracted by q*/
            q++; /* q increases by one, used to decrease the number of spaces by one*/
            o = o + 2; /* o increases by two, used to increase the number of '*' by two*/
            v = o; /* Gives v the value of o*/
        }
        printf("\n"); /* Starts the next loop on a new line*/
        b = b - 2; /* Subtracts two from b to make the next line two '*' smaller*/
        r = b; /* Gives r the value of b, used for top half*/
        y++; /* Increases the value of y by one, used to decrease the number of spaces by one*/
        z = y; /* Gives z the value of y, used for top half*/
        k++; /* Adds one to k, eventually k will equal n to end loop*/
    }
    return (EXIT_SUCCESS);
}

