#include<stdio.h>
#include<stdlib.h>

int checkPalindrome(long long prod){

    long long num,n1=0,mul=10,temp=prod;

    while(prod>0){
        num=prod%mul;
        n1=(n1*mul)+num;
        prod=prod/mul;
    }//while

    if(temp==n1)
        return 1;

    return 0;
}//checkPalindrome

int main() {
    long long prod=1,max=0;
    int i,j;

        for(i=100;i<=999;i++){
                for(j=100;j<=999;j++){
                        prod=i*j;
                        if(checkPalindrome(prod) && prod>max)
                              max=prod;
                }//for j
        }//for i

        printf("Max = %ld",max);
    return 0;

}


/*
output :
Max = 906609

*/
