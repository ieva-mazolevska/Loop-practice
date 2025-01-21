#include <iostream>
using namespace std;

int main (){
    int N;
    cout << "Enter N: \n";
    cin >> N;
    //top
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N-i; j++) {
            cout << " ";
        }
        for (int j=1; j<=2*i-1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    //bottom
/*    for (int i=N; i<=N; i--) {
        for (int j=1; j<=N-i+1; j++) {
            cout << " ";
        }
        for (int j=1; j<=i*2-3; j++) {
            cout << "*";
        }

        cout << endl;
    }
*/
    return 0;
}