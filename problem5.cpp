#include <iostream>
using namespace std;
int main() {
    float x,y;
    cin >> x >> y;
    float height_S = x;
    float height_M = y*30.48;
    cout << bool(height_M>height_S);

    return 0;
}
