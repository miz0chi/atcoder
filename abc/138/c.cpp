#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  double ans = (v[0] + v[1]) / 2.0;
  for (int i = 2; i < n; ++i) {
    ans = (ans + v[i]) / 2.0;
  }

  cout << ans << '\n';

  return 0;
}
