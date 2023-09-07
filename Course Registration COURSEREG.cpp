#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
  int n, m, k;
  cin >> n >> m >> k;
  int vacant = m - k;
  if(n > vacant)
  {
    cout << "No" << endl;
  }
  else 
  {
    cout << "Yes" << endl;
  }
    }
  return 0;
}
