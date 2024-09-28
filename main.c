#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
       srand(time(0));
       int random_number = rand()%100 + 1;  //will guess the number from 0 to 100 
       int num_of_guess=0;
       int guessed;
       do
       {
             printf("\nEnter the guessed number:");
             scanf("%d",&guessed);
             if (guessed>random_number)
             {
                printf("\nLower number please.\n");
             }
             else
             {
                printf("\nHigher number please.\n");
             }
             num_of_guess++;
       } while (guessed!=random_number);
       printf("You found the random number after %d guesses.\n",num_of_guess);
       return 0;
}