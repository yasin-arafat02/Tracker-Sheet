#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}
int main() {
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << (isPalindrome(n) ? "Yes" : "No") << endl;
    }
}
