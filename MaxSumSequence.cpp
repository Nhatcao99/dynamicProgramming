#include <iostream>
using namespace std;

int SumSequenceMax(int arr[] , int n){

    int solution[n + 1];
    solution[0] = 0;
    for (int i = 1 ; i < n + 1; i ++)
    {
        solution[i] = max(solution[i - 1] + arr[i - 1] , arr[i - 1]);
    }

    int result = solution[0];
    for (int i = 0 ; i < n ; i ++)
    {
        if (result < solution[i]) result = solution[i];
    }
    return result;
}

int main() {
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }
    cout << SumSequenceMax(arr , n);
}