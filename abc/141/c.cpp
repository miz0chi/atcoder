#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, q;
  int64_t k;
  cin >> n >> k >> q;

  vector<int64_t> sc(n, k - q);
  for (int i = 0; i < q; ++i) {
    int64_t a;
    cin >> a;
    ++sc[a - 1];
  }
  for (int i = 0; i < n; ++i) {
    if (sc[i] <= 0) {
      cout << "No" << '\n';
    } else {
      cout << "Yes" << '\n';
    }
  }

  return 0;
}
