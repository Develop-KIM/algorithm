#include <iostream>
using namespace std;
int arr[104], N, v, cnt;

int main() {
  
  cin >> N;
  for (int i = 0; i < N; i++) cin >> arr[i];
  cin >> v;

  for (int i = 0; i < N; i++) {
    if (arr[i] == v) cnt++;
  }

  cout << cnt;
}
