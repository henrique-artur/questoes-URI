#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    double fibonacci(float num);
    float num;
    cout.precision(1);
    cout.setf(ios::fixed);
    cin >> num;
    cout << fibonacci(num) << endl;
    return 0;
}

double fibonacci(float num){
    double fibo = 0.0;
    return fibo = (pow((1+sqrt(5))/2, num) - pow((1-sqrt(5))/2, num)) / sqrt(5);
}


