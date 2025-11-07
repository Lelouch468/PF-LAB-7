#include <iostream>
using namespace std;
int main(){
    float cpm=3.6;
    float cb;
    cout<<"calories burned on the treadmill:"<<endl;
    for (int i = 5; i <=30; i=i+5)
    {
        cb=i*cpm;
        cout<<"Minutes:"<<i<<endl;
        cout<<"calories burned:"<<cb<<endl;
    }
    return 0;

}