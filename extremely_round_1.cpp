// more optimize O(n) n = number of digits

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;

        int count = 0;

        while(n >0){
            count += min(9,n);
            n /=10;
        }

        cout << count <<"\n";
    }
    return 0;
}