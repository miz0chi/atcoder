#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    int ma = 0;
    for (int j = 0; j < n; ++j) {
      if (j != i) {
        ma = max(ma, a[j]);
      }
    }
    cout << ma << '\n';
  }

  return 0;
}
