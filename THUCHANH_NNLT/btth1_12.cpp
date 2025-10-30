#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool laSoThuanNghich(int so) {
    string chuoi = to_string(so);
    if (chuoi.length() != 6) return false;
    for (int i = 0; i < 3; i++) {
        if (chuoi[i] != chuoi[5 - i]) return false;
    }
    return true;
}

int tinhTongChuSo(int so) {
    int tong = 0;
    while (so > 0) {
        tong += so % 10;
        so /= 10;
    }
    return tong;
}

bool coChuaSoKhong(int tong) {
    while (tong > 0) {
        if (tong % 10 == 0) return true;
        tong /= 10;
    }
    return false;
}

bool laLoai3(int so) {
    return laSoThuanNghich(so);
}

bool laLoai2(int so) {
    if (!laLoai3(so)) return false;
    int tong = tinhTongChuSo(so);
    return (tong % 10 == 0);
}

bool laLoai1(int so) {
    if (!laLoai2(so)) return false;
    int tong = tinhTongChuSo(so);
    return !coChuaSoKhong(tong);
}

void demSoLuongMoiLoai(int &demLoai1, int &demLoai2, int &demLoai3) {
    demLoai1 = 0;
    demLoai2 = 0;
    demLoai3 = 0;
    for (int so = 0; so <= 999999; so++) {
        if (laLoai3(so)) {
            demLoai3++;
            if (laLoai2(so)) {
                demLoai2++;
                if (laLoai1(so)) {
                    demLoai1++;
                }
            }
        }
    }
}

int main() {
    int soBoTest;
    cin >> soBoTest;

    int demLoai1, demLoai2, demLoai3;
    demSoLuongMoiLoai(demLoai1, demLoai2, demLoai3);

    while (soBoTest--) {
        int N, M, K;
        cin >> N >> M >> K;

        if (N <= demLoai1 && M <= demLoai2 - demLoai1 && K <= demLoai3 - demLoai2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
