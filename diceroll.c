#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)

{
    int rolls[100];
    int sum = 0;
    int iterations = 10;

    for (int i = 0; i < iterations; i++)
    {
    int roll = 20;
   // printf("Type of dice: ");
    //scanf("%d", &roll);

    srand(time(NULL));
    int r = rand() % roll + 1;
    rolls[i] = r;
    printf("You rolled: %i\n", r);
    sum += r;
    sleep(1);
    }

    double avg = (double) sum/iterations;
    printf("Average roll was: %f\n", avg);
    return 0;
}