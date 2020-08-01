#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  int64_t k;
  cin >> s >> k;
  int ss = s.size();

  char ans = '1';
  for (int i = 0; i < ss; ++i) {
    if (i == k - 1) {
      break;
    }
    if (s[i] != '1') {
      ans = s[i];
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}
