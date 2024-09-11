#include <iostream>
using namespace std;
int main() {
    int N;
    int groupSize = 50;
    cin >> N;
    int computers = (groupSize - (N % groupSize)) % groupSize;
    cout << computers << endl;



    return 0;
}
