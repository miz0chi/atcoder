#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> ans(n);
  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    ans[a - 1] = i;
  }

  for (int i = 0; i < n; ++i) {
    cout << ans[i] << " ";
  }
  cout << '\n';

  return 0;
}
