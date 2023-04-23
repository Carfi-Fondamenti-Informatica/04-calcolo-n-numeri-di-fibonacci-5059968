#include <iostream>
using namespace std;

int main() {
    int t1 = 1, t2 = 1, t3=0, n;

    cin >> n;
    cout<<t1 <<endl;
    cout<< t2 <<endl;

    t3 = t1 + t2;
    if (n>=2) {
        while (t3 <= n) {
            cout << t3 << endl;
            t1 = t2;
            t2 = t3;
            t3 = t1 + t2;
        }
    } else{
        cout<<"errore"<<endl;
    }
    return 0;
}

