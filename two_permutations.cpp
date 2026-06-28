#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        if(((a == b) && (b == n) &&(a == n)) || (a+b+2 <= n)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}