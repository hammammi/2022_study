#include <iostream>
#include <string>
  

int main(void)
{
    std::string id, y;
    int age = 2019;

    std::cin >> id;
    y = id.substr(0,2);

    char c = id[7];
    char s;
    int year = std::stoi(y);



    switch (c) {
    case '1':
        year += 1900;
        s = 'M';
        break;
    case '2':
        year += 1900;
        s = 'W';
        break;
    case '3':
        year += 2000;
        s = 'M';
        break;
    case '4':
        year += 2000;
        s = 'W';
        break;
    }
   
    age -= (year-1);
    std::cout << age << ' ' << s << std::endl;
    
    return 0;
}