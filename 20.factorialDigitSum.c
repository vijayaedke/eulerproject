/*
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.

*/

#include<stdio.h>
#include<stdlib.h>

int findFactorial(){

    int array[1000] ={1};
	int multiplier = 1, k=1, carry =0;
	
	for(int i=2;i<=100;i++){
	    
	    for(int j=0;j<k;j++){
	        int val = (array[j] * i) + carry;
	        array[j] = val % 10;
	        carry = val/10;
	    }//for j
	    while(carry){
	        array[k++] = carry % 10;
	        carry /=10;
	    }
	}//for i
	int sum =0;
	for(int i=k-1;i>=0; i--){
	    sum+=array[i];
	    printf("%d", array[i]);
	}
    return sum;	
}


#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = findFactorial();
	printf("\nsum %d", sum);
	return 0;
}

//output
// 93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
// sum 648
