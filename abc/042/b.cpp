#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, l;
  cin >> n >> l;

  vector<string> s(n);
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());

  for (int i = 0; i < n; ++i) {
    cout << s[i];
  }
  cout << '\n';

  return 0;
}
