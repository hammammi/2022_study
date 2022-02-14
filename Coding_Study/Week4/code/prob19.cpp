#include <iostream>

int main(void)
{
    int n = 0,m =0,count=0;
    std::cin >> n; 
    int* height = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> height[i];

    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (height[i] > height[j] ) {
                m++;
            }
        }
        if (m == (n - i-1)) {
            count++;
        }
        m = 0;
    }
    std::cout << count << std::endl;


    delete[] height;
    
    return 0;
}