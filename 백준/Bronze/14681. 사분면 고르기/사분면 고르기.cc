#include <iostream>
using namespace std;
int x, y;

int main() {

  cin >> x >> y;

  if (y > 0) {
    if (x > 0) cout << 1;
    else cout << 2;
  } else {
    if (x > 0) cout << 4;
    else cout << 3;
  }
}