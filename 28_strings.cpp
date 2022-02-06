// how Strings work

// characters are individual letters , collection of letters is called string

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{

    const char *name = "Manraj\n"; // cant be edited

    "helko"; // no error , as it is a string literal

    const char name[9] = "Man\0Raj"; // Print 3 due \0 bcz a string omluy count elemets till \n or \0
    std::cout << std::strlen(name);

    // caution : Strings are stored in readonly section of memory

    // In assembly code it will look like this section

    // CONST SEGMENT
    // -------id------- 'Manraj' , memory ; 'string'
    // CONST ENDS

    // if we see the exe file of this below

    cout << "Manraj\n";

    // see 28_strings_pic which means they are embedded in exe file

    // editiing is allowed in only char array[]
    // editiing is not allowed in char * , const char *

    // other types

    /*  2 bytes usually */ const wchar_t *name2 = L"Manraj";  // wide char
    /*  2 bytes usually */ const char16_t *name3 = u"Manraj"; //  char16_t is an unsigned integer type used for 16-bit wide characters
    const char32_t *name4 = U"Manraj";                        //

    const char *example = R"( for multi
                                lien strings )"; // Ignores \n characters

    // note parenthses is must like ; R"()"

    // Also theere are many many other types

    string s;

    // there are in built string class having alot methods

// Iterators:

// used like 

//s.begin();

// begin - Return iterator to beginning (public member function )
// end- Return iterator to end (public member function )
// rbegin- Return reverse iterator to reverse beginning (public member function )
// rend- Return reverse iterator to reverse end (public member function )
// cbegin - Return const_iterator to beginning (public member function )
// cend - Return const_iterator to end (public member function )
// crbegin - Return const_reverse_iterator to reverse beginning (public member function )
// crend - Return const_reverse_iterator to reverse end (public member function )

// Capacity:

// size - Return length of string (public member function )
// length - Return length of string (public member function )
// max_size - Return maximum size of string (public member function )
// resize - Resize string (public member function )
// capacity - Return size of allocated storage (public member function )
// reserve - Request a change in capacity (public member function )
// clear = Clear string (public member function )
// empty - Test if string is empty (public member function )
// shrink_to_fit  - Shrink to fit (public member function )

// Element access:
// operator[] = Get character of string (public member function )
// at = Get character in string (public member function )
// back  = Access last character (public member function )
// front  = Access first character (public member function )

// Modifiers:
// operator+=    -     Append to string (public member function )
// append    -     Append to string (public member function )
// push_back    -     Append character to string (public member function )
// assign    -     Assign content to string (public member function )
// insert    -     Insert into string (public member function )
// erase    -     Erase characters from string (public member function )
// replace    -     Replace portion of string (public member function )
// swap    -     Swap string values (public member function )
// pop_back     -     Delete last character (public member function )

// String operations:
// c_str   -    Get C string equivalent (public member function )
// data   -    Get string data (public member function )
// get_allocator   -    Get allocator (public member function )
// copy   -    Copy sequence of characters from string (public member function )
// find   -    Find content in string (public member function )
// rfind   -    Find last occurrence of content in string (public member function )
// find_first_of   -    Find character in string (public member function )
// find_last_of   -    Find character in string from the end (public member function )
// find_first_not_of   -    Find absence of character in string (public member function )
// find_last_not_of   -    Find non-matching character in string from the end (public member function )
// substr   -    Generate substring (public member function )
// compare - Compare strings (public member function )


    return 0;
}