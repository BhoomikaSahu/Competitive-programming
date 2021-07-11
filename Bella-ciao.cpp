#include<iostream>
using namespace std;
int main(){
    int n, D, d, P, Q ;
    cin >> n;
    while (n--)
    {
        cin >> D >> d >> P >> Q;
        int s = d*P;
        for( int i=d; i<D; i++)
        {
            if(i%d == 0)
            {
                P += Q;
            }
            s += P;
        }
        cout << s << endl ;
    }
    
    return 0;
}