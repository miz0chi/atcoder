#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string t;
  cin >> t;
  string pd = t, d = t;
  int len = t.size();

  // bool ok = false;
  // for (int i = 0; i < len; ++i) {
  //   if (t[i] == 'P') {
  //     ok = true;
  //   } else if (t[i] == '?') {
  //     if (ok) {
  //       t[i] = 'D';
  //       ok = false;
  //     } else {
  //       t[i] = 'P';
  //       ok = true;
  //     }
  //   } else {
  //     ok = false;
  //   }
  //   cout << t[i];
  // }
  // cout << '\n';

  for (int i = 0; i < len; ++i) {
    if (t[i] == '?') {
      t[i] = 'D';
    }
    cout << t[i];
  }
  cout << '\n';

  return 0;
}
