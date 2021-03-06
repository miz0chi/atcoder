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
  vector<int> sa = a;
  sort(sa.begin(), sa.end(), greater<int>());

  for (int i = 0; i < n; ++i) {
    if (a[i] == sa[0]) {
      cout << sa[1] << '\n';
    } else {
      cout << sa[0] << '\n';
    }
  }

  return 0;
}
