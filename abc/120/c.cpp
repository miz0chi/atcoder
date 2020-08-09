#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  int cnt0 = 0, cnt1 = 0;
  for (char c : s) {
    if (c == '0') {
      ++cnt0;
    } else {
      ++cnt1;
    }
  }

  cout << min(cnt0, cnt1) * 2 << '\n';

  return 0;
}
