#include <iostream>
using namespace std;
int A, B, C;

int main() {
  
  cin >> A >> B >> C;

  int min = 60 * A + B;
  min += C;

  int hour = (min / 60) % 24;
  int minute = min % 60;

  cout << hour << " " << minute;
}