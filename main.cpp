#include <iostream>
using namespace std;

int main() {
    int a, b, n;

    cout << "Input nilai suku pertama (a): ";
    cin >> a;
    cout <<  "Input nilai beda (b): ";
    cin >> b;
    cout << "Input nilai suku ke-n yang ingin dihitung (n): ";
    cin >> n;

    int suku_ke_n = a + (n - 1) * b;
    int jumlah_suku_ke_n = (n / 2.0) * (2 * a + (n - 1) * b);

    cout << "Suku ke-" << n << " dari deret aritmatika adalah: " << suku_ke_n << endl;
    cout << "Jumlah suku ke-" <<n<< " dari deret aritmatika adalah:" <<jumlah_suku_ke_n << endl;

    return 0;
}
