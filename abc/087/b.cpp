#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int sum = 0;
  for (int i = 0; i < A + 1; i++) {
    for (int j = 0; j < B + 1; j++) {
      for (int k = 0; k < C + 1; k++) {
        if (X == (i * 500 + j * 100 + k * 50)) {
          sum++;
        }
      }
    }
  }

  cout << sum << endl;
}
