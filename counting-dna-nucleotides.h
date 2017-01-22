#include <iostream>
#include <map>

using namespace std;

void count_dna_nucleotides(basic_string<char> sequence) {

    std::map<char,int> base; //using c++ map to hold the counts

    const basic_string<char> space = " "; //static space for printing only

    //setting count to 0
    base['A'] = 0;
    base['C'] = 0;
    base['G'] = 0;
    base['T'] = 0;

    //iterating all the input and incrementing counts accordingly

    for ( std::string::iterator it=sequence.begin(); it!=sequence.end(); ++it){
        base[*it]++;
    }

    //std out all keys
    std::cout << base['A'] << space << base['C'] << space << base['G'] << space << base['T'];
    std::cout << '\n';
}
