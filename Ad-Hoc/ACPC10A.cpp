#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  while(a!=0 || b!=0 || c!=0)
  {
    if(c-b==b-a)
      cout<<"AP "<<c+b-a<<endl;  
    else if(b==0)
      cout<<"GP "<<0<<endl;
    else if(c/b==b/a)
      cout<<"GP "<<c*(b/a)<<endl;
      
    cin>>a>>b>>c;
  }
}
