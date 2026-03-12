#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        vector<int>b;
        vector<int>c;

        for(int i=0;i<n;i++){
            int div = 0;
            for(int j=i+1;j<n;j++){
                if(a[i] % a[j] == 0 ){
                 c.push_back(a[j]);
                }
                else{
                    b.push_back(a[j]);
                }
            }
        }
        
        if(!c.empty() && !b.empty()){
            cout << b.size() << endl;
            cout << c.size() << endl;
          for(int i=0;i<b.size();i++){
               cout << b[i] ;
          }
          cout << endl;

          for(int i=0;i<c.size();i++){
             cout << c[i];
          }
        }
        else{
            cout << -1 << endl;
        }
        
    }
    return 0;
}
