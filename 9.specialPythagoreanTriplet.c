/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int n=1000;
	for(int i=1;i<=n/3;i++){
	    for(int j=i+1;j<=n/2;j++){
	        int k=n-i-j;
	        if((k*k)==(i*i + j*j)){
	            printf("Product = %d\n", i*j*k);
	            printf("%d %d %d", i, j, (n-i-j));
	            break;
	        }//if
	    }//for j
	}//for i
	
	return 0;
}

/*output

Product = 31875000
200 375 425
*/
