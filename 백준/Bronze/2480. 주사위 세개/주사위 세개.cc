#include <iostream>
#include <algorithm>
using namespace std;
int A, B, C, MAX;

int main() {

  cin >> A >> B >> C;

  if (A != B && A != C && B != C) {
    MAX = max(A, max(B, C));
    cout << MAX * 100;
  } else if (A == B && A == C) {
    cout << 10000 + A * 1000;
  } else if (A == B || A == C) {
    cout << 1000 + A * 100;
  } else {
    cout << 1000 + B * 100;
  }
}