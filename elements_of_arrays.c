//C Program (ElementsofArrays)
/*
Name:Kiria Sammy Mwangi 
Registration Number:CT101/G/26462/25
Date:06/11/2025.
Description:Printing elements of the scores array.
*/
#include <stdio.h> //pre-processor derivative printf().


int main() {
	//declare and initialize a 2d array named scores
    int scores[2][2] = { // has 2 rows and 2 columns
        {65, 92},
        {35, 70}
    };
    int i, j; //loop controlled variables for row 'i' and column 'j'

    printf("Elements of the scores array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]); //print elements at current row 'i'and column 'j'
        }
        printf("\n"); // Print a newline character after each row to format the output
    }

    return 0;
}