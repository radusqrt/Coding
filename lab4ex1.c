//Analizaţi programul de mai jos. Modificaţi sursa astfel încât programul să
// funcţioneze corect, fara a utiliza transmitere prin adresă de memorie.
#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int lab4ex1() {
    int s;
    s = sum(2, 3);
    printf("Suma este %d\n", s);

    return 0;
}

