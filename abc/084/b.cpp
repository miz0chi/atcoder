#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  string s;
  cin >> a >> b >> s;

  string ans = "Yes";

  int si = s.size();
  if (si != a + b + 1 || s[a] != '-') {
    ans = "No";
  }
  for (int i = 0; i < si; ++i) {
    if (i != a) {
      if ('0' > s[i] || s[i] > '9') {
        ans = "No";
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
