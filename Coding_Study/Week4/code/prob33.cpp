#include <iostream>
#include <algorithm>
  
bool compare(int a, int b) {
    return a > b;
}

int main(void)
{
    int n = 0,m =0,count=0;
    std::cin >> n; 
    int* score = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> score[i];

    }
    std::sort(score, score + n, compare);


    int i = 0;

	for (int j = 1; j < n; j++) {
		if (score[i] != score[j]) {
			i = j;
			count++;
		}
        if (count == 2) {
            std::cout << score[i];
            break;
        }
       
	}
 

    delete[] score;
    
    return 0;
}