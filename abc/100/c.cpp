#include <bits/stdc++.h>

using namespace std;

void devide(int a, int &cnt) {
  if (a % 2 == 0) {
    a /= 2;
    ++cnt;
    devide(a, cnt);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    devide(a, cnt);
  }

  cout << cnt << '\n';

  return 0;
}
