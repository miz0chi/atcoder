#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int ss = s.size();
  int ans = ss;

  for (int i = 1; i < ss; ++i) {
    if (s[i] == s[i - 1]) {
      --ans;
      i += 2;
    }
  }

  cout << ans << '\n';

  return 0;
}
