#include <iostream>
using namespace std;
int H, M;

int main() {

  cin >> H >> M;

  if (M - 45 < 0) {
    H--;
    M += 15;
  } else {
    M -= 45;
  }

  if (H < 0) {
    H = 23;
  }

  cout << H << ' ' << M;
}