#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int a_old;
  cin >> a_old;
  int64_t ans = 0;
  for (int i = 1; i < n; ++i) {
    int a;
    cin >> a;
    if (a < a_old) {
      ans += (a_old - a);
    } else {
      a_old = a;
    }
  }

  cout << ans << '\n';

  return 0;
}
