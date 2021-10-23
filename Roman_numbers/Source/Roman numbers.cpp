#include <iostream>
using namespace std;

int main()
{
    int n,th,h,t,ed;
    string s;
    cout << "Input number from 0 to infinum: ";
    cin >> n;
    if (n == 0) {
        cout << "Congritulations, your number is not representable!" << endl;
        system("pause");
        return 0;
    }
    th = n / 1000;
    for (int i = 0; i < th; ++i) {
        s += "M";
    }
    h = n % 1000 / 100;
    if (h == 4) {
        s += "CD";
    }
    else if (h == 5) {
        s += "D";
    }
    else if ((h > 5) & (h < 9)) {
        s += "D";
        for (int i = 0; i < (h-5); ++i) {
            s += "C";
        }
    }
    else if ((h >= 0) & (h < 4)) {
        for (int i = 0; i < h; ++i) {
            s += "C";
        }
    }
    else if (h == 9) {
        s += "CM";
    }
    t = n % 100 / 10;
    if (t == 4) {
        s += "XL";
    }
    else if (t == 5) {
        s += "L";
    }
    else if ((t > 5) & (t < 9)) {
        s += "L";
        for (int i = 0; i < (t - 5); ++i) {
            s += "X";
        }
    }
    else if ((t >= 0) & (t < 4)) {
        for (int i = 0; i < t; ++i) {
            s += "X";
        }
    }
    else if (t == 9) {
        s += "XC";
    }
    ed = n % 10;
    if (ed == 4) {
        s += "IV";
    }
    else if (ed == 5) {
        s += "V";
    }
    else if ((ed > 5) & (ed < 9)) {
        s += "V";
        for (int i = 0; i < (ed - 5); ++i) {
            s += "I";
        }
    }
    else if ((ed >= 0) & (ed < 4)) {
        for (int i = 0; i < ed; ++i) {
            s += "I";
        }
    }
    else if (ed == 9) {
        s += "IX";
    }
    cout << "Your roman number: " << s << endl;
    system("pause");
    return 0;
}