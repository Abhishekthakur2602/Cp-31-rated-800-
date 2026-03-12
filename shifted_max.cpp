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

       vector<int>a(n);
         for(int i=0;i<n;i++){
              cin >> a[i];
         }
    
         
         int chain = 1;
         int mx_val = 0;
         
         for(int i=0;i<n;i++){
             int mx = 0 ;
             int nxt = a[i];

             for(int j = i;j<n;j++){
                    if(nxt == a[j]){
                        nxt++;
                        mx++;
                    }
             }
          mx_val = max(mx_val , mx);
         }
    
         cout << mx_val << endl;
   }

return 0;
}