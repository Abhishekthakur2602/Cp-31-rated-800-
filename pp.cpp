#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = "Yes";

    for(int i=0;i<s.size()/2;i++){

        if(s[i] != s[s.size() - 1 -i]){
            s1 = "No";
            break;
        }

    }
    cout << s1 << endl;
    return 0;


}