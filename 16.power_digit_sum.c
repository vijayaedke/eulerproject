/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int num = 1000;
	int res[1000]={1};
	int k=0;
	int carry =0;
    
    for(int i=1;i<=1000;i++){
        k=0;
        for(int j=1;j<=i;j++){
            int val = (res[k] * 2) + carry;
            res[k] = val % 10;
            carry = val / 10;
            k++;
        }//for j
    }//for i
    
    int sum =0;
    for(int i=0;i<1000;i++){
        sum+=res[i];
    }

    printf("%d", sum);	
	return 0;
}//main

/*output :
1366
*/
