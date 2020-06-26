#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  unordered_set<string> s;
  string ans = "Yes";
  string w;
  cin >> w;
  s.insert(w);
  char c = w.back();
  for (int i = 1; i < n; ++i) {
    cin >> w;
    if (c != w[0] || s.count(w)) {
      ans = "No";
      break;
    }
    s.insert(w);
    c = w.back();
  }

  cout << ans << '\n';

  return 0;
}
