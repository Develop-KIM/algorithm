#include <iostream>
using namespace std;
int N;

int main() {

  cin >> N;

  for (int i = 1; i <= N; i++) {

    for (int j = 0; j < N - i; j++) {
      cout << ' ';
    }

    for (int k = 0; k < i; k++) {
      cout << '*';
    }
    cout << '\n';
  }
}
