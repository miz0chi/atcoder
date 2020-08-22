#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;
  int64_t sum = 0;
  for (char c : n) {
    sum += (c - '0');
  }
  string ans = "Yes";
  if (sum % 9 != 0) {
    ans = "No";
  }

  cout << ans << '\n';

  return 0;
}
