#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> p(n);

  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }

  int cnt = 0, num = 10000000;
  for (int i = 0; i < n; ++i) {
    num = min(num, p[i]);
    if (num == p[i]) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
