#include <bits/stdc++.h>
using namespace std;
int N, K;
string item, category;
map<string, int> mp;

int main(){
    cin >> N;
    while(N--){
        cin >> K;
        
        while(K--){
            cin>> item >> category;
            mp[category]++;
        }
        
        int cnt=1;
        for(auto it=mp.begin(); it!=mp.end(); ++it) cnt *= (it->second + 1);
        cnt -= 1;
        
        cout << cnt << '\n';
        mp.clear();
    }
}