#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  n *= 3;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());

  int64_t sum = 0;
  for (int i = 0; i < 2 * n / 3; ++i) {
    if (i % 2 != 0) {
      sum += a[i];
    }
  }

  cout << sum << '\n';

  return 0;
}
