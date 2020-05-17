#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  n %= 10;

  if (n == 3) {
    cout << "bon" << '\n';
  } else if (n == 0 || n == 1 || n == 6 || n == 8) {
    cout << "pon" << '\n';
  } else {
    cout << "hon" << '\n';
  }

  return 0;
}
