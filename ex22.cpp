#include <iostream>
#include <math.h>


using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a1,a2;
    a1=n%m;
    a2=m%n;
    cout<<a1*a2+1;
    return 0;
}