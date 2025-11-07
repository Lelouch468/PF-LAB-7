#include <iostream>
using namespace std;
int main(){
int n1, p;
cout<<"enter number:";
cin>>n1;
cout<<"enter power:";
cin>>p;
int result=n1;
for (int i = 1; i <=p; i++)
{
    result=result*i;
    cout<<result<<endl;
}
return 0;



}