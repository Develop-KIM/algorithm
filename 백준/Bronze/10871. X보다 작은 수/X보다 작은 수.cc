#include <iostream>
#include <vector>
using namespace std;

int A, X, arr[10004];
vector<int> ret;

int main() {

  cin >> A >> X;

  for (int i = 0; i < A; i++) cin >> arr[i];

  for (int i = 0; i < A; i++) if (arr[i] < X) ret.push_back(arr[i]);

  for (int num : ret) cout << num << " ";

}