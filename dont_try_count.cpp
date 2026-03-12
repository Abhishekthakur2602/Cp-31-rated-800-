#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        string x;
        string s;
      cin >> x >> s;
        int i=0;
    

        while(i < 5)
{
          
            bool found = false;
            int u = x.size();
            int k = 0;
            for(int j=0; j < u; j++){
                if(x[j] == s[k]){
                    k++;
                   if((k+1) == s.size()){
                    found = true;
                    
                    break;
                }
                
            }
            else {
                k = 0;
            }
        }
            if(found) {
                break;
            }
            x += x;
            i++;
}
    if(i == 5){
        cout << -1 << endl;
    }
    else {
     cout << i << endl;
    }

    }
    return 0;
}