#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;
  int b[3];
  b[0] = a / 100;
  b[1] = a % 100 / 10;
  b[2] = a % 100 % 10;

  for (int i = 0; i < 3; i++) {
    if (b[i] == 7) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}
