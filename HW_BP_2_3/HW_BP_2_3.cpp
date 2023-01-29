// HW_BP_2_3.cpp : Задача 3. Вывод структуры

#include <iostream>

struct Address 
{
    std::string country;
    std::string city;
    std::string street;
    int numbHouse;
    int numbApart;
    int postalCode;

};

void printAdddress(Address print) 
{
    std::cout << "Страна: " << print.country << std::endl;

    std::cout << "Город: " << print.city << std::endl;

    std::cout << "Улица: " << print.street << std::endl;

    std::cout << "Номер дома: " << print.numbHouse << std::endl;

    std::cout << "Номер квартиры: " << print.numbApart << std::endl;

    std::cout << "Индекс: " << print.postalCode << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    Address print1 = {"Россия", "Санкт-Петербург", "Заречная", 25, 77, 194363 };
    
    printAdddress(print1);

    std::cout << std::endl;

    Address print2 = { "Россия", "Москва", "Лениногорская", 5, 55, 111625 };

    printAdddress(print2);

    return 0;
}
