#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sub = INT_MAX;

        if(is_sorted(a.begin() , a.end())){
            cout << '0' << endl;
            continue;
        }else{
            for(int i=1;i<n;i++){
                int val = abs((a[i] - a[i-1]));
                val = val/2 + 1;
                sub = min(sub , val);

            }
        }

        cout << sub + 1 << endl;
    }
    return 0;
}