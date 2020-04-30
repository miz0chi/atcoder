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
    for (int j = i + 1; j < M; j++) {
      int64_t sum = 0;
      for (int k = 0; k < N; k++) {
        sum += max(A[k][i], A[k][j]);
        // cerr << A[k][i] << " " << A[k][j] << '\n';
      }
      // cerr << sum << '\n';
      smax = max(smax, sum);
    }
  }
  // cerr << smax << '\n';
  cout << smax << '\n';
  return 0;
}
