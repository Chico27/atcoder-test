#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool used[2005];

int main()
{
    int n;
    cin >> n;
    while(1){
        for(int i = 1; i <= 2*n+1; i++){
            if(!used[i]){
                cout << i << endl;
                used[i] = true;
                break;
            }
        }
        int res;
        cin >> res;
        if(res == 0) return 0;
        used[res] = true;
    }
    return 0;
}
