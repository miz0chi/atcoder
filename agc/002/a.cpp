#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  cin >> a >> b;

  string ans;
  if (a == 0 || b == 0) {
    ans = "Zero";
  } else if (a < 0 && 0 < b) {
    ans = "Zero";
  } else if (0 < a) {
    ans = "Positive";
  } else {
    if ((b - a) % 2 == 0) {
      ans = "Negative";
    } else {
      ans = "Positive";
    }
  }
  cout << ans << '\n';

  return 0;
}
