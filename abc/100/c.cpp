#include <bits/stdc++.h>

using namespace std;

void devide(int &a, int &cnt) {
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

  // vector<int> a(n);
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    devide(a, cnt);
  }

  // bool ok = true;
  // while (ok) {
  //   ok = false;
  //   for (int i = 0; i < n; ++i) {
  //     if (a[i] % 2 == 0) {
  //       a[i] /= 2;
  //       ok = true;
  //       ++cnt;
  //       break;
  //     }
  //   }
  // }

  cout << cnt << '\n';

  return 0;
}
