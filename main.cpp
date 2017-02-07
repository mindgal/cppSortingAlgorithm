#include <iostream>
#include "utils.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "quicksort.h"

#include "rot13.h"

int main()
{
    std::string orig("LA SCENA IN CUI IL PERSONAGGIO PRINCIPALE MUORE NON MI PIACE");
    std::cout <<  "orig: " << orig << '\n';
    std::string rotted = rot13(orig);
    std::cout << "rotared13: " << rotted << '\n';
    std::cout << "Derotated: " << rot13(rotted);
}
