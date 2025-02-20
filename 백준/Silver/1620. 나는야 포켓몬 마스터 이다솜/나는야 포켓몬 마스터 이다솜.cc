#include <bits/stdc++.h>
using namespace std;
int N, M;
string str, arr[100004];
map<string, int> mp;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    for(int i=1; i<=N; i++){
        cin >> str;
        mp[str] = i;
        arr[i] = str;
    }

    for(int i=1; i<=M; i++){
        cin >> str;

        if(atoi(str.c_str()) == 0) cout << mp[str] << '\n';
        else cout << arr[atoi(str.c_str())] << '\n';
    }
}
