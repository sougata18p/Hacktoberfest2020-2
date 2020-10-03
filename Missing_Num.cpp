#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while( t-- )
  {
   long long int n;
    cin >> n;
    long long int sum1 = n*( n+1 )/2;
    long long int a[n],sum = 0;
    for( int i = 0; i < n-1; i++ )
    {
      cin >> a[i];
      sum += a[i];
    }
    
    cout << sum1 - sum << endl;
  }
}
