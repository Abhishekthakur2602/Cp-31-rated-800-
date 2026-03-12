
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
int t;
cin >> t;

while(t--){
    int n ;
    cin >> n;

    vector<int>a(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
   
    int res = -(sum);

    cout << res << endl;
}
    return 0;
}