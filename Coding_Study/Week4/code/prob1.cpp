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
            printf("���� ū ���� �Է��ϼ���");
        }
    }
    else { printf("�Է��μ��� ��� 3 �̻� 1000 ���Ͽ��� �մϴ�."); }
    

    return 0;
}