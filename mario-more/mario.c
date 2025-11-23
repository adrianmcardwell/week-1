#include <stdio.h>

int main(void){

    int input;

    // get input and ensure it is a whole number between 1-8 inlcusive
    do{
        printf("Height: ");
        scanf_s("%d",&input);
    }while (input < 1 || input > 8);

    // establish larger for loop that repeats below code for each layer in input
    for (int layer = input; layer > 0; layer--){

        // create individual for loops to determine how many spaces and hashes to print on the left side of the gap
        for (int space = 0; space < layer-1; space++){
            printf(" ");
        }
        for (int lbrick = input; lbrick > layer-1; lbrick--){
            printf("#");
        }

        // print the gap
        printf("  ");

        // print the bricks on the right side of the gap. No need for new spaces.
        for (int rbrick = input; rbrick > layer-1; rbrick--){
            printf("#");
        }

        printf("\n");
    }
}