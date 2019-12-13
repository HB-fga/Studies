#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main() {

    int x=1;
    unsigned int xu=1;
    long long int y=1;
    unsigned long long int yu=1;
    int ar[1000];
    int mat[1000][1000];
    char a='a';
    char as[1000];
    string st="QWERTYUIOPASDFGHJKLZXCVBNMQWERTYUIO"; //25 chars
    
    cout<<"int "<<sizeof(x)<<endl;
    cout<<"u int "<<sizeof(xu)<<endl;
    cout<<"ll int "<<sizeof(y)<<endl;
    cout<<"ull int "<<sizeof(yu)<<endl;
    cout<<"array "<<sizeof(ar)<<endl;
    cout<<"matriz "<<sizeof(mat)<<endl;
    cout<<"char "<<sizeof(a)<<endl;
    cout<<"char array "<<sizeof(as)<<endl;
    cout<<"string "<<sizeof(st)<<endl;

    cout<<endl<<"string = "<<st<<endl;
    cout<<endl<<"string size = "<<st.size()<<endl;
    
    return 0;
}