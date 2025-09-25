#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tiengui,laisuat;
    int thang;

    cout << "Nhap so tien gui ";
    cin>> tiengui;
    cout<<"Nhap so thang gui";
    cin >>thang;
    cout << "Nhap lai suat hang thang";
    cin>> laisuat;

    for(int i=1; i <= thang; ++i){
        tiengui = tiengui + (tiengui * laisuat / 100.0);
    }
    cout << fixed << setprecision(2);
    cout<< "So tien co duoc sau " << thang << "thang la: " << tiengui << endl;

    return 0;
}


