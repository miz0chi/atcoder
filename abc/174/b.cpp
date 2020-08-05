#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int64_t d;
  cin >> n >> d;

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int64_t x, y;
    cin >> x >> y;
    int64_t dist = x * x + y * y;
    if (dist <= d * d) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
