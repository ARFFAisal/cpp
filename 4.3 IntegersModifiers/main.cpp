#include <iostream>


int main(){

    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    //unsigned int value4 {-5}; // Compiler error.

    //short and long
    short  short_var {-32768}; //2bytes
    short int short_int {455}; //
    signed short signed_short {122}; //
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55}; //4bytes
    signed signed_var {66}; //
    signed int signed_int {77}; //
    unsigned int unsigned_int {77};

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888}; //8Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};


    std::cout << "Short variable : " << short_var << " , size : " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Short Int : " << short_int << " , size : " << sizeof(short int) << "byte" << std::endl;
    std::cout << "Signed Short  : " << signed_short << " , size : " << sizeof(signed short) << "byte" << std::endl;
    std::cout << "Signed Short Int : " << signed_short_int << " , size : " << sizeof(signed short int) << "byte" << std::endl;
    std::cout << "Unsigned Short Int : " << unsigned_short_int << " , size : " << sizeof(unsigned short int) << "byte" << std::endl;
    std::cout << "---------------------- " << std::endl;
    


    return 0;
} 