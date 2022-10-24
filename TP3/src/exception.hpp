#include <string>
#include <exception>
#include <iostream>

class ExceptionChaine : public std::exception{
    private:
        std::string message;
    public:
        ExceptionChaine(const std::string & msg) : message(msg){}
        virtual const char* what() const noexcept override{
            return message.c_str();
        }
};