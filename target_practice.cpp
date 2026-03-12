#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

        char grid[10][10] ;
        for(int i = 0; i < 10; i++) {
            string s;
            for(int j = 0; j < 10; j++) {
                grid[i][j] = s[j];
            }
        }

        int total_shots = 0;
        for(int col = 0; col < 10; col++) {
            for(int row = 0; row < 10; row++) {
                if(grid[row][col] == 'X') {
                    total_shots += score[row][col];
                }
            }
        }
    cout << total_shots << endl;

    }
    return 0;

}