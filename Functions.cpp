#include <iostream>
using namespace std;
bool checkPrime(int n);
int main() {
    int n, i;
    bool flag = false;
    cout << "Enter positive int: ";
    cin >> n;
    for(i = 2; i <= n/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(n - i)) {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
      cout << n << " can't be solved";
    return 0;
}
bool checkPrime(int n)
{
    int i;
    bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
