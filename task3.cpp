#include <iostream>
using namespace std;
int main(){
int n1;
cout<<"enter number:";
cin>>n1;
int result=1;
for (int i = 1; i <=n1; i++)
{
    result=result*i;
    cout<<result<<endl;
}
return 0;



}