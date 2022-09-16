#include<iostream> 
using namespace std; 

     void change(int x, int y, int &z) {
        x = y + z;
        y = x + z;
        z = x + y;
        return;
}
int main() {
        int i = 2, j = 3;
        change(i, j, j);
        cout << i << j << endl;
        return 0;
}