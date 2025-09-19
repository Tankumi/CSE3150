#include "parser.h"
#include <iostream>

using std::cout, std::cin, std::endl;


int main(){
    std::string fullName;
    std::string email;
    cout << "Enter your full name: ";
    cin >> fullName;
    cout << "Enter your email: ";
    cin >> email;
    std::string* firstName = new std::string();
    std::string* lastName = new std::string();
    StringUtils::parseName(fullName, firstName, lastName);
    std::string username = StringUtils::getUsername(email);

    cout << "first name: " << firstName << ", last name: " << lastName << ", username: " << username << endl;
    delete firstName;
    delete lastName;
    return 0;
}
