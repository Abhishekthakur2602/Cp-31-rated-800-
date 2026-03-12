#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
 int t;
 cin >> t;

 while(t--){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    unordered_map<int , int> freq;

    for(int num : a){
        freq[num]++;
    }
    vector<int> counts;
    
    for(auto it:freq){

      counts.push_back(it.second);
    }
    
    if(freq.size() == 1){
        cout << "YES" << endl;
    }
    else if(freq.size() == 2){

        if(n%2 == 0 && (counts[0] == counts[1])){
            cout << "YES" << endl;
        }
        else if(n%2 == 1 && (abs(counts[0] - counts[1]) == 1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        } 
    }
        else {
        cout << "NO" << endl;
    }
 }
    return 0;
}