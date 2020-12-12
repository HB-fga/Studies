#include <stdio.h>
// WA

int move(int p, int dir) {

    switch (dir)
    {
        case 1:
            p++;
            break;
        case 2:
            p--;
            break;
        case 3:
            p++;
            break;
        case 4:
            p--;
            break;
    }

    return p;
}

int main() {

    int m, n, p, a, b;
    int pax, pay, pbx, pby;

    int sax = -1, say = -1, sbx = -1, sby = -1, sp = -1;

    scanf("%d %d %d", &n, &m, &p);

    pax = 1;
    pay = 1;
    pbx = m;
    pby = n;

    for(int i = 0;i < p;i++)
    {
        scanf("%d %d", &a, &b);

        if(a == 1 || a == 2)
        {
            pax = move(pax, a);
        }
        else
            pay = move(pay, a);

        if(b == 1 || b == 2)
        {
            pbx = move(pbx, b);
        }
        else
            pby = move(pby, b);

        // printf("\n");
        // for(int j = m;j > 0;j--)
        // {
        //     for(int k = 1;k <= n;k++)
        //     {
        //         if(j == pax && k == pay)
        //             printf("A");
        //         else if(j == pbx && k == pby)
        //             printf("B");
        //         else
        //             printf(".");
        //     }
        //     printf("\n");
        // }
        // printf("\n");

        if((pax == pbx) && (pay == pby))
        {
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", pay, pax, i+1);
            break;
        }

        if(sp == -1)
        {
            if(pax == 0 || pax == m+1 || pay == 0 || pay == n+1)
            {
                sax = pax;
                say = pay;
                sp = i+1;
            }
            else if(pbx == 0 || pbx == m+1 || pby == 0 || pby == n+1)
            {
                sbx = pbx;
                sby = pby;
                sp = i+1;
            }
        }

        if(i == p-1)
        {
            if(sax != -1)
                printf("PA saiu na posicao (%d,%d) no passo %d\n", say, sax, sp);
            else if(sbx != -1)
                printf("PB saiu na posicao (%d,%d) no passo %d\n", sby, sbx, sp);
            else
                printf("Nao se encontraram\n");
        }
            
    }

    return 0;
}