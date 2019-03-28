//
// Created by Ian Gillingham on 2019-03-26.
//

#ifndef MORSEREADER_MORSEREADER_H
#define MORSEREADER_MORSEREADER_H

#include <string>
#include <stack>

using namespace std;

#include "Morse.h"

class MorseReader
    {
    public:
        MorseReader(void);
        MorseReader(string strFilename);
        ~MorseReader();

        string fromMorse(string strMorseChar);
        string fromMorseStream(string strMorseStream);
        string toMorse(string c);

    private:
        string m_strFilename;
        Morse  m_morse;

    };


#endif //MORSEREADER_MORSEREADER_H
