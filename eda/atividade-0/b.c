#include <stdio.h>

int main() {

    int c = 0;

    while (scanf("%*d") != EOF)
        c++;

    printf("%d\n", c);

    return 0;
}