#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40};
    for_each(begin(v1),end(v1),[](const auto& x){ cout<<x<<"";});
    cout<<"}";
    cout<<endl;
    return 0;
}