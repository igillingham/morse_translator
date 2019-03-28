//
// Created by Ian Gillingham on 2019-03-28.
//

#ifndef MORSE_MORSE_H
#define MORSE_MORSE_H

#include <string>
#include <map>

class Morse
    {
    public:
        Morse(void);
        ~Morse();
        std::string fromMorse(std::string morseCharacter);
        std::string toMorse(std::string c);

    private:
        std::map<std::string, std::string> morse_2_char_map;
        std::map<std::string, std::string> char_2_morse_map;

    };

#endif //MORSE_MORSE_H
