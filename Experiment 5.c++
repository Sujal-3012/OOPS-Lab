#include <iostream>
using namespace std;
class Largest
{
    int a , b;
    public:
    Largest(int x , int y){
        this->a = x;
        this->b = y;
    }
    int max(){
        if (a > b){
            return a;
        }
        return b;
    }
    ~Largest();
};
int main() {
    int x,y;
    cin>>x>>y;
    Largest* obj1=new Largest(x,y);
    cout<<obj1->max();
    return 0;
}
