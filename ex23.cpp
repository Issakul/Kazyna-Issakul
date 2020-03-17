#include <iostream>
#include <math.h>


using namespace std;
int main() {
    int a,b,c,max=-10000,min=1000;
    cin>>a>>b>>c;
    if(a>max){max=a;}
    if(b>max){max=b;}
    if(c>max){max=c;}
    if(a<min){min=a;}
    if(b<min){min=b;}
    if(c<min){min=c;}
    cout <<min<<" "<<max;
    return 0;
}