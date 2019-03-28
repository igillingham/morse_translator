//
// Created by Ian Gillingham on 2019-03-28.
//

#include "MorseWriter.h"

MorseWriter::MorseWriter(void)
    {

    }

string MorseWriter::toMorse(string strTextChar)
    {
    string strRet = m_morse.toMorse(strTextChar);

    return strRet;
    }

string MorseWriter::toMorseStream(string strTextStream)
    {
    string strRet;
    int iLen = strTextStream.length();

    for (int i = 0; i < iLen; i++)
        {
        string strChar = strTextStream.substr(i, 1);
        string strMorse = m_morse.toMorse(strChar);
        strRet += strMorse + " ";
        }

    return strRet;
    }

