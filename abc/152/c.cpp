#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> p(n);

  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }

  int cnt = 0, cmin = 1e9;
  for (int i = 0; i < n; ++i) {
    cmin = min(cmin, p[i]);
    if (cmin == p[i]) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
