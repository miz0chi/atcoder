#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;
  int n = s.size() - 2;

  int ans = 10000;
  for (int i = 0; i < n; ++i) {
    int a = abs((s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0') -
                753);
    ans = min(ans, a);
  }

  cout << ans << '\n';

  return 0;
}
