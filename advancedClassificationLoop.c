//
// Created by malak on 11/15/2022.
//
#include "NumClass.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define True 1
#define False 0

int numLength(int num) {
    int result = 1;
    while (num >= 10) {
        result++;
        num = num / 10;
    }
    return result;
}

int isArmstrong(int num) {
   return True;
}

int isPalindrome(int num) {
    int numLen = numLength(num);        //Calculate the length of the number
    int smalldig, bigdig;
    if (numLen == 1) {      //Single-digit number is Palindrome
        return True;
    }
    while (num > 0) {
        smalldig = num % 10;        //Catching the last digit
        bigdig = num / pow(10, numLen - 1);     //Catching the first digit
        if (smalldig != bigdig) {       //Checking the first digit is not equal to the last digit then return false
            return False;
        }
        num -= smalldig * pow(10, numLen - 1);      //Removing the first digit
        num = num / 10;         //Removing the last digit
        numLen = numLen - 2;    //Updating number's length (removing the first and the last digit)
    }
    return True;
}

int main() {

    printf("%d\n", isPalindrome(101020101));

    return 1;
}