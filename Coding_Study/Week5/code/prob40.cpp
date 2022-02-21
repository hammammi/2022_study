#include <iostream>
#include <algorithm>

int main(void)
{
    int n = 0, m = 0, count=0;
    int ele[60000];
    int com[30000];
    
    std::cin >> n;
    int start, end;


    for (int i = 0; i < n; i++) {
        std::cin >> ele[i];
        // std::cout << ' ' << ele[i] << std::endl;
    }

    std::cin >> m;

    for (int i = n; i < n+m; i++) {
        std::cin >> ele[i];
        // std::cout << ' ' << ele[i] << std::endl;
    }

    for (int start=0;start<n;start++){
        // std::cout << n << std::endl;
        for (int end=n;end<n+m;end++){
            if (ele[start]==ele[end]){
                com[count] = ele[start];
                // std::cout << ele[count] << std::endl;
                count++;
            }
        }
    }

    std::sort(com,com+count);
    
    for (int i = 0;i<count;i++){
        std::cout << com[i] << ' ';
    }

    return 0;
}