#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;
  int si = s.size();

  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < si; ++i) {
    if (i % 2 == 0) {
      if (s[i] == '0') {
        ++cnt1;
      } else {
        ++cnt2;
      }
    } else {
      if (s[i] == '1') {
        ++cnt1;
      } else {
        ++cnt2;
      }
    }
  }

  cout << min(cnt1, cnt2) << '\n';

  return 0;
}
