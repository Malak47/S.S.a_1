//
// Created by malak on 11/15/2022.
//
#include "NumClass.h"
#include <math.h>
#include <stdio.h>

#define True 1
#define False 0

int isPrime(int num) {
    if (num == 1 || num == 2) {
        return True;
    }
    if (num % 2 == 0) {
        return False;
    }
    for (int i = 3; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return False;
        }
    }
    return True;
}

int isStrong(int num) {
    return 1;
}

int main() {
    for (int i = 0; i < 1000; ++i) {
        printf("%d\t", isPrime(i));
    }
    return 1;
}
