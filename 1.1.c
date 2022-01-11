
#include <bits/stdc++.h>

#define ll long long

using namespace std;
bool comparePowerUnit(const pair<pair<ll,ll>,double> &m1, const pair<pair<ll,ll>,double> &m2)
{
    return m2.second <= m1.second;
}


int main(){
    ll n,m;

    cin >> n;

    if(n<10){
        cout << 2*n ;
    }
    else if(n<100){
       int x=n/10;
       cout << (x*11 + (n-(x*10))*11);
    }else if(n<1000){
        int x = n/100;
        int m = n;
        int y = n%100;
        y%=10;
        m%=100;

        m = m/10;

        if(m==0){
             cout << (x*101+(n-(x*100))*101);
        }else{
             cout << (x*101+m*20+y*101);
        }


    }else{
        cout << 1001;
    }
}
