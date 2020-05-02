#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t X;
  cin >> X;

  int64_t y = 100;
  for (int i = 1; 1; i++) {
    y *= 1.01;
    if (y >= X) {
      cout << i << '\n';
      return 0;
    }
  }

  return 0;
}
