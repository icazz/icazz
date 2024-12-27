#include <iostream>
#include <vector>
using namespace std;
//https://tlx.toki.id/courses/competitive-1/chapters/02/problems/B

vector<int> faktorisasiPrima(int n){
    vector<int> factors;

    while (n % 2 == 0){
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2){
        while (n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2){
        factors.push_back(n);
    }
    
    return factors;
}

int main(){
    int n;
    cin >> n;

    vector<int> factor = faktorisasiPrima(n);
    int prev = factor[0], count = 0;

    // for (size_t i = 0; i < factor.size(); i++){
    //     cout << factor[i] << " ";
    // }

    for (size_t i = 0; i < factor.size(); i++) {
        if (factor[i] == prev){
            count++;
        } else {
            if (count > 1){
                cout << prev << "^" << count;
            } else if (count == 1 && prev != 0){
                cout << prev;
            }

            if (i < factor.size()) {
                cout << " x ";
            }

            prev = factor[i];
            count = 1;
        }
    }

    // faktor terakhir
    if (count > 1) {
        cout << prev << "^" << count << endl;
    } else if (count == 1) {
        cout << prev << endl;
    }
    return 0;
}