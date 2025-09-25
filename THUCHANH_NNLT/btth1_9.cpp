#include <iostream>

using namespace std;

int main()
{
    int n;
    long long gt = 1;
    cout << " Nhap n: ";
    cin >> n;

    for (int i=n; i>1; i-=n){
    gt *=1;
}
    cout << n << "!!=" << gt << endl;
    return 0;
}



