#include <stdio.h>

int main() {

    int num, max;

    scanf("%d", &max);

    while (scanf("%d", &num) != EOF)
        if(num > max)
            max = num;

    printf("%d\n",max);

    return 0;
}