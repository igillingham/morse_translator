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
    morse_2_char_map[".--"] =  "w";
    morse_2_char_map["-..-"] =  "x";
    morse_2_char_map["-.--"] =  "y";
    morse_2_char_map["--.."] =  "z";

    morse_2_char_map[".----"] =  "1";
    morse_2_char_map["..---"] =  "2";
    morse_2_char_map["...--"] =  "3";
    morse_2_char_map["....-"] =  "4";
    morse_2_char_map["....."] =  "5";
    morse_2_char_map["-...."] =  "6";
    morse_2_char_map["--..."] =  "7";
    morse_2_char_map["---.."] =  "8";
    morse_2_char_map["----."] =  "9";
    morse_2_char_map["-----"] =  "0";

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

    char_2_morse_map["1"] = ".----";
    char_2_morse_map["2"] = "..---";
    char_2_morse_map["3"] = "...--";
    char_2_morse_map["4"] = "....-";
    char_2_morse_map["5"] = ".....";
    char_2_morse_map["6"] = "-....";
    char_2_morse_map["7"] = "--...";
    char_2_morse_map["8"] = "---..";
    char_2_morse_map["9"] = "----.";
    char_2_morse_map["0"] = "-----";
    char_2_morse_map[" "] = "  ";
    }

Morse::~Morse()
    {

    }

std::string Morse::fromMorse(std::string morseCharacter)
    {
    std::string strRet = " "; // Return space by default

    std::map<std::string, std::string>::iterator it = morse_2_char_map.find(morseCharacter);
    if (it != morse_2_char_map.end())
        {
        // Character in Morse table, so assume space
        strRet = morse_2_char_map[morseCharacter].c_str()[0];
        }

    return( strRet );
    }

std::string Morse::toMorse(std::string c)
    {
    std::string strRet = " "; // Return space by default

    std::map<std::string, std::string>::iterator it = char_2_morse_map.find(c);
    if (it != char_2_morse_map.end())
        {
        strRet = char_2_morse_map.at(c);
        }


    return( strRet );
    }
