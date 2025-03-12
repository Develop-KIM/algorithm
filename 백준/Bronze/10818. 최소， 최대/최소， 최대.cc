#include <iostream>
using namespace std;

int N, arr[1000004], minValue, maxValue;

int main() {

  cin >> N;

  for (int i = 0; i < N; i++) cin >> arr[i];

  minValue = arr[0];
  maxValue = arr[0];

  for (int i = 0; i < N; i++) {
    if (arr[i] < minValue) minValue = arr[i];
    if (arr[i] > maxValue) maxValue = arr[i];
  }

  cout << minValue << " " << maxValue;
}