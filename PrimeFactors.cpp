#include<bits/stdc++.h>
#include<iostream> 
using namespace std;
int main()
{
      int n,temp;
      cout<<"Enter a number:";
      cin>>n;
      temp=n;
      cout<<"The prime factors of "<<n<<": ";
      for(int i=2;i*i<=n;i++)
      {
           while(n%i==0)
          {
                cout<<i<<" ";
                n=n/i;
          }
      }
      return 0;
}
