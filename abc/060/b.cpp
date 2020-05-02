#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int A, B, C;
  cin >> A >> B >> C;

  set<int> m;
  int cnt = 0;
  for (int i = 1; 1; i++) {
    int mm = A * i % B;
    if (mm == C) {
      cout << "YES" << '\n';
      return 0;
    }
    m.insert(mm);
    if (cnt == m.size()) {
      cout << "NO" << '\n';
      return 0;
    }
    cnt = m.size();
  }

  return 0;
}
