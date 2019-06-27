#include <iostream>
using namespace std;

int NumberOfStep(int n , int arr[n]){
    if (n == 0) return 0;
    else{
        if (arr[n] == 0)
        {
            if (n == 1) {arr[n] = 1;}
            else if (n == 2) {arr[n] = 2;}

            else arr[n] = 1 + NumberOfStep(n - 1 , arr) + NumberOfStep(n - 2, arr) + NumberOfStep(n - 3 , arr);
        }
    }
    return arr[n];
}
int main() {
    int n ;
    cin >> n;
    int arr[1000] = {0};
    cout << NumberOfStep(n , arr);
}
