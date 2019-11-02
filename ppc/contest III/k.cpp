#include <bits/stdc++.h>

using namespace std;

int dif(int x, int y)
{
  int d;

  if(x-y<0)
  {
    d=(x-y)*-1;
  }
  else
  {
    d=x-y;
  }

  return d;
}

int main() {
  
  int n;
  int fs, ls, s;
  int ans=3000, c1=1, c2=2, r1, r2;

  cin>>n;
  cin>>ls;
  fs=ls;

  for(int i=1, c1=1, c2=2;i<n;i++, c1++, c2++)
  {
    cin>>s;

    if(dif(s, ls)<ans)
    {
      ans=dif(s, ls);
      r1=c1;
      r2=c2;
    }

    ls=s;

    if(i==(n-1))
    {
      if(dif(s, fs)<ans)
      {
        ans=dif(s, ls);
        r1=c2;
        r2=1;
      }
    }
  }

  cout<<r1<<" "<<r2<<endl;

  return 0;
}