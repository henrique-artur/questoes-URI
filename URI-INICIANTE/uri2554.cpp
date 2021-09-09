#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, d, v, a, i, j;
    string data;
    bool lock;
    while (cin >> n >> d) {
        lock = false;
        for (i = 0; i < d; i++) {
            a = 0;
            cin.ignore();
            cin >> data;
            for (j = 0; j < n; j++) {
                cin >> v;
                a += v;
            }
            if (a == n && !lock) {
                cout << data << endl;
                lock = true;
            }
        }
        if (!lock)
            cout << "Pizza antes de FdI" << endl;
    }
    return 0;
}