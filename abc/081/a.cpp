#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int sum = 0;
  for (auto i : s) {
    if (i == '1') {
      sum++;
    }
  }
  cout << sum << endl;
}
