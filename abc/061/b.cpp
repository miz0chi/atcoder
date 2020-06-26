#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m;
  cin >> n >> m;

  vector<int> r(n, 0);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    ++r[a - 1];
    ++r[b - 1];
  }

  for (int i = 0; i < n; ++i) {
    cout << r[i] << '\n';
  }

  return 0;
}
