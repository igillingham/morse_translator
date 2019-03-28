//
// Created by Ian Gillingham on 2019-03-26.
//

#ifndef MORSEREADER_MORSEREADER_H
#define MORSEREADER_MORSEREADER_H

#include <string>
using namespace std;

#include "Morse.h"

class MorseReader
    {
    public:
        MorseReader(void);
        MorseReader(string strFilename);
        ~MorseReader();

        char fromMorse(string strMorseChar);
        string toMorse(char c);

    private:
        string m_strFilename;
        Morse  m_morse;

    };


#endif //MORSEREADER_MORSEREADER_H
