#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int idx = 1, cnt = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a == idx) {
      ++idx;
    } else {
      ++cnt;
    }
  }
  if (idx == 1) {
    cnt = -1;
  }
  cout << cnt << '\n';

  return 0;
}
