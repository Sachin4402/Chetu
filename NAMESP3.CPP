#include<iostream>
using namespace std;
namespace A{
class ABC{
    public:void fun();
}; 
}
void A::ABC::fun(){
    cout<<"Hello  ";
}
int main(){
    A::ABC z;
    z.fun();
    return 0;
    
}