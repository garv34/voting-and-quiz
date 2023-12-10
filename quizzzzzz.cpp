#include <stdio.h>
#include <stdlib.h>

int main() {
	jump :
    char colour;
    int score = 0;

    printf("Choose the correct options\n");

    while (1) {
        printf("What is the colour of sky?:\n");
        printf("a) red\tb) yellow\nc) blue\t\td) pink\n");
        scanf(" %c", &colour);

        switch (colour) {
            case 'a':
                printf("red\n");
                break;
            case 'b':
                printf("yellow\n");
                break;
            case 'c':
                printf("red\n");
                break;
            case 'd':
                printf("pink\n");
                score++;
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump;
                }
                break;
    }
    jump2 :
    char capitals;
    while (1) {
        printf("What is the capital of france:\n");
        printf("a) INDIA\tb)PARIS\nc)NEW YORK\t\td)AMERICA\n");
        scanf(" %c", &capitals);

        switch (capitals) {
            case 'a':
                printf("INDIA\n");
                break;
            case 'b':
                printf("PARIS\n");
                score++;
                break;
            case 'c':
                printf("NEW YORK\n");
                break;
            case 'd':
                printf("AMERICA\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump2;
                }
                break;
    }
    jump3 :
    char mammal;
    while (1) {
        printf("What is the largest mammal of world:\n");
        printf("a)LION\tb)HUMAN BEINGS\t\nc)ELEPHANT\td)BLUE WHALE\n");
        scanf(" %c", &mammal);

        switch (mammal) {
            case 'a':
                printf("LION\n");
                break;
            case 'b':
                printf("HUMAN BEINGSa\n");
                break;
            case 'c':
                printf("ELEPHANT\n");
                break;
            case 'd':
                printf("BLUE WHALE\n");
                score++;
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        char choice;
                printf("Please enter 1 for the next question or any other value to return: ");
                scanf(" %c", &choice);
        if (choice == '1') {
                    printf("Next question\n");
                } else {
                    printf("Return to the previous question\n");
                    goto jump3;
                }
                break;
}
jump4 :
    char anime;
    while (1) {
        printf("Which anime has sold most books or manga comics in the world :\n");
        printf("a)one piece\tb)naruto\nc)dragon balls\t\td)jujutsu kaisan\n");
        scanf(" %c", &anime);

        switch (anime) {
            case 'a':
                printf("one piece\n");
                score++;
                break;
            case 'b':
                printf("naruto\n");
                break;
            case 'c':
                printf("dragon balls\n");
                break;
            case 'd':
                printf("bleach\n");
                break;
            default:
                printf("Wrong value\n");
                printf("Please enter it again\n");
                
        }
        jump5 :
        char choice;
                printf("Please enter 0 for submit or\n 1 for previous question\n 2 for reattempt questions\n : ");
                scanf(" %c", &choice);
        if (choice == '0') {
                    printf("your quiz has been submitted\n");
                } else if(choice == '1') 
				{
                    printf("Return to the previous question\n");
                    goto jump4;
                }
                else if(choice == '2') 
				{
                    printf("Return to the previous question\n");
                    goto jump;
                }
                else 
				{
                    printf("u have enter wrong value enter it again\n");
                    goto jump5;
                }
                break;
    }
    printf("\nCorrect options:\n");
    printf("Q1: d\tQ2: b\tQ3: d\tQ4: a\n");
    printf("Your answers:\n");
    printf("Q1: %c\tQ2: %c\tQ3: %c\tQ4: %c\n", capital, capitals, mammal, anime);
    printf("Your score is: %d out of 4\n", score);
    return 0;
}

