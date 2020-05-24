#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, k;
  cin >> n >> k;

  vector<int> x(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans += min(x[i], abs(k - x[i]));
  }

  cout << ans * 2 << '\n';

  return 0;
}
