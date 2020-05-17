#include <bits/stdc++.h>

using namespace std;

const int inf = 1000000000;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> x(n);

  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }
  sort(x.begin(), x.end());

  int ans = inf;
  for (int i = x[0]; i <= x[n - 1]; ++i) {
    int sum = 0;
    for (int j = 0; j < n; ++j) {
      sum += pow(x[j] - i, 2);
    }
    ans = min(ans, sum);
  }

  cout << ans << '\n';

  return 0;
}
