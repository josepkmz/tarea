#include <iostream>
using namespace std;

int main() {
    for (char c = 'Z'; c >= 'A'; c--) {
        for (char d = c; d >= 'A'; d--) {
            cout << d << ' ';
        }
        cout << endl;
    }
    return 0;
}