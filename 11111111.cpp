#include<iostream>
using namespace std;
/*
   struct A{
        void f(int){
            cout<<"A::f(int)"<<' ';
        }
        void f(double){
            cout<<"A::f(double)"<<' ';
        }
        virtual void g(void){
            cout<<"A::g"<<' ';
        }
    };
    struct B:public A{
        void f(double){
            cout<<"B::f(double)"<<' ';
        }
        void g(void){
            cout<<"B::g"<<' ';
        }
    };
    */

int main()
{
    /*

    int a[5][2]={0,1,2,3,4,5,6,7,8,9};
    int *p=a[1];
    int (*p2)[2]=&a[1];
    ++p;
    ++p2;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<p2[1][2]<<endl;
    */

    /*
    A* pA=new B;
    pA->f(1);
    pA->g();
    B* pB=(B*)pA;
    pB->f(2);
    pB->g();
    */
    cout<<'b'-'a'<<endl;
    cout<<string(1,2+'a')<<endl;
    return 0;
}
