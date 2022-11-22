#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPrime (int p){
    
    if(p <= 1) return 0;
    for(int i = 2; i * i <= p; i++){
        if(p % i == 0) return FALSE;  
    }
    return TRUE;
}

int isStrong(int num){
    int temp = num;
    int sum = 0;
    int fact = 1;
    if (num == 0){
        return (FALSE);
    }

    while (temp > 0){
        fact = 1;
        for (int i = 1; i <= (temp % 10); i++){
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    return ((sum == num) ? TRUE : FALSE);
}

