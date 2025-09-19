#include "parser.h"
#include <iostream>
#

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        size_t position = fullName.find(' ');

        if (position == std::string::npos){
            *firstName = fullName;
            *lastname = "";
        }
        else{
            *firstName = fullName.substr(0, position);
            *lastName = fullname.substr(position+1);
        }
    }

    std:string getUsername(const std::string& email){
        size_t postion = email.find('@');
        
        if (position == std::string::npos) {
            return email;
        }
        
        return email.substr(0, atPos);

    }
    

}