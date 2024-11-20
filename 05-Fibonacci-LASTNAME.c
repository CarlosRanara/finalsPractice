/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>

/*  
*
*  Implement the function Fibonacci().  It should print n numbers
*  in the Fibonacci sequence.  The first two numbers in the sequence 
*  are 0 and 1.
*
*  Consult the following webpage:
*
*  https://www.mathsisfun.com/numbers/fibonacci-sequence.html 
*
*  EXAMPLES
:
*
*
*  Example #1: If n is 6, the output of Fibonacci(6) is:
*
*              0  1  1  2  3  5
*
*  Example #2: If n is 10, the output of Fibonacci(10) is:
*
*              0  1  1  2  3  5  8  13  21  34
*/

void 
Fibonacci(int n)
{
	/* you may declare your own local variable/s */


}


int 
main()
{
	int n;
   	
   	do {
		printf("Input an integer greater than 2: ");
   		scanf("%d", &n);


		if (n <= 2)
			printf("Invalid input. Try again.\n");
	} while (n <= 2);

   	Fibonacci(n);

   	return 0;
}


