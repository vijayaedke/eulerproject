/*
Sum square difference
  Show HTML problem content  
Problem 6
The sum of the squares of the first ten natural numbers is,

12+22+...+102=385
The square of the sum of the first ten natural numbers is,

(1+2+...+10)2=552=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main() {
	long sum_of_sq=0;
	for(int i=1;i<=100;i++){
	    sum_of_sq += pow(i, 2);
	}
	
	long sq_of_sum=0, sum=0;
	for(int i=1;i<=100;i++){
	    sum += i;
	}
	sq_of_sum = pow(sum, 2);
	
	printf(" %ld - %ld = %ld", sq_of_sum, sum_of_sq, (sq_of_sum - sum_of_sq) );
	
	return 0;
}

/*
output:
 25502500 - 338350 = 25164150
*/
