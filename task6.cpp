#include <iostream>
using namespace std;
int main(){
    int n;
    float hn=0.0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        hn = hn + 1.0 / i;
        cout << "The " << i << "Harmonic Number (Hn) is: " << hn << endl;
    }
    return 0;


}

