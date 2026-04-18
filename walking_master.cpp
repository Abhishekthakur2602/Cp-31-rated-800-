#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int count = 0;

        while(a <= c || b <= d){
            if(a != c && b != d){
                a++;
                b++;
                count++;
            }
            else if(a != c && b == d){
                a--;
                count++;
            }

            }
            
            if((a == c) && (b == d)){
              cout << count << endl;
            }
            else {
                cout << -1 << endl;
            }
            
        }
        return 0;
    }

