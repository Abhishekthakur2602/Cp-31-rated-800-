#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n ,k;
        cin >> n >> k;
       
        if((k % 2 == 0 && n%2 == 1) || n <(k+2)){
            cout << "N0" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
}