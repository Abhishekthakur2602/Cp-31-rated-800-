#include <iostream>
#include <vector>

using namespace std;

int main(){
int t;
 cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<int> a(n);
    int count1 = 0 , count2 = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];

        if(a[i] == 2){
            count2++;
        }
        else{
            count1++;
        }
    }
   
    if(count1 > 0 && count2 == 0){
        cout << 1 << endl;

        continue;
    }
    if(count2 % 2 == 1){
            cout << -1 << endl;
            continue;
    }
       
    int cnt_2 = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 2){
            cnt_2++;
        }

        if(cnt_2 == count2 /2){
            cout << i + 1 << endl;
            break;
        }
    }


  }
    return 0;
}
