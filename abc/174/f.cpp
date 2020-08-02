#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }
  for (int i = 0; i < q; ++i) {
    int l, r;
    set<int> s;
    cin >> l >> r;
    for (int j = l; j <= r; ++j) {
      s.insert(c[j - 1]);
    }
    cout << s.size() << '\n';
  }

  return 0;
}
