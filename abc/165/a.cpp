#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int K, A, B;
  cin >> K >> A >> B;
  int x = B / K;
  if (A <= K * x)
    cout << "OK" << '\n';
  else
    cout << "NG" << '\n';
  return 0;
}
