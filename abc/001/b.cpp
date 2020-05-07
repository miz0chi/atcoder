#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int m;
  cin >> m;
  int k = m / 1000;

  if (m < 1000) {
    cout << 0;
    if (m < 100) {
      cout << 0 << '\n';
    } else {
      cout << m / 100 << '\n';
    }
  } else if (1 <= k && k <= 5) {
    cout << m / 100 << '\n';
  } else if (6 <= k && k <= 30) {
    cout << k + 50 << '\n';
  } else if (35 <= k && k <= 70) {
    cout << ((k - 30) / 5 + 80) << '\n';
  } else if (70 < k) {
    cout << 89 << '\n';
  }

  return 0;
}
