//
// Created by malak on 11/15/2022.
//

#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1 <= 0 || num2 <= 0){
        printf("The inputs are incorrect. \n");
        return False;
    }
    int maxNum = 0, minNum = 0;
    if(num1>num2){
        maxNum = num1;
        minNum = num2;
    }
    printf("The Armstrong numbers are: ");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isArmstrong(i)==1){
            printf("%d ", i);
        }
    }
    printf("\nThe Palindromes are: ");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPalindrome(i)==1){
            printf("%d ", i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPrime(i)==1){
            printf("%d ", i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for(int i= minNum ; i<=maxNum ; i++){
        if(isStrong(i)==1){
            printf("%d ", i);
        }
    }

    return True;
}
