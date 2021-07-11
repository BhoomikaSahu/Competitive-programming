#include<iostream>
using namespace std;
int main(){
    int r;
    cin >> r;
    int arr[r][4];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        int s = arr[i][2]/arr[i][0];
        int x = arr[i][3]/arr[i][1];
        cout << s+x << endl;
    }
    cout<<"hello";
    return 0;
}