#include <iostream>
using namespace std;
int X, N, a, b;

int main() {

  cin >> X >> N;

  for (int i = 1; i <= N; i++) {
    cin >> a >> b;
    X -= a * b;
  }

  if (X == 0) cout << "Yes";
  else cout << "No";
}