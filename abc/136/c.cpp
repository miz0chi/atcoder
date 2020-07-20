#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int g;
  cin >> g;
  --g;
  string ans = "Yes";
  for (int i = 1; i < n; ++i) {
    int h;
    cin >> h;
    // cerr << g << '\n';
    // cerr << h << '\n';
    if (h > g) {
      --h;
    }
    if (h < g) {
      ans = "No";
      break;
    }
    g = h;
  }

  cout << ans << '\n';

  return 0;
}
