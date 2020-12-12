// #include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double ans;
    
    ans = tB - tA;
    if(ans < 0)
        ans *= (-1);

    ans /= 3600;

    ans = distancia / ans;

    return ans;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    int x;

    if( calculaVelocidadeMedia( tA, tB, distancia ) > velocidadeMaxima )
        x = 1;
    else
        x = 0;

    return x;
}

// int main() 
// {

//     int a, b;
//     double c, d;

//     scanf( "%d %d %lf %lf", &a, &b, &c, &d );

//     printf( "%lf\n", calculaVelocidadeMedia( a, b, c ) );
//     printf( "%d\n", levouMulta( a, b, c, d ) );

//     return 0;
// }