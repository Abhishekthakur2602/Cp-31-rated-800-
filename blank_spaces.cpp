#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> s(n);
        int count_0 = 0;
        int max_0 = 0;

        for(int i=0;i<n;i++){
            cin >> s[i];
            if(s[i] == 0){
                count_0++;
                max_0 = max(max_0 , count_0);
            }
            else{
                count_0 = 0;
            }
        }
        cout << max_0 << endl;
    }
    return 0;
}