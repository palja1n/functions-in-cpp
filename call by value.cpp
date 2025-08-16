// swap does not take place
#include <iostream>
using namespace std;

void swap (int x, int y){
  int temp = x;
  x = y;
  y = temp;
}
int main() {
       int a = 13;
       int b = 5;
       swap(a,b);
       cout << a << " " << b;

    return 0;
}

/*
Output:
13 5
*/
