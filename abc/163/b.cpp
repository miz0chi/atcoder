#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  vector<int> A(M);

  for (int i = 0; i < M; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < M; i++) {
    N -= A.at(i);
  }
  if (N < 0) {
    N = -1;
  }

  cout << N << endl;
}
