#include <bits/stdc++.h>

using namespace std;

constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N;
  cin >> N;
  set<string> S;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    S.insert(s);
  }

  cout << S.size() << nl;
}
