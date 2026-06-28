#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;

        long long  count = 0;
        long long  x = 0;

        while(x <= n){
        string st = to_string(x);
        long long  m = st.size();
        long long  i = 0;
        long long  count_1 = 0;

        while(i < m){
         if(st[i] != '0'){
          count_1++;
         }
         i++;
        }
        if(count_1 == 1){
            count++;
        }
        x++;
        }

        cout << count << endl;
    }

    return 0;
}