#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if ( n < 0 ) {                  /* If the age is less than 100 */
     printf("negative\n"); /* Just to show you it works... */
    }
    else if ( n == 0 ) {            /* I use else just to show an example */ 
        printf( "zero\n" );       
    }
    else {
        printf( "positive\n" );     /* Executed if no other statement is */
    }
	return (0);
}
