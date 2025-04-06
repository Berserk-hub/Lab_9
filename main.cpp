#include <iostream>
#include <cmath>
using namespace std;


                           //Problem1
// int multiply(int x, int y) {
//     if (y == 0)
//         return 0;
//     if (y > 0)
//         return x + multiply(x, y - 1);
//     if (y < 0)
//         return -multiply(x, -y);
//     return 0;
// }
//
// int main() {
//     int num1, num2;
//
//     cout << "Enter first number"<<endl;
//     cin >> num1;
//
//     cout << "Enter second number"<<endl;
//     cin >> num2;
//
//     int product = multiply(num1, num2);
//     cout << "Product is " << product << endl;
// }


                     //Problem2
// int factorialFinder(int x) {
//     if (x==0) {
//         return 1;
//     }
//     else {
//         return x*factorialFinder(x-1);
//     }
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << factorialFinder(n);
// }


                  //Problem3
// int fibonacci(int x) {
//     if (x == 0) {
//         return 0;
//     }
//     if (x == 1) {
//         return 1;
//     }
//     else {
//         return fibonacci(x - 1) + fibonacci(x - 2);
//     }
// }
// int main() {
//     int x;
//     cout << "Enter the number: " << endl;
//     cin>>x;
//     cout << fibonacci(x) << endl;
// }


                     //Problem4
// int sumFinder(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     else {
//         return n + sumFinder(n - 1);
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number of terms: "<<endl;
//     cin >> n;
//     cout << sumFinder(n) << endl;
// }

                //Problem5
// int decendingNumber(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     else {
//         cout << n << " ";
//         return decendingNumber(n - 1);
//     }
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << decendingNumber(n);
//
// }


                        //Problem6
// int countDigits(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return 1 + countDigits(n / 10);
// }
// int main() {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;
//     cout << countDigits(n) << endl;
//     return 0;
// }


                          //Problem7
// int sumOfDigits(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return (n % 10) + sumOfDigits(n / 10);
// }
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     cout<<sumOfDigits(num);
//     return 0;
// }


                               //Problem8
// int power(int x, int y) {
//     if (y == 0) {
//         return 1;
//     }
//     else {
//         return x * power(x, y - 1);
//     }
// }
// int main() {
//     int x, y;
//     cout<<"Enter base number: "<<endl;
//     cin>>x;
//     cout<<"Enter exponent number: "<<endl;
//     cin>>y;
//
//     cout<<"The power is: "<<power(x,y);
// }


                    //Problem9
// int countDigits(int n) {
//     if (n == 0) return 0;
//     return 1 + countDigits(n / 10);
// }
// int reverseNumber(int n, int digits) {
//     if (n == 0){
//         return 0;
// }
// else{
//     return (n % 10) * pow(10, digits - 1) + reverseNumber(n / 10, digits - 1);}
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int reversed = reverseNumber(abs(n), countDigits(abs(n)));
//     if (n < 0) reversed *= -1;
//     cout << reversed << endl;
// }


                     //Problem10
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0) {
//         return rev;
//     }
//     else {
//         return reverseNumber(n / 10, rev * 10 + (n % 10));
//     }
// }
// bool isPalindrome(int n) {
//     return n == reverseNumber(n);
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (isPalindrome(n))
//         cout <<" true "<<  endl;
//     else
//         cout << " false "<< endl;
//
//     return 0;
// }


                                 //Problem11
// bool isPrimeRecursive(int n, int i = 2) {
//     if (n <= 1) {
//         return false;
//     }
//     if (i * i > n) {
//         return true;
//     }
//     if (n % i == 0){
//     return false;
// }
//     else {
//         return isPrimeRecursive(n, i + 1);
//     }
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     if (isPrimeRecursive(n))
//         cout <<" true"<<endl;
//     else
//         cout << " false"<<endl;
// }
