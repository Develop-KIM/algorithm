#include <iostream>
using namespace std;

int N, M, i, j, k, arr[104];

int main() {

  cin >> N >> M;

  for (int r = 0; r < M; r++) {
    cin >> i >> j >> k;

    for (int c = i; c <= j; c++) arr[c] = k;
  }

  for (int r = 1; r <= N; r++) cout << arr[r] << '\n';
}