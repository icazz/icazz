#include <iostream>
#include <string>
using namespace std;
//https://tlx.toki.id/courses/basic-cpp/chapters/12/problems/F

int main (){
    string s, t;
    cin >> s >> t;
    size_t pos = s.find(t);
    while (pos != string::npos){
        s.erase(pos, t.length());
        pos = s.find(t);
    }
    cout << s << endl;
    return 0;
}