#include <stdio.h>
#include <string.h>

int main () {

    char name[10];

    printf("-------------------\n");
    printf("Write your name: \n");
    printf("-------------------\n");

    scanf("%s", name);
    /*
    expected-warning{{format specifies type 'char *' but the argument has type 'char (*) [5]'}}
    */

    printf("------------------------------------\n");
    printf("Hello %s, nice to meet you\n",name);
    printf("------------------------------------\n");
}
