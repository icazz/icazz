#include <iostream>
#include <vector>
using namespace std;
// https://tlx.toki.id/courses/competitive-1/chapters/02/problems/C

const int MAX = 1000000;

vector<int> sieve_of_eratosthenes(int batas){
    vector<bool> is_prime(batas + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < batas; i++){
        if (is_prime[i]){
            for (int j = i * i; j <= batas; j += i){
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= batas; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){

    int n;
    cin >> n;

    vector<int> primes = sieve_of_eratosthenes(MAX);
    while (n--){
        int k;
        cin >> k;
        cout << primes[k-1] << endl;
    }

    return 0;
}