#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
        if (i == 3) {
            break;
        }
    }

    return 0;
}
