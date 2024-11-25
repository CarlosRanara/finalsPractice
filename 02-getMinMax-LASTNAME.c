/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>


/*  
*
*  Implement the function getMinMax().
*
*  getMinMax() asks the user to repetitively input integer values.  The program
*  will stop asking for input once the user inputs a sentinel value of 0.
*  
*  getMinMaX() should also compute/determine the minimum and maximum values based  
*  on the input values.  The sentinel value of 0 should not be included in the 
*  computation.
*
*  When the function getMinMax() terminates, *ptrMin should contain the minimum
*  value and *ptrMax should contain the maximum value.
*
*
*  EXAMPLE:
*
*  	Input an integer: 10
*  	Input an integer: 5
*  	Input an integer: 8
*  	Input an integer: -25
*  	Input an integer: 1
*  	Input an integer: -33
*  	Input an integer: 99
*  	Input an integer: 0     
*
*
*  	The corresponding output will be:
*
*  	Minimum value is -33
*  	Maximum value is 99
*
*/
void 
getMinMax(int *ptrMin, int *ptrMax)
{ 
  int a, b, num;
  scanf("%d",&num);
 
  while (num != 0) {
    min  = num;
    max  = num;

    if (num < min)
      min  = num;
    if (num > max)
      max = num;

    scanf("%d", &num);
  }
  *ptrMin = min;
  *ptrMax = max;
	/* you may declare your own local variable/s */
/*
void 
getMinMax(int *ptrMin, int *ptrMax)
{ 
    int num;
    int a, b;  // Variables to store the minimum and maximum

    // Read the first input
    printf("Input an integer: ");
    scanf("%d", &num);

    if (num == 0) {  // Handle the case where the first input is the sentinel value
        printf("No valid input provided.\n");
        *ptrMin = 0;
        *ptrMax = 0;
        return;
    }

    // Initialize both minimum and maximum to the first valid input
    a = num;
    b = num;

    // Loop to process subsequent inputs
    while (1) {
        printf("Input an integer: ");
        scanf("%d", &num);

        if (num == 0) // Stop when sentinel value is entered
            break;

        if (num < a)  // Update minimum
            a = num;
        if (num > b)  // Update maximum
            b = num;
    }

    // Assign the final minimum and maximum values
    *ptrMin = a;
    *ptrMax = b;
}
*/
	/* NOTE: This problem should be solved using a single loop only. */

}


int 
main()
{
	int minimum;
	int maximum;

   	getMinMax(&minimum, &maximum);

	printf("Minimum value is %d\n", minimum);
	printf("Maximum value is %d\n", maximum);

   	return 0;
}


