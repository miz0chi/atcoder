#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int d, t, s;
  cin >> d >> t >> s;

  string ans = "Yes";
  if (d > t * s) {
    ans = "No";
  }

  cout << ans << '\n';

  return 0;
}
