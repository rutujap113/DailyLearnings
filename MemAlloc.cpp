#include <iostream>

int* CreateArray()
{
    //Allocation in Stack memory fails as the scope ends
    // int arr[50];// declaring in Stack
    int *arr[50] = {new int[50]};
    std::cout<<"CreatedArray() passed";
    return *arr;
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int* array = CreateArray();//it allocated space in stack
    return 0;
}