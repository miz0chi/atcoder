#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  string s;
  cin >> s;

  int ss = s.size();
  int frt = 0, bck = 0;
  for (int i = 0; i < ss; ++i) {
    if (s[i] == 'A') {
      frt = i;
      break;
    }
  }
  for (int i = frt + 1; i < ss; ++i) {
    if (s[i] == 'Z') {
      bck = max(i, bck);
    }
  }

  cout << bck - frt + 1 << '\n';

  return 0;
}
