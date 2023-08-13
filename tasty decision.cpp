#include <iostream>

using namespace std;

int main() {
  int t, x, y, a, b;

  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> x >> y;
    a = 2 * x;
    b = 5 * y;
    if (a > b) {
      cout << "chocolate" << endl;
    } else if (a < b) {
      cout << "candy" << endl;
    } else {
      cout << "either" << endl;
    }
  }

  return 0;
}
