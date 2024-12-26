#include <iostream>
using namespace std;
//https://tlx.toki.id/courses/basic-cpp/chapters/12/problems/H/submissions/1073121

int a,b;
int main(){
      cin>>a;
      for (int i=0; i<a; i++){
          cin>>b;
          if(b==1){
              cout<<"BUKAN"<<endl;
              continue;
              }
           bool prima= 1;
           for (int y=2; (y*y)<=b; y++){
               if ((b%y)==0){
                   if (b==y){
                       break;
                       }
                cout<<"BUKAN";
                prima=0;
                break;
                   }
               
               }
               if (prima){
                   cout<<"YA";
                   }
                   cout<<endl;
      }
}