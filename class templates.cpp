#include <iostream>
using namespace std;
template <class H>
class ham{
    H h, f;
    public:
        ham(H a, H b){
        h=a;
        f= b;
        }
        H bigger();
};
template <class H>
H ham<H>::bigger(){
    return (h>f?h:f);
}
int main(){
    ham <int> ho(547645,7654);
    cout << ho.bigger();
}
/*

- Every function you build, you need to
precede it with function template.

- You need to have blank generic data type
after class name. It lets the function know
that we are working with class's template
parameter.

- While making an object, we need to tell the
object what type of data we will be substituting
for class's template parameter.

    */

