#include <iostream>

using namespace std;
int main(){
    string hoten;
    float toan,van,tin,diemtb;
    cout<<"hoten:";
    getline(cin,hoten);
    cout<<"Nhap diem toan:";
    cin>>toan;
    cout<<"Nhap diem van:";
    cin>>van;
    cout<<"Nhap diem tin:";
    cin>>tin;
    diemtb=(toan+van+tin)/3;
    if(diemtb<5){
        cout<<"Điem trung binh la:"<<diemtb<<"|Xep loai: Yeu";
    } else if(diemtb>=5 && diemtb<7){
          cout<<"Điem trung binh la:"<<diemtb<<"|Xep loai: Trung Binh";
    } else if(diemtb>=7 && diemtb<8){
          cout<<"Điem trung binh la:"<<diemtb<<"|Xep loai: Kha";
    } else if(diemtb>=8){
          cout<<"Diem trung binh la:"<<diemtb<<"|Xep loai: Gioi";
    }
    return 0;
}
