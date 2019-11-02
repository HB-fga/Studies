#include <iostream>
#include <unistd.h>
#include <stdio.h>

using namespace std;

int main()
{

    char x=0;

    
    while(1)
    {
    sleep(1);
    system("stty raw");
    x=getchar();
    system("stty cooked");
    fflush(stdin)
    system("tput clear");
    if(x=='a'||x=='w'||x=='s'||x=='d')
        cout<<x<<"foi digitado\n";
    else if(x=='q')
    {
        return 0;
    }
    else
        cout<<"nada digitado\n";
        while(x=='p')
        {
            system("stty raw");
            x=getchar();
            system("stty cooked");
        }
    }

    return 0;
}