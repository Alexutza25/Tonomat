#ifndef LABORATOR9_10_OOP_ELEMENTNOTFOUNDEXCEPTION_H
#define LABORATOR9_10_OOP_ELEMENTNOTFOUNDEXCEPTION_H

#include <stdexcept>

class ElementNotFoundException :
        public std::runtime_error{
private:
    char* message;
public:
    ElementNotFoundException(char* msg):
            std::runtime_error(msg), message(msg){
    }
    char* what(){
        return message;
    }

};

#endif //LABORATOR9_10_OOP_ELEMENTNOTFOUNDEXCEPTION_H
