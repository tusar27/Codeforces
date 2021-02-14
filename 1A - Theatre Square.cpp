#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int m,n,a,s;
    cin>>m>>n>>a;

    s=m/a;
    if(m%a!=0) s++;

    if(n>a)
    {
        if(n%a!=0)
            s=((n/a)+1) * s;
        else
            s=(n/a)*s;
    }
    cout<<s<<endl;
    return 0;
}

#include<bits\\stdc++.h>
using namespace std;
int main2()

{
   long long int x,y,a;
    cin>>x>>y>>a;
    x=((x+a-1)/a)*((y+a-1)/a);
    cout<<x<<endl;
}
