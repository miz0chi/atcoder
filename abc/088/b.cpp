#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  // priority_queue<int> a;
  // for (int i = 0; i < n; i++) {
  //   int j;
  //   cin >> j;
  //   a.push(j);
  // }

  // int bob = 0, alice = 0;
  // for (int i = 0; i < n; i++) {
  //   if (i % 2 == 0) {
  //     alice += a.top();
  //   } else {
  //     bob += a.top();
  //   }
  //   a.pop();
  // }

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());

  int alice = 0, bob = 0;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }

  cout << alice - bob << endl;

  return 0;
}
