#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  map<string, bool> w;
  string ans = "Yes";
  string s, ps;
  cin >> s;
  ps = s;
  w[s] = true;
  for (int i = 1; i < n; ++i) {
    cin >> s;
    if (ps[ps.size() - 1] != s[0]) {
      ans = "No";
      break;
    }
    if (w.count(s)) {
      ans = "No";
      break;
    } else {
      w[s] = true;
    }
    ps = s;
  }

  cout << ans << '\n';

  return 0;
}
