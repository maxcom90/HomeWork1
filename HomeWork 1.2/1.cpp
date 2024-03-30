

#include <iostream>


struct data
{
    int bank_aсcount;
    std::string user_name;
    double balance;
    double new_balance;
};

void change_data(data* person1)
{
    std::cout << "Введите номер счёта : " << std::endl;
    std::cin >> person1->bank_aсcount;
    std::cout << "Введите имя владельца : " << std::endl;
    std::cin >> person1->user_name;
    std::cout << "Введите баланс : " << std::endl;
    std::cin >> person1->balance;
    std::cout << "Введите новый баланс : " << std::endl;
    std::cin >> person1->new_balance;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    data person;
    change_data(&person);
    std::cout << "Ваш счет: " << person.user_name << " " << person.bank_aсcount << " " << person.new_balance << std::endl;
        
}


   


