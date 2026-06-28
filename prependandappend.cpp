#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    int T;
    cin >> T;

    while(T--){
        int n;
        cin >>n;

        string s;
        cin >> s;

        int count = 0;
        
        for(int i=0;i<n/2;i++){
            if(s[i] == s[n-1-i]){
               break;
            }
            else{
                count+2;
            }
        }
       cout << n - count << endl;
    }

    return 0;
}