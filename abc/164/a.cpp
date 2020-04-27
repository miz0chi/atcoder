#include <bits/stdc++.h>

using namespace std;

constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int S, W;
  cin >> S >> W;

  if (W >= S) {
    cout << "unsafe" << nl;
  } else {
    cout << "safe" << nl;
  }
}
