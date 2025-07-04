#include<iosteam>
using namespace std;
int main(){
    // decimal to binary conversion
    int n, i = 0, binary[32];
    cout << "Enter a decimal number: ";
    cin >> n;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

}
