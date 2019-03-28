//
// Created by Ian Gillingham on 2019-03-28.
//

#ifndef MORSEREADER_MORSEWRITER_H
#define MORSEREADER_MORSEWRITER_H

#include <string>

using namespace std;

#include "Morse.h"


class MorseWriter
    {
    public:
        MorseWriter(void);
        MorseWriter(string strFilename);

        string toMorse(string strTextChar);
        string toMorseStream(string strTextStream);

    private:
        string m_strFilename;
        Morse  m_morse;

    };


#endif //MORSEREADER_MORSEWRITER_H
