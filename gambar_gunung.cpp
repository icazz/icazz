#include <iostream>
using namespace std;
//https://tlx.toki.id/courses/basic-cpp/chapters/12/problems/G

void gunung (int n){
    if (n == 1){
        cout << "*" << endl;
        return;
    }

    gunung(n-1);

    for (int i = 0; i < n; i++){
        cout << "*";
    }
    cout << endl;

    gunung(n-1);
}

int main(){
    int n; 
    cin >> n;
    gunung(n);
    return 0;
}