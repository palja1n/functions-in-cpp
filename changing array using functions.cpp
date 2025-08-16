#include <iostream>
using namespace std;
void arrayChange(int arr[],int &x){
    for(int i =0 ; i < 5; i++){
        arr[i] = x;
        x++;
    }
}
int main() {
    int x = 5;
    int arr[5] = {1,2,3,4,5};
    cout << "Enter Element to start with: ";
    cin >> x;
    cout << "Before: \n";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\nAfter: \n";
    arrayChange(arr,x);
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Output:

Enter Element to start with: 13
Before: 
1 2 3 4 5 
After: 
13 14 15 16 17 
*/
