#include <iostream>
#include "MorseReader.h"
#include "MorseWriter.h"

int main() {
    std::cout << "Morse Reader" << std::endl;

    string testMorseCharacter = string(".-");
    string testMorseStream = string(".. .- -.  .-- .- ...  .... . .-. .");

    MorseReader *morse_reader = new MorseReader();

    string c = morse_reader->fromMorse(testMorseCharacter);

    std::cout << testMorseCharacter << " == " << c << std::endl;


    string text = morse_reader->fromMorseStream(testMorseStream);

    std::cout << testMorseStream << std::endl;
    std::cout << text << std::endl;


    MorseWriter *morse_writer = new MorseWriter();
    string strTextStream = "send morse at 12 wpm";
    string strMorseStream =  morse_writer->toMorseStream(strTextStream);

    std::cout << strTextStream << std::endl;
    std::cout << strMorseStream << std::endl;


    return 0;
}