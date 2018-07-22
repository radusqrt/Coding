#include <stdio.h>

int sum_recursive(int n)
{

    //aici ex c din lab 4 forza
    int var = n % 10;
    int temp = 0;

    if (n == 0) {
        return 0;
    }

   if(var % 2 == 1){
        return temp ;
    }

    temp = temp + var;

    return temp + sum_recursive(n / 10);


    // ex b din lab 4 aiki
  /*
    int var = n % 10;
    int temp = 0;

    if (n == 0) {
        return 0;
    }

    if(var % 2 == 1){

        temp = temp + var ;

    }

    return temp + sum_recursive(n / 10);

    */

    //return (n >= 1) ? n % 10 + sum_recursive(n / 10) : 0; asa am modificat functia pentru punctul a
}


int ex1lab4(void)
{
    int nr;

    scanf("%d", &nr);

    printf("%d\n", sum_recursive(nr));

    return 0;
}