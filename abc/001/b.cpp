#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int m;
  cin >> m;

  if (m < 1000) {
    cout << 0;
    if (m < 100) {
      cout << 0 << '\n';
    } else {
      cout << m / 100 << '\n';
    }
  } else if (1000 <= m && m <= 5000) {
    cout << m / 100 << '\n';
  } else if (6000 <= m && m <= 30000) {
    cout << m / 1000 + 50 << '\n';
  } else if (35000 <= m && m <= 70000) {
    cout << ((m / 1000 - 30) / 5 + 80) << '\n';
  } else if (70000 < m) {
    cout << 89 << '\n';
  }

  return 0;
}
