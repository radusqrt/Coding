//Scrieți o funcție recursivă care să returneze numărul de cifre al unui numar întreg.
#include <stdio.h>

int number_of_digits(int nr){

    int k = 0;

    if (nr == 0){
        return k;
    }

    int s = nr % 10;
    k++;

    return k + number_of_digits(nr / 10);

}

int lab4ex3(){

    printf("%d", number_of_digits(34));

    return 0;
}
