#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9; ++j) {
      if (n == i * j) {
        cout << "Yes"s << '\n';
        return 0;
      }
    }
  }
  cout << "No"s << '\n';

  return 0;
}
