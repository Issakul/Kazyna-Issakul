#include <iostream>
#include <math.h>


using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    cout<<m/n+1%(m%n+1);
    return 0;
}