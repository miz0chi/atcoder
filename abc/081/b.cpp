#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int sum = 0;
  bool div = true;
  while (div) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 == 0) {
        A.at(i) /= 2;
        if (i == N - 1) {
          sum++;
        }
      } else {
        div = false;
        break;
      }
    }
  }

  cout << sum << endl;
}
