#include <iotream>

using namespace std;

int main()

{
    const int i = 8; // means that i is a constant and if we try to update it , that will generate a compile error

    const int *pi = &i; // that the pointer p is not a constant but the variable to which it points is a constant
    // or we may say data is constant but pointer is not

    int *const p2; // is opposite of above, which means that the data it points to is not
    // a constant but the pointer itself is a constant

    const int *const p3; // data and pointer both are constant

    int const *p9 = &i; // what is const, to answer following is the rule of thumn
                        // Rule of thumb

    /*
    If const is on the left of *, data is const
    If const is on the right of *, pointer is const
     */
}