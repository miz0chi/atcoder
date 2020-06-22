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
    vector<int> sv = a;
    sv.erase(sv.begin() + i);
    sort(sv.begin(), sv.end(), greater<int>());
    cout << sv[0] << '\n';
  }

  return 0;
}
