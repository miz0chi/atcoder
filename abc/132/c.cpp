#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n; ++i) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());

  cout << d[n / 2] - d[n / 2 - 1] << '\n';

  return 0;
}
