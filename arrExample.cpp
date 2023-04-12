#include <iostream>

using namespace std;

int main() {
    int n; 
    cout << "Enter a Number :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        for (int j = 0; j < n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}