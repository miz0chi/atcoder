#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int k, s;
  cin >> k >> s;

  int sum = 0;
  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      int calc = s - x - y;
      if (calc >= 0 && calc <= k) sum++;
    }
  }

  cout << sum << '\n';

  return 0;
}
