/*
 * 2015.10.08.
 */
#include <stdio.h>
#include <time.h>

int main()
{
	int num;
	int d;
    int s = 1;
	srand(time(NULL));
    d = rand() % 101;
    printf("Guess the number between 0 and 100!\n");
  	while (num != d){
    scanf("%d", &num);
       if(num < d){
	printf("Sorry, the number is bigger!\n");
    ++s;
	} else if (num > d) {
	printf("Sorry, the number is smaller!\n");
    ++s;
	}}

	printf("Congratulations! You guessed the number!\n");
    printf("Yout guessed %d times.\n\n", s);
	 scanf("%d", &num);
	return 0;
}
