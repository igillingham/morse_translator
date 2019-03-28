//
// Created by Ian Gillingham on 2019-03-26.
//

#include "MorseReader.h"

MorseReader::MorseReader()
    {

    }

MorseReader::MorseReader(string strFilename)
    {
    this->m_strFilename = strFilename;
    }

char MorseReader::fromMorse(string strMorseChar)
    {
    char cRet = m_morse.fromMorse(strMorseChar);
    return (cRet);
    }

string MorseReader::toMorse(char c)
    {
    string strRet = m_morse.toMorse(c);
    return (strRet);
    }

