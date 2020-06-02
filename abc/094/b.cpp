#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m, x;
  cin >> n >> m >> x;
  ++n;

  vector<int> a(m);
  for (int i = 0; i < m; ++i) {
    cin >> a[i];
  }

  int bef = 0, aft = 0;
  for (int i = 0; i < m; ++i) {
    if (a[i] < x) {
      ++bef;
    } else {
      ++aft;
    }
  }

  cout << min(bef, aft) << '\n';

  return 0;
}
