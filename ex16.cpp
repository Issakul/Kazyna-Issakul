#include <iostream>
#include <math.h>


using namespace std;
int main() {
    int a,b,n;
    cin>>a>>b>>n;
    a=a*n;
    b=b*n;
    cout<<a+b/100<<' '<<b%100;
    return 0;
}