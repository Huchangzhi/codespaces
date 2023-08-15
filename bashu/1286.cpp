#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long shz[70]={0,1,2,4};
    for(int i=4;i<=60;i++){
        shz[i] = shz[i-1]+shz[i-2]+shz[i-3];
    }
    while (1)
    {   cin >> n;
        if (n == 0)
        {
            break;
        }
        printf("%llu\n", shz[n]);
    }

    return 0;
}