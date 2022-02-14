#include <iostream>

int main(void)
{
    int a = 0, b = 0, c = 0;

    std::cin >> a; std::cin >> b;
    if ((a>=3 && a<= 1000) && (b>=3 && b<= 1000)) {
        if (b < a) {
            for (int i = a; i > 0; i--) {
                if (i % b == 0) {
                    c += i;
                }
            }
            std::cout << c << std::endl;
        }
        else {
            printf("먼저 큰 수를 입력하세요");
        }
    }
    else { printf("입력인수는 모두 3 이상 1000 이하여야 합니다."); }
    

    return 0;
}