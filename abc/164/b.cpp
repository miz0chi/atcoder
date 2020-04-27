#include <bits/stdc++.h>

using namespace std;

constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  for (int i = 0; 1; i++) {
    if (i % 2 == 0) {
      C -= B;
    } else {
      A -= D;
    }
    if (A <= 0 || C <= 0) {
      break;
    }
  }
  cerr << A << "!" << C << nl;
  if (A <= 0) {
    cout << "No" << nl;
  } else {
    cout << "Yes" << nl;
  }
}
