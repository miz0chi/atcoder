#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string S;
  cin >> S;

  int max = 0, count = 0;
  bool b = false;
  for (char ch : S) {
    if (!b) {
      count = 0;
    }
    if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T') {
      count++;
      if (count > max) {
        max = count;
      }
      b = true;
    } else {
      b = false;
    }
  }
  cout << max << '\n';
  return 0;
}
