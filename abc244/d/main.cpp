#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool used[2005];

bool sign(string S){
    return S == "R G B" || S == "G B R" || S == "B R G";
}
int main(){
    string S, T;
    getline(cin, S);
    getline(cin, T);
    if(sign(S) == sign(T)) cout << "Yes" << endl;
    else cout << "No" << endl;
}