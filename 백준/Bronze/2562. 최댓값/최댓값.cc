#include <iostream>
using namespace std;
int num, maxValueIndex, maxValue = 0;

int main() {

  for (int i = 1; i <= 9; i++) {
    cin >> num;
    
    if (num > maxValue) {
      maxValue = num;
      maxValueIndex = i;
    }
  }
  
  cout << maxValue << '\n';
  cout << maxValueIndex << '\n';
}