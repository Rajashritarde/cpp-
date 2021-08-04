#include<iostream>
using namespace std;
class A{
    int i;

    public:
    void show()
    {
        cout<<"\n i="<<this->i;
        cout<<"\n This is show "<<this;
    }
    void setl(int pi)
    {
        this->i=pi;
        cout<<"\n This setl "<<this;
        // this=&i; const A*this
    }
    };
    int main(){
        A a1,a2;
        a1.setl(500);//A *this
        a2.setl(200);
        cout<<"\n adress of a1 "<<&a1<<"\n\n";
        a1.show();
        a2.show();
        //cout <<"Hello world";
        return 0;
    }
