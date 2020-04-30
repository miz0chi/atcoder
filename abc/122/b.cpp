#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string S;
  cin >> S;

  int cmax = 0, count = 0;
  for (char ch : S) {
    if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T') {
      count++;
      cmax = max(cmax, count);
    } else {
      count = 0;
    }
  }
  cout << cmax << '\n';
  return 0;
}
