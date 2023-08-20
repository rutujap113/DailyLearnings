#include<iostream>
// #include<thread>

using namespace std;
void function1()
{
    cout<<" in function1 "<<endl;
}

void func2()
{
    cout<<" in func2 "<<endl;
}

int main()
{
    // thread f1(function1);
    // thread f2(func2);
    func2();
    return 0; 
}