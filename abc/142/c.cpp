#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> a(n), ans(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    ans[a[i] - 1] = i + 1;
  }

  for (int i = 0; i < n; ++i) {
    cout << ans[i] << " ";
  }
  cout << '\n';

  return 0;
}
