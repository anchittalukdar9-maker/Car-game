#include <iostream>
using namespace std;
int length=10;
int width = 20;
void draw(){
    for(int i=0;i<length;i++){
        for(int j=0;j<=width;j++){
            if((j%4)==0){
                cout<<"|";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
int main(){
    draw();
}