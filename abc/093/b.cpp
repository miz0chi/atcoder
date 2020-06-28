#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  int a, b, k;
  cin >> a >> b >> k;
  --k;

  bool ok = true;
  if (a + k >= b - k) {
    ok = false;
  }
  for (int i = a; i <= b; ++i) {
    if (ok && i > a + k && i < b - k) {
      i = b - k - 1;
      continue;
    }
    cout << i << '\n';
  }

  return 0;
}
