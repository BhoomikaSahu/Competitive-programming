/* Given an array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. 
Example :
    I/P : [1,3,5,6]   target = 5
    O/P : 2
    I/P : [1,3,5,6]   target = 7
    O/P : 4 */

#include<iostream>
using namespace std;

int targetIndex(int arr[], int n, int target)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(target == arr[i])
            return i;
        else if(target > arr[i] && target < arr[i+1])
            return  i+1;        
    }
        return i;
}
int main()
{
    int n, target;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i] ;
    }
    cin >> target; 
    cout << targetIndex(arr, n, target);
    return 0;
}