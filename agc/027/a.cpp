#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    x -= a[i];
    if (x < 0) {
      break;
    }
    if (i == n - 1) {
      if (x != 0) {
        break;
      }
    }
    ++cnt;
  }

  cout << cnt << '\n';

  return 0;
}
