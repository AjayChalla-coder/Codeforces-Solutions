#include <bits/stdc++.h>
using namespace std;

int digitSum(int x)
{
    int sum=0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main(){
    int a;
    cin >> a;
    while(true)
    {
        if(digitSum(a) % 4 == 0)
        {
            cout << a << '\n';
            break;
        }
        a++;
    }
}