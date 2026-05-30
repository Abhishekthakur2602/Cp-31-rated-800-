#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        int source_x , source_y, dest_x, dest_y;
        cin >> source_x >> source_y >> dest_x >> dest_y;

        if(dest_y < source_y){
            cout << -1 << endl;
            continue;
        }

        int moves = 0;
        moves += ( dest_y - source_y);
        source_x += moves;

        if(source_x < dest_x){
            cout << -1 << endl;
         continue;
        }
        else{
            moves += (  source_x - dest_x);

            cout << moves << endl;
        }

         
    }
    return 0;
}