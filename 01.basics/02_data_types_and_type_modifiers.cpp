#include<iostream>
using namespace std;

int main() {
    // Data types(int, float, double, char, bool)
    int integerVar = 751357;            // Size: 4 bytes
    float floatingPointVar = 73.17;     // Size: 4 bytes
    double doubleVar = 134.64534;       // Size: 8 bytes

    char characterVar = 'a';            // Size: 1 byte
    wchar_t wideCharacterVar = L'ם';    // Storing Hebrew character. Size: 2 bytes
                                        // There are also two other fixed-size character types char16_t and char32_t introduced in C++11
    bool booleanVar = false;            // Size: 1 byte

    
     
    
    // Type modifiers(signed, unsigned, short, long)

    // Data Types                         Size (in Bytes)                         Meaning
    // signed int	                      4	                                      used for integers (equivalent to int)
    // unsigned int	                      4	                                      can only store positive integers
    // short	                          2	                                      used for small integers (range -32768 to 32767)
    // unsigned short                     2                                       used for small positive integers (range 0 to 65,535)
    // long	at least                      4	                                      used for large integers (equivalent to long int)
    // unsigned long               	      4 or 8                               	  used for large positive integers or 0 (equivalent to unsigned long int)
    // long long	                      8                                    	  used for very large integers (equivalent to long long int).
    // unsigned long long	              8                   	                  used for very large positive integers or 0 (equivalent to unsigned long long int)
    // long double                        8, 12, or 16	                          used for large floating-point numbers
    // signed char	                      1                                    	  used for characters (guaranteed range -127 to 127)
    // unsigned char	                  1	                                      used for characters (range 0 to 255)

    return 0;
}