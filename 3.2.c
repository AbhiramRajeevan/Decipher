
#include <bits/stdc++.h>

using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;

    cin >> s;

    int len = s.length();

    map<char, string> hex;

    hex['a'] = "61";

    hex['b'] = "62";

    hex['c'] = "63";

    hex['d'] = "64";

    hex['e'] = "65";

    hex['f'] = "66";

    hex['g'] = "67";

    hex['h'] = "68";

    hex['i'] = "69";

    hex['j'] = "6a";

    hex['k'] = "6b";

    hex['l'] = "6c";

    hex['m'] = "6d";

    hex['n'] = "6e";

    hex['o'] = "6f";

    hex['p'] = "70";

    hex['q'] = "71";

    hex['r'] = "72";

    hex['s'] = "73";

    hex['t'] = "74";

    hex['u'] = "75";

    hex['v'] = "76";

    hex['w'] = "77";

    hex['x'] = "78";

    hex['y'] = "79";

    hex['z'] = "7a";
    int x;

    if(len%2==0){
        for(int i=0;i<len;i+=2){
            cout << hex[s[i]];
        }
    }
    else{
        for(int i=0;i<len-1;i+=2){
            // x = 61+(s[i]-'a');
            //
            //     x++;
            // cout << x;
            if(i==(len-3)){
                if((s[len-3]==s[len-2])&&(s[len-3]==s[len-1]))
                    cout << stoi(hex[s[i]]);
                else if(s[len-2]==s[len-1])
                    cout << hex[s[len-1]];
                else{
                    if(s[i]=='i')
                        cout << "6a";
                    else if(s[i]=='j')
                        cout << "6b";
                    else if(s[i]=='k')
                        cout << "6c";
                    else if(s[i]=='l')
                        cout << "6d";
                    else if(s[i]=='m')
                        cout << "6e";
                    else if(s[i]=='n')
                        cout << "6f";
                    else if(s[i]=='o')
                        cout << "70";
                    else if(s[i]=='y')
                        cout << "7a";
                    else if(s[i]=='z')
                        cout << "7b";
                    else {
                        int y = stoi(hex[s[i]])+1;
                        cout << y;
                    }
                }
            }else{
                cout << hex[s[i]];
            }
        }
    }
    return 0;
}
