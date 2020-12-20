/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 2000000

int main() {
    
    long long *array = (long long *)malloc(sizeof(long long) * MAX+1);
    
    for(int i=0;i<=MAX;i++){
        array[i] = i;
    }
    long long sum = 0;
    for(int j=2;j<=sqrt(MAX);j++){
        for(int i=2;i<=MAX;i++){
            if(i!=j && array[i]!=0 && array[i]%j==0){
                array[i] = 0;
            }
        }//for i
    }//for j
    
    for(int i=2;i<=MAX;i++){
        // if(array[i]!=0)
            sum+=array[i];  
    }//for i
	printf("Sum = %lld", sum);
	return 0;
}

/*
output :
Sum = 142913828922


*/
