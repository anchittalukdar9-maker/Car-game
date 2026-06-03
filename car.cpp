#include <iostream>
using namespace std;
int length=10;
int width = 20;
//car positions acc to width and lanes are 2,6,10,14,18 but start from 1,5,9,13,17
int car=9;
//drawing the lanes and the car
void draw(){
    for(int i=0;i<length;i++){
        for(int j=0;j<=width;j++){
            if((j%4)==0){
                cout<<"|";
            }else{
                if(i==length-1 && j==car){
                    cout<<"|^|";
                    
                }else if(i==length-1 && (j==car+1 || j==car+2)){
                   continue;
                }
                else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    
    }
}
int main(){
    draw();
}