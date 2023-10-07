#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <time.h>

int main()

{

  

    srand(time_t(NULL)); //generate random number

    char ary[12][12]; // this is for the treasuere map

    int Treasures, posX = 1, posY = 1, Collected = 0; //identify and initials

    for (int i = 0;i < 12;i++) //set the map

    {

        for (int j = 0;j < 12;j++)

        {

            if (i == 0 || i == 11 || j == 0 || j == 11)

            {

                ary[i][j] = '#';

            }

            else

            {

                ary[i][j] = '.';

            }

        }

    }

    printf("How many treasures? ");

    scanf ("%i", &Treasures);

    printf("%i\n", Treasures);

    for (int i = 0;i < Treasures;i++) //set the chest at randome location

    {

           ary[rand() % 9 + 1][rand() % 9 + 1] = '&';

    }

    ary[posX][posY] = 'X'; //this used to move around

    for (int i = 0;i < 12;i++)

    {

        for (int j = 0;j < 12;j++)

        {

            printf("%c ", ary[i][j]);

        }

        printf("\n");

    }


    clock_t t, time_elapsed;

    t = clock();

    double time_taken = 1;


    const int CHANCES = 18; // change here
    int chances = CHANCES; 

    for (; Treasures != Collected && time_taken > 0 && chances>0;) // added

    {

        printf("Enter your move (w for up, s for down, a for left, d for right): ");

        char ch = _getch();

        printf("%c", ch);

        system("@cls||clear");

        printf("\n");
        int prevPosX = posX;
        int prevPosY = posY;

        if (ch == 'a' || ch == 'w' || ch == 's' || ch == 'd') { // moving in range 1 to 10

            ary[posX][posY] = '.';

            if (ch == 'w' && posX > 1) {

                posX--;
                ary[prevPosX][prevPosY] = '^';

            }

            if (ch == 's' && posX < 10) {
                ary[prevPosX][prevPosY] = 'V';
                posX++;

            }

            if (ch == 'a' && posY > 1) {
                ary[prevPosX][prevPosY] = '<';
                posY--;

            }

            if (ch == 'd' && posY < 10) {
                ary[prevPosX][prevPosY] = '>';
                posY++;

            }

            if (ary[posX][posY] == '&') { //callculate the treasures collected

                Collected += 1;

                chances = CHANCES+1;  // added

            }

            ary[posX][posY] = 'X';
            
            for (int i = 0;i < 12;i++)

            {

                for (int j = 0;j < 12;j++)

                {

                    printf("%c ", ary[i][j]);

                }

                printf("\n");

            }

            printf("treasures collected: %d\n", Collected);

            time_elapsed = (clock() - t);

            time_taken = 15-(double)time_elapsed / CLOCKS_PER_SEC;

            printf(" %f seconds left. \n", time_taken);
            chances--;

        }

        else {

            printf("Please enter (w,s,a,d) only.\n");

        }

    }

    if (Treasures == Collected)

        printf("YOU WIN!\n");

    else if(chances <=0){
        printf("You are out of mooves, better luck next time");
    }

    else

        printf("time over. good luck next time!\n");

}