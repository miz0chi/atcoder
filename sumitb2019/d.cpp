#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  set<string> ans;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        string add = ""s + s[i] + s[j] + s[k];
        ans.insert(add);
      }
    }
  }
  cout << ans.size() << '\n';

  return 0;
}
