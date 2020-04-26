#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> A(N - 1);
  vector<int> sum(N);

  for (int i = 0; i < N - 1; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N - 1; i++) {
    sum.at(A.at(i) - 1)++;
  }

  for (int i = 0; i < N; i++) {
    cout << sum.at(i) << endl;
  }
}
