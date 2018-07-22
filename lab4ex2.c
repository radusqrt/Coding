// Scrieți o funcție recursivă care să ridice un număr x la o putere dată y pozitivă.
#include <stdio.h>

int power(int x, int y){

    int val = 1;

    if (y == 0){
        return val;
    }

    val = val * x;

    y--;
    return x * power(val, y);
}


int lab4ex2(){

    printf("%d", power(7,3));

    return 0;
}