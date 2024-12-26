#include <iostream>
#include <string>
using namespace std;

//konversi code ke asli
int main(){
    string str = "epctxlvldtsdpxzrlvfcdfdtytmpcxlyqlle";
    string temp = "abcdefghijklmnopqrstuvwxyz";

    int n = str.length();
    for (int k = 0; k < 26; k++){
        cout << "k = " << k << endl;
        for (int i = 0; i < n; i++){
            size_t pos = temp.find(str[i]);
            int index = pos - k;
            if (index < 0){
                index += 26;
            }
            cout << temp[index];
        }
        cout << endl;
    }
    
    
    
    return 0;
}