#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int d;
  string n;
  cin >> d >> n;

  string ans = n;
  for (int i = 0; i < d; ++i) {
    ans += "00";
  }

  cout << ans << '\n';

  return 0;
}
