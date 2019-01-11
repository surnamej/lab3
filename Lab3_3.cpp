#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double x=6,sum=0;
    while(x<=19)
    {
        sum= sum+1/x;
        x++;
    }
    cout<< sum;
    return 0;
}