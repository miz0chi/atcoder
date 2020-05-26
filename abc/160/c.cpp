#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int k, n;
  cin >> k >> n;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int max = k - a[n - 1] + a[0];
  for (int i = 1; i < n; ++i) {
    int dis;
    dis = a[i] - a[i - 1];
    if (dis > max) {
      max = dis;
    }
  }

  cout << k - max << '\n';

  return 0;
}
