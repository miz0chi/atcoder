#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  int sum = 0;
  for (int i = 0; i < n - 2; ++i) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      ++sum;
      i += 2;
    }
  }
  cout << sum << '\n';

  return 0;
}
