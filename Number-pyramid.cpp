#include <iostream>
using namespace std;

int main (){
    int N;
    cout << "Enter N: \n";
    cin >> N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i; j++) {
            cout << " ";
        }
        for (int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}