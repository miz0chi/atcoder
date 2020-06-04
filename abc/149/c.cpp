#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int x;
  cin >> x;

  while (1) {
    int rx = sqrt(x);
    bool ok = true;
    for (int i = 2; i < rx; ++i) {
      if (x % i == 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << x << '\n';
      break;
    }
    ++x;
  }

  return 0;
}
