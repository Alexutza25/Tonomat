#ifndef LABORATOR9_10_OOP_INVALIDCODEEXCEPTION_H
#define LABORATOR9_10_OOP_INVALIDCODEEXCEPTION_H

#include <iostream>
#include <stdexcept>

using namespace std;


class InvalidCodeException : public invalid_argument {
private:
    char* message;
public:
    InvalidCodeException(char* msg): invalid_argument(msg), message(msg) {}
    char* what() {
        return message;
    }
};


#endif //LABORATOR9_10_OOP_INVALIDCODEEXCEPTION_H
