#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q, h, s, d;
  int64_t n;
  cin >> q >> h >> s >> d >> n;

  q *= 4;
  h *= 2;
  s = min(min(q, h), s);
  int64_t ans = min(n * s, (n / 2) * d + (n - (n / 2) * 2) * s);
  // cerr << n * one << '\n';
  // cerr << (n / 2) * d + (n - (n / 2) * 2) * one << '\n';

  cout << ans << '\n';

  return 0;
}