#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        vector<int>b(n);

        for(int i=0;i<n;i++){
            int num = n+1 - a[i];
            b.push_back(num);
        }

        for(int i=0;i<b.size();i++){
            cout << b[i] << endl;
        }
    }
    return 0;
}