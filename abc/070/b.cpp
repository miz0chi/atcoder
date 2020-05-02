#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int t = 0;
  if (min(B, D) > max(A, C)) {
    t = min(B, D) - max(A, C);
  }

  cout << t << '\n';

  return 0;
}
