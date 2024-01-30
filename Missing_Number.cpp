//  Missing Number

#include<iostream>
using namespace std;
 

int MissingNumber(int a[], int n)
{
 
    int total = (n+1) * (n +2)/ 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
 

int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = MissingNumber(arr, n);
    cout << "Missing number is :" <<ans;
    return 0;
}