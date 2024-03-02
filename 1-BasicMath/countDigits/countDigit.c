#include <stdio.h>
#include <string.h>
#include <math.h>

// Approach 1

int countDigit(int num){
    int count = 0;
    while(num!=0){
        num = num / 10;
        count++;
    }
    return count;
}

// Complexity analysis: O(n)

// Approach 2

// convert the num to string and then print the length of the string

int countDigit2(int num){
    char str[20];

    sprintf(str, "%d",num );

    int length = strlen(str);

    return length;
}

// Complexity analysis: O(1)

// Approach 3

// use log base 10 and return its upper bound

int countDigit3(int num){
    int digit = floor(log10(num)+1);
    return digit;
}

// n = 12345
// log10(12345) = 4.091
// Integral part of 4.091 is 4 and 4 + 1 =  5 
// which is also the number of digits in 12345       

// complexity analysis: O(1)


int main(){
    int num = 12345;

    printf("Calling approach 1 \n");
    int numDigit = countDigit(num);
    printf("Number of digits in %d: %d\n",num,numDigit);

    printf("Calling approach 2 \n");
    int numDigit2 = countDigit2(num);
    printf("Number of digits in %d: %d\n",num,numDigit2);

    printf("Calling approach 3 \n");
    int numDigit3 = countDigit3(num);
    printf("Number of digits in %d: %d\n",num,numDigit3);

    return 0;
}