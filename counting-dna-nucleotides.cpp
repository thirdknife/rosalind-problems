#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {

    std::map<char,int> base;

    basic_string<char> space = " ";

    base['A'] = 0;
    base['C'] = 0;
    base['G'] = 0;
    base['T'] = 0;

    basic_string<char> sequence = argv[1];

    for ( std::string::iterator it=sequence.begin(); it!=sequence.end(); ++it){
        base[*it]++; //
    }

    std::cout << base['A'] << space << base['C'] << space << base['G'] << space << base['T'];
    std::cout << '\n';

    return 0;
}