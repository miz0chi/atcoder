#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string a, b;
  cin >> a >> b;

  string ans;
  if (a.size() > b.size()) {
    ans = "GREATER";
  } else if (a.size() < b.size()) {
    ans = "LESS";
  } else {
    ans = "EQUAL";
    for (unsigned int i = 0; i < a.size(); ++i) {
      if (a[i] > b[i]) {
        ans = "GREATER";
        break;
      } else if (a[i] < b[i]) {
        ans = "LESS";
        break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
