#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b, k;
  cin >> a >> b >> k;

  int cnt = 0;
  for (int i = min(a,b); i >= 0; --i) {
    if (a % i == 0 && b % i == 0) {
      ++cnt;
      cerr << i << '\n';
      if (cnt == k) {
        cout << i << '\n';
        break;
      }
    }
  }

  return 0;
}
