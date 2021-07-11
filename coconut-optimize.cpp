#include<iostream>
using namespace std;
int main(){
    int n, a, b, x, y;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> x >> y;
        cout << x/a + y/b;
    }
    
    return 0;
}