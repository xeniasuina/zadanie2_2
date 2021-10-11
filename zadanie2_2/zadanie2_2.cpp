#include <iostream>
using namespace std; 
int fib(int n) {
    unsigned long int fn, f1 = 0, f2 = 1; 
    if (n == 1) {
        return f1;
    }
    if (n == 2) {
        return f2;
    }
    for (int i = 2; i < n; i += 1) {
        fn = f1 + f2;
        f1 = f2; 
        f2 = fn; 
    }
    return fn;
}

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n ";
    cin >> n;
    cout << fib(n) << endl;
}
