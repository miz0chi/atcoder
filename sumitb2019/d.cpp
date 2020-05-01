#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  for (int i = 0; i < 1000; i++) {
    int c[3] = {i / 100, (i / 10) % 10, i % 10};
    int f = 0;
    for (int j = 0; j < n; j++) {
      if ((s[j] - '0') == c[f]) f++;
      if (f == 3) break;
    }
    if (f == 3) cnt++;
  }
  cout << cnt << '\n';

  return 0;
}
