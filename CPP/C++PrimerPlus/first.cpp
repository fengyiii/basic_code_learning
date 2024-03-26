#include <iostream>
#include <cmath>
#include <climits>

void first(void){
    int32_t var;

    std::cout << "Hi there." << std::endl;
    std::cout << "See you next time." << std::endl;

    std::cin >> var;
    std::cout << "var = " << var << std::endl;
}

void math_sqrt(void){
    double area, side;

    std::cout << "Enter floor area: ";
    std::cin >> area;
    side = sqrt(area);
    std::cout << std::endl;
    std::cout << "side = " << side << std::endl;

}

void print_max(void){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    std::cout << "int is " << sizeof(int) << "bytes.\n";
    std::cout << "short is " << sizeof(short) << "bytes.\n";
    std::cout << "long is " << sizeof(long) << "bytes.\n";
    std::cout << "long long is " << sizeof(long long) << "bytes.\n";

    std::cout << "Maxium values:\n";
    std::cout << "int: " << std::hex << n_int << std::endl;
    std::cout << "short: " << std::hex << n_short << std::endl;
    std::cout << "long: " << std::hex << n_long << std::endl;
    std::cout << "long long: " << std::hex << n_llong << std::endl;

    std::cout << "Minimum int value = " << INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;
    
}

void print_variable(void){
    char ch = 'M';
    int n_ch = ch;
    char cch = ch;

    std::cout << "ASCII code for " << ch << " is " << n_ch << std::endl;
    std::cout << cch << std::endl;
    std::cout.put(cch);
    std::cout.put('\n');
    std::cout << '$' ;
    std::cout << static_cast<int>('$') ;
}

void enter_and_backward(void){
    long code;

    std::cout << "\aEnter your number :_____\b\b\b\b";
    std::cin >> code;
    std::cout << "\aYour code is : " << code << std::endl;
}

void wide_char_test(void){
    wchar_t code = L'T';
    std::cout << L"TALL "<< std::endl;
    std::cout << code << std::endl;
    std::wcout << L"TALL " << code << std::endl;

    char16_t ch1 = u'q';
    char32_t ch2 = U'\U0000222B';
    std::cout << ch1 << ' ' << ch2 << std::endl;
    std::cout.put(ch1);
    std::cout.put(ch2);
    std::wcout << ch1 << ' ' << ch2 << std::endl;
    std::putwchar(ch1);
    std::putchar(ch2);
}

void typecast_test(void){
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);

    std::cout << "auks = " << auks << ", bats = ";
    std::cout << bats << ", coots = " << coots << std::endl;
    std::cout << "19.99 + 11.99 = " << 19.99 + 11.99 << std::endl;

    char ch = 'Z';
    std::cout << "Code for \'" << ch << "\' is :";
    std::cout << (int)ch << std::endl;
}

int main(void){
    typecast_test();
    return 0;
}