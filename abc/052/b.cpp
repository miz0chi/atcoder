#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  int x = 0, ans = x;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'I') {
      ++x;
    }
    if (s[i] == 'D') {
      --x;
    }
    ans = max(ans, x);
  }

  cout << ans << '\n';

  return 0;
}
