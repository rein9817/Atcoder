#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  vector<string> C(H);
  for (int i = 0; i < H; i++) cin >> C[i];
  vector<int> ans(W);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (C[i][j] == '#') ans[j]++;
    }
  }
  for (int j = 0; j < W; j++) cout << ans[j] << " \n"[j == W - 1];
}
