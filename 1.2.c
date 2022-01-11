
#include <bits/stdc++.h>

#define ll long long

using namespace std;
bool comparePowerUnit(const pair<pair<ll,ll>,double> &m1, const pair<pair<ll,ll>,double> &m2)
{
    return m2.second <= m1.second;
}


int main(){
    ll n,m,sum=1;

    cin >> n;
    if(n==0)
        cout << 0;
    else{
    while(n>0)
    {
        m=n%10;
        sum*=m;
        n=n/10;
    }

    cout << sum;
    }


}
