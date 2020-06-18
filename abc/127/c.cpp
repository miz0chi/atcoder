#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m;
  cin >> n >> m;

  vector<int> l(m), r(m);
  for (int i = 0; i < m; ++i) {
    cin >> l[i] >> r[i];
  }

  int a = 1, b = n;
  for (int i = 0; i < m; ++i) {
    a = max(a, l[i]);
    b = min(b, r[i]);
  }

  cout << b - a + 1 << '\n';

  return 0;
}
