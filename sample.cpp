#include <iostream>

using namespace std;

int main(void) {
    int a = 3;
    int b = 5;
    while(b--){
        while(a--){
            cout<<a;
        }
        cout<<"\n";
    }
    return 0;
}