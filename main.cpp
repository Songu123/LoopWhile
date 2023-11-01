#include <iostream>
using namespace std;
int main() {
/*
 * 11.1 Viết chương trình tính tổng từ 1 - 100
 * */
    int n = 1, tong = 0;
    while(n <= 100){
        tong +=n;
        n++;
    }
    cout << "Tổng từ 1 - 100 là: " << tong << endl;
    return 0;

/*
 * 11.2 Viết chương trình nhập vào só tụ nhiên n. Tinhs tổng các só chia hết cho 3 bé hơn n
 * */
//    int n, i = 0, tong = 0;
//    cout << "Nhập n: " << endl;
//    cin >> n;
//    while (i < n){
//        if(i % 3 == 0){
//            tong += i;
//        }
//        i++;
//    }
//    cout << "Tổng các số chia hết cho 3 bé hơn " << n << " là: " << tong << endl;
//    return 0;

/*
 * 11.3 Viết chương trình in 100 số Fibonnaci
 * */
//    int n1 = 0, n2 = 1, n3 = 1, i = 0;
//    while(i < 10){
//        cout << n3 << " ";
//        n3 = n1 + n2;
//        n1 = n2;
//        n2 = n3;
//        i++;
//    }
//    return 0;

/*
 * 11.4 Viết chương trình nhập vào só tụ nhiên n. Kiểm tra có phải số polinom không
 * */
//    int n, mod, n1 = 0;
//    cout << "Nhập n: ";
//    cin >> n;
//    int number = n;
//    while(n > 0){
//        mod = n % 10;
//        n1 = n1 * 10 + mod;
//        n = n /10;
//    }
//    if(n1 == number){
//        cout << "Đây là số polinom!" << endl;
//    }else {
//        cout << "Đây không là số polinom!" << endl;
//    }
//    return 0;

/*
 * 11.5 Viết chương trình liệt kê các số từ 100 - 999 có tổng các chữ số chia hết cho 3.
 * */
//    int a = 100, b = 999;
//    while(a <= b){
//        int i = a, mod, tong = 0;
//        while(i > 0){
//            mod = i % 10;
//            tong += mod;
//            i /= 10;
//        }
//        if(tong % 3 == 0){
//            cout << a << " ";
//        }
//        a++;
//    }
//    return 0;
}
