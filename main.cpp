#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10, 20, 30,40};
    int sum = 0;
    cout<<"v1: {";
    for_each(begin(v1),end(v1),[&sum](const auto& x){ cout<<x<<" ";sum+=x;});
    cout<<"}";
    cout<<"sum of vector elements:"<<sum<<endl;
    cout<<endl;
    return 0;
}