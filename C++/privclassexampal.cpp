#include <iostream>
using namespace std;

class Employer{
    private:
    int c,d;
    void detailshow(int c1,int d1);

    public:
    int a,b;
    void print()
    {
        cout<<"value a is"<< a << endl;
        cout<<"value b is"<< b << endl;
        
    }
};
void Employer::detailshow(int c1,int d1){
    c=c1;
    d=d1;
}
int main(){
    Employer detail;
    detail.a=10;
    detail.b=20;
    detail.print();
    return 0;
}
