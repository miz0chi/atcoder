#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int x = (n + (1.08 - 0.01)) / 1.08;
  if (n == (int)(x * 1.08)) {
    cout << x << '\n';
  } else {
    cout << ":(" << '\n';
  }

  return 0;
}
