#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    ll n,sum=0;

    cin >> n;

    if(n==0)
        cout << 0;
    else{
    ll m =n;

    ll len =0;

     while(m>0)
    {
       len++;
        m=m/10;
    }

     while(n>0)
    {
        m=n%10;
        sum=sum+pow(m,len);
        n=n/10;
    }
    cout << sum;
    }
    return 0;
}
