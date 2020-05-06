#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;
  int n = s.size() - 1;

  int64_t ans = 0;
  for (int i = 0; i < (1 << n); ++i) {
    int64_t tmp = (s[0] - '0');
    cerr << s[0];
    int64_t sum = 0;
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        sum += tmp;
        tmp = (s[j + 1] - '0');
        cerr << "+"s;
      } else {
        tmp *= 10;
        tmp += (s[j + 1] - '0');
      }
      cerr << s[j + 1];
    }
    sum += tmp;
    ans += sum;
    cerr << " " << sum << '\n';
  }

  cout << ans << '\n';

  return 0;
}
