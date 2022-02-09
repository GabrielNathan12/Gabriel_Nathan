#include <iostream>
using namespace std;

char MD1(char D1){
    return D1;
}

double MD2(double D2){
    return D2;
}

int main(){
    char D1;
    double D2;
    cin >> D1 >> D2;

    cout << MD1(D1) << " " << MD2(D2);
}