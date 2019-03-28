#include <iostream>
#include "MorseReader.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    string testMorseCharacter = string(".-");

    MorseReader *morse_reader = new MorseReader();

    char c = morse_reader->fromMorse(testMorseCharacter);

    std::cout << testMorseCharacter << " == " << c << std::endl;

    return 0;
}