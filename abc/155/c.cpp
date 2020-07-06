#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  map<string, int> sm;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    sm[s] += 1;
  }

  int imax = 0;
  for (auto i : sm) {
    imax = max(i.second, imax);
  }

  for (auto i : sm) {
    if (i.second == imax) {
      cout << i.first << '\n';
    }
  }

  return 0;
}
