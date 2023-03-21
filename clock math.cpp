#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H, M;
    double ha, ma, result;
    cin>>H>>M;
    ha = (H*60+M)*0.5;
    ma = M*6;
    result = abs(0.5*(60*H-11*M));
    if(result > 180)
    {
        result = 360 - result;
    }
    printf("%.7lf\n", result);

}
