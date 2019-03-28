//
// Created by Ian Gillingham on 2019-03-28.
//

#include "Morse.h"

Morse::Morse()
    {
    morse_2_char_map[".-"] = "a";
    morse_2_char_map["-..."] =  "b";
    morse_2_char_map["-.-."] =  "c";
    morse_2_char_map["-.."] =  "d";
    morse_2_char_map["."] =  "e";
    morse_2_char_map["..-."] =  "f";
    morse_2_char_map["--."] =  "g";
    morse_2_char_map["...."] =  "h";
    morse_2_char_map[".."] =  "i";
    morse_2_char_map[".---"] =  "j";
    morse_2_char_map["-.-"] =  "k";
    morse_2_char_map[".-.."] =  "l";
    morse_2_char_map["--"] =  "m";
    morse_2_char_map["-."] =  "n";
    morse_2_char_map["---"] =  "o";
    morse_2_char_map[".--."] =  "p";
    morse_2_char_map["--.-"] =  "q";
    morse_2_char_map[".-."] =  "r";
    morse_2_char_map["..."] =  "s";
    morse_2_char_map["-"] =  "t";
    morse_2_char_map["..-"] =  "u";
    morse_2_char_map["...-"] =  "v";
    morse_2_char_map[".--."] =  "w";
    morse_2_char_map["-..-"] =  "x";
    morse_2_char_map["-.--"] =  "y";
    morse_2_char_map["--.."] =  "z";
    
    char_2_morse_map["a"] = ".-";
    char_2_morse_map["b"] = "-...";
    char_2_morse_map["c"] = "-.-.";
    char_2_morse_map["d"] = "-.";
    char_2_morse_map["e"] = ".";
    char_2_morse_map["f"] = "..-.";
    char_2_morse_map["g"] = "--.";
    char_2_morse_map["h"] = "....";
    char_2_morse_map["i"] = "..";
    char_2_morse_map["j"] = ".---";
    char_2_morse_map["k"] = "-.-";
    char_2_morse_map["l"] = ".-..";
    char_2_morse_map["m"] = "--";
    char_2_morse_map["n"] = "-.";
    char_2_morse_map["o"] = "---";
    char_2_morse_map["p"] = ".--.";
    char_2_morse_map["q"] = "--.-";
    char_2_morse_map["r"] = ".-.";
    char_2_morse_map["s"] = "...";
    char_2_morse_map["t"] = "-";
    char_2_morse_map["u"] = "..-";
    char_2_morse_map["v"] = "...-";
    char_2_morse_map["w"] = ".--";
    char_2_morse_map["x"] = "-..-";
    char_2_morse_map["y"] = "-.--";
    char_2_morse_map["z"] = "--..";

    }

Morse::~Morse()
    {

    }

char Morse::fromMorse(std::string morseCharacter)
    {
    char cRet;

    cRet = morse_2_char_map[morseCharacter].c_str()[0];

    return( cRet );
    }

std::string Morse::toMorse(const char c)
    {
    std::string strRet;


    strRet = this->char_2_morse_map.at(std::string(1,c));


    return( strRet );
    }
