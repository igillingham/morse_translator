//
// Created by Ian Gillingham on 2019-03-26.
//

#include "MorseReader.h"
#include <queue>

MorseReader::MorseReader()
    {

    }

MorseReader::MorseReader(string strFilename)
    {
    this->m_strFilename = strFilename;
    }

string MorseReader::fromMorse(string strMorseChar)
    {
    string strRet = m_morse.fromMorse(strMorseChar);
    return (strRet);
    }

string MorseReader::fromMorseStream(string strMorseStream)
    {
    string strRet;
    string strSpace = string(" ");
    string strWord("");
    string morseCharacter;

    int iLen = strMorseStream.length();

    for (int i = 0; i < iLen; i++)
        {
        string strChar = strMorseStream.substr(i,1);
        if (strChar == strSpace) // Space or end of stream detected, so submit morse character
            {
            string alphaChar = m_morse.fromMorse(morseCharacter);
            if (alphaChar == strSpace)
                {
                // Second space, so end of word
                // We just need to insert a space between words, so as alphaChar is space, just continue.
                }
            strRet += alphaChar;
            morseCharacter = "";
            }
        else
            {
            morseCharacter += strChar;
            if (i == (iLen - 1)) // Very last character must not be missed off.
                {
                string alphaChar = m_morse.fromMorse(morseCharacter);
                strRet += alphaChar;
                }
            }

        }

    return (strRet);
    }

string MorseReader::toMorse(string c)
    {
    string strRet = m_morse.toMorse(c);
    return (strRet);
    }

