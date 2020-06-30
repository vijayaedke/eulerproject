/*
Smallest multiple
  Show HTML problem content  
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <stdio.h>

int main() {
	int num =1;
	int i=1;
	while(i<=20){
	    if(num%i!=0){
	      num++;  
	      i--;
	    }
	    else{
	        i++;
	    }//else
	    
	}//for
	printf("%d", num);
	return 0;
}
/*
output:
232792560
*/
