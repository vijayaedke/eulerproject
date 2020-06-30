/*
Largest palindrome product
  Show HTML problem content  
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdio.h>

int checkPalindrome(long num){
    // printf("\n%d", num);
    long sum=0, num1=num;
    while(num>0){
        int n = num%10;
        sum = (sum *10) + n;
        num/=10;
    }//num
    // printf("sum = %d %d\n", sum,num);
    if(sum==num1)
        return 1;
    return 0;
}//checkPalindrome

int main() {
	//code
	int num1=999, num2=999;
	long max=0;
	for(int i=num1;i>=100;i--){
	    for(int j=num2;j>=100;j--){
	        if(checkPalindrome(i*j)){
	            long mul = i*j;
	            if(max<mul){
	                max = mul;
	            }
	           // return 0;
	        }
	    }//for
	}//for
    printf("found = %ld", max);

	
	return 0;
}


/*
output:

found = 906609
*/
