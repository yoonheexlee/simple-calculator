// 두 숫자와 연산자를 입력받아 계산 결과를 출력하는 프로그램을 작성
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "두 숫자와 연산자를 입력하세요: ";
    cin >> num1 >> num2 >> op;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "0으로 나눌 수 없습니다." << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "잘못된 연산자입니다." << endl;
            break;
    }

    return 0;
}

// 입력 예시
// 두 숫자와 연산자를 입력하세요: 10 20 +
// 출력 예시
// 10 + 20 = 30
