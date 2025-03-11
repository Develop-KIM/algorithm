#include <iostream>
using namespace std;
int N;
string star;

int main() {

  cin >> N;

  for (int i = 1; i <= N; i++) {
    star += "*";
    cout << star << '\n';
  }
}