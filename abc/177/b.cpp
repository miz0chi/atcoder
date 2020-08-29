#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s >> t;

  int ss = s.size();
  int ts = t.size();

  int ans = 1000;
  for (int i = 0; i < ss - ts + 1; ++i) {
    int cnt = ts;
    for (int j = 0; j < ts; ++j) {
      if (s[i + j] == t[j]) {
        --cnt;
      }
    }
    ans = min(ans, cnt);
  }

  cout << ans << '\n';

  return 0;
}
