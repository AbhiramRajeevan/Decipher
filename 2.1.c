#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;

    cin >> s;

    int sum = (s[0]-'a');

    for(int i=1;i<s.length();i++){
        if(i%2==0){
            sum+=(s[i]-'a');
        }
        else{
            sum-=(s[i]-'a');
        }
    }
    cout << sum;
    return 0;
}
