#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N;
  cin >> N;
  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d.at(i);
  }
  sort(d.begin(), d.end(), greater<int>());

  int sum = 1;
  for (int i = 1; i < N; i++) {
    if (d.at(i) < d.at(i - 1)) {
      sum++;
    }
  }

  cout << sum << '\n';
}
