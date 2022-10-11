#include <iostream>
using namespace std;
template <typename T>
    T square(T value){
        return value*value;
    } 
int main(){
    cout<<"Hello World"<<endl;
    cout<<square<int>(4)<<endl;
    cout<<square<float>(5.5)<<endl;
    cout<<square<double>(10.2545)<<endl;
    cout<<square<long>(1024545)<<endl;
    return 0;
}
