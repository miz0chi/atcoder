#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  for (int i = 1; i <= 5; ++i) {
    int x;
    cin >> x;
    if (x == 0) {
      cout << i << '\n';
      break;
    }
  }

  return 0;
}
