#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N, vector<int>(M));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }

  int64_t smax = 0;
  for (int i = 0; i < M - 1; i++) {
    int64_t sum = 0;
    for (int j = 0; j < N; j++) {
      int amax = 0;
      for (int k = 0; k < i + 2; k += i + 1) {
        amax = max(amax, A[j][k]);
        cerr << A[j][k] << " ";
      }
      sum += amax;
      cerr << '\n';
    }
    cerr << sum << '\n';
    smax = max(smax, sum);
  }
  cout << smax << '\n';
  return 0;
}
