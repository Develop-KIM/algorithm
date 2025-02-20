#include <bits/stdc++.h>
using namespace std;
int N, K, ret, sum;

int main(){
    cin >> N >> K;
    vector<int> arr(N);
    
    for(int i=0; i<N; i++) cin >> arr[i];
    for(int i=0; i<K; i++) sum += arr[i];
    ret = sum;
    
    for(int i=K; i<N; i++){
        sum += arr[i] - arr[i - K];
        ret = max(ret, sum);
    }
    cout << ret << '\n';
    return 0;
}