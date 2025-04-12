#include <iostream>
using namespace std;

// TODO: やり直す
int main()
{
  int W, H, N;
  cin >> W >> H >> N;

  int xmin = 0, ymin = 0, xmax = W, ymax = H;
  int x, y, a;
  for (int i = 0; i < N; i++)
  {
    cin >> x >> y >> a;
    if (a == 1)
      xmin = max(xmin, x);
    if (a == 2)
      xmax = min(xmax, x);
    if (a == 3)
      ymin = max(ymin, y);
    if (a == 4)
      ymax = min(ymax, y);
  }
  cout << max(0, (xmax - xmin)) * max(0, (ymax - ymin)) << endl;
}
