#include <bits/stdc++.h>

using namespace std;

int main() {

    int day=0;
    int pages;
    int read[7];

    cin>>pages;
    cin>>read[0];
    cin>>read[1];
    cin>>read[2];
    cin>>read[3];
    cin>>read[4];
    cin>>read[5];
    cin>>read[6];

    for(;pages>0;day++)
    {
        pages-=read[day];
        if(pages<=0)
        {
            break;
        }
        else if(day==6)
        {
            day=-1;
        }
    }

    cout<<(day+1)<<endl;

    return 0;
}