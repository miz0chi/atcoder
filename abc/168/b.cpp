#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int k;
  string s;
  cin >> k >> s;

  // if (s.size() <= k) {
  //   cout << s << '\n';
  // } else {
  //   for (int i = 0; i < k; ++i) {
  //     cout << s[i];
  //   }
  //   cout << "..." << '\n';
  // }

  if (s.size() > k) {
    s = s.substr(0, k) + "...";
  }
  cout << s << '\n';

  return 0;
}
