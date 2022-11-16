//
// Created by malak on 11/15/2022.
//

#include "NumClass.h"
#include <stdio.h>

int main() {
    printf("Enter your first number: ");
    int num1;
    scanf("%d", &num1);
    printf("Enter your second number: ");
    int num2;
    scanf("%d", &num2);
    int maxNum = num2;
    int minNum =num1;
    if(num1>num2){
        maxNum = num1;
        minNum = num2;
    }
    printf("The Armstrong numbers are:");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isArmstrong(i)==1){
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPalindrome(i)==1){
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPrime(i)==1){
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isStrong(i)==1){
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
