//Annoying Chemistry:-https://www.hackerearth.com/challenges/competitive/march-circuits-20/algorithm/annoying-chemistry-f5fb9556/

#include<bits/stdc++.h>
using namespace std;
long gcd(long a,long b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
long lcm(long a,long b)
{
  return ((a*b)/gcd(a,b));
}
int main()
{
    long x,y,p,q,c1,c2,b1,b2,b3,c,d,e;
    cin>>x>>y>>p>>q;
    c1=lcm(x,p);
    c2=lcm(y,q);
        c=c1/p;
        d=c2/q;
        if(((c*q)%y)==0)
        {
            b1=(c*p)/x;
            b2=(c*q)/y;
            b3=c;
        }
        else if(((d*p)%x)==0)
        {
            b1=(d*p)/x;
            b2=(d*q)/y;
            b3=d;
        }
        else
        {
            e=lcm(c,d);
            b1=(e*p)/x;
            b2=(e*q)/y;
            b3=e;
        }
    cout<<b1<<" "<<b2<<" "<<b3<<'\n';
    return 0;
}
