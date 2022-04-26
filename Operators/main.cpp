#include "Operators.h"
int main()
{
    setlocale(LC_ALL, "RU");
    Student student;
    std::cout << "Enter surname,name,middle_name,city,group,course" << endl;
    std::cin >> student;

    std::cout << "You entered: " << student << '\n';
    return 0;
}

