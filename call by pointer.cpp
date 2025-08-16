#include <iostream>
using namespace std;

void swap (int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main() {
       int a = 13;
       int b = 5;
       cout << "Before swap\n";
       cout << "a: " << a << " b: "<< b << endl;
       swap(&a,&b);
       cout << "After swap\n";
       cout << "a: " << a << " b: "<< b;

    return 0;
}

/*
Output: 
Before swap
a: 13 b: 5
After swap
a: 5 b: 13
*/
