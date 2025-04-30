#include <iostream>
#define _DBG_MAP_ALLOC
#include <crtdbg.h>
#include <memory>
using namespace std;

template<typename T>
class smart_ptr
{
public:
    smart_ptr(T* ptr = nullptr) : _ptr{ptr} {}
    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator = (const smart_ptr&) = delete;
    ~smart_ptr() { if (_ptr) delete _ptr; }

    T& operator * () { return *_ptr; }
    T* operator & () { return _ptr; }
    T* operator -> () { return  _ptr; }

    T* get() { return _ptr; }

private:

    T* _ptr{};

};

int main()
{   /*
    int arr[] = { 2,4,6,8 };
    int* p = arr;   //stores &arr[0]
    p++; // 4
    p++; // 6
    //arrays store in sequential value in memory which allows this incrementing to work.
    p--; // 4
    p += 2; // 8
    cout << *p << endl;
    */

    int* np = new int{5}; // { } is bad practice, initializing a value with new will not delete it unless specifically called to
    cout << np << endl; // Memory address
    cout << *np << endl; 
    
    delete np;

    {
        smart_ptr<int> sp{ new int {25} };
        unique_ptr<int> up{ new int {20} };

        unique_ptr<int> upc{ up };
    }

    _CrtDumpMemoryLeaks();
}
