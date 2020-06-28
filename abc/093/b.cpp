#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  int a, b, k;
  cin >> a >> b >> k;

  for (int i = a; i <= b; ++i) {
    if (i < a + k || i > b - k) {
      cout << i << '\n';
    }
  }

  return 0;
}
