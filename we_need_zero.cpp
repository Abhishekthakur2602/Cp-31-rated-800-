#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int total_val = 0;

        for(int i=0;i<n;i++){

            total_val ^= a[i];
        }

        if(n % 2 == 1){
            cout << total_val << endl;
        }

        else{
            if(total_val == 0){
                cout << total_val << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
return 0;

}