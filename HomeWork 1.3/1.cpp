#include <iostream>
struct data
{
    
    std::string city = "Москва";
    std::string street = "Арбат";
    int house_number = 12;
    int apartment_number = 8;
    int index = 123456;


};

void print_data(data address_void)
{
    std::cout << "Город: " << address_void.city << std::endl;

    std::cout << "Улица: " << address_void.street << std::endl;

    std::cout << "Номер дома: " << address_void.house_number << std::endl;

    std::cout << "Номер квартиры: " << address_void.apartment_number << std::endl;

    std::cout << "Индекс: " << address_void.index << std::endl;
};

int main()
{
    setlocale (LC_ALL, "Russian");
    std::system("chcp 1251");
    data address;
    print_data(address);
           
}


   


