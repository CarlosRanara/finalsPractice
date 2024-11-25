/* 
*
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*  Submission Date:
*
*/

#include <stdio.h>


/*
*  Implement the function IsPrime().  The function should return 1 
*  if n is a prime number, otherwise it should return 0 
*
*  Consult the following webpage  about prime number.* 
*      http://www.mathsisfun.com/prime-composite-number.html
*
* 
*  EXAMPLES:
*
*  IsPrime(17) returns 1.
*  IsPrime(15) returns 0. 
*  IsPrime(101) returns 1.
*
*/
 int 
IsPrime(int n)
{
  int total, i, j = 1; //assume it is a prime number
  if (n < 2) // we know that 0 & 1 is a prime number but anything divided by them is equal to a remainder of 0
    j = 0; // not prime

  for (i = 2; i < n && j == 1; i++){
    total = n % i; // check from 2 to the number before n

    if (total == 0) // number found have no remainder
      j = 0;

    else 
      j = 1;
  }
  return j;
}


/*
*    DO NOT MODIFY THE main() function.
*
*    SAMPLE TEST CASES:
*
*    Input          :  17            
*    Expected Output:  PRIME   
*
*
*
*


*/
int 
main()
{
    int n;

    scanf("%d", &n);
    
    if (IsPrime(n))
       	printf("%d is a PRIME number.\n", n);
    else 
       	printf("%d is NOT a prime number.\n", n);
	
    return 0;
}


