#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  int n, m;
  cin >> n;
  vector<int> t(n);
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> t[i];
    sum += t[i];
  }
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int p, x;
    cin >> p >> x;
    cout << sum - (t[p - 1] - x) << '\n';
  }

  return 0;
}
