#pragma once
#include <iostream>

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName);
    void getUsername(const std::string& email);
}