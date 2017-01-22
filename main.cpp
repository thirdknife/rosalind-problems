#include "counting-dna-nucleotides.h"

using namespace std;

int main(int argc, char *argv[]) {

    basic_string<char> sequence = argv[1];

    count_dna_nucleotides(sequence);

    return 0;
}