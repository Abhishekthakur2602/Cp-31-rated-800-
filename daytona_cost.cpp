#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool possible = false;
        for(int i = 0; i < n; i++) {
            if(a[i] == k) {
                possible = true;
                break;
    }
        }

        if(possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}