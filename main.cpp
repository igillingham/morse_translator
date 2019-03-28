#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include "MorseReader.h"
#include "MorseWriter.h"

int main(int argc, char **argv)
    {
    std::cout << "Morse Reader" << std::endl;

    MorseReader *morse_reader = new MorseReader();
    MorseWriter *morse_writer = new MorseWriter();


    char c;
    const char * prog = argv[0];

    if (argc < 2)
        {
            std::cout << "usage: " << prog << std::endl;
            std::cout << " -t : translate the assets/text.txt file to morse" << std::endl;
            std::cout << " -m : translate the assets/morse.txt file to text" << std::endl;
            std::cout << " -x : some ad-hoc tests" << std::endl;
            std::cout << " -h : help" << std::endl;
        }

    // Get the command line options
    while((++argv)[0] && argv[0][0] == '-')
        {
        // Do what has been requested
        while((c = *++argv[0]))
            {
            switch(c)
                {
                case 't':
                    {
                    std::cout << "Translating text file to Morse" << std::endl;

                    std::ifstream ttext("assets/text.txt");
                    std::string strText((std::istreambuf_iterator<char>(ttext)),
                                        std::istreambuf_iterator<char>());
                    string strMorseStream = morse_writer->toMorseStream(strText);
                    std::cout << strMorseStream << std::endl;
                    }
                    break;
                case 'm':
                    {
                    std::cout << "Translating Morse file to text" << std::endl;
                    std::ifstream tmorse("assets/morse.txt");
                    std::string strMorse((std::istreambuf_iterator<char>(tmorse)),
                                         std::istreambuf_iterator<char>());
                    string text = morse_reader->fromMorseStream(strMorse);
                    std::cout << text << std::endl;
                    }
                    break;
                case 'x':
                    {
                    std::cout << "Translating Morse string to text" << std::endl;
                    string testMorseStream = string(".. .- -.  .-- .- ...  .... . .-. .");
                    string textExp = morse_reader->fromMorseStream(testMorseStream);

                    std::cout << testMorseStream << std::endl;
                    std::cout << textExp << std::endl;

                    std::cout << "Translating text string to Morse" << std::endl;
                    string strTextStream = "send morse at 12 wpm";
                    string strTestMorseStream = morse_writer->toMorseStream(strTextStream);

                    std::cout << strTextStream << std::endl;
                    std::cout << strTestMorseStream << std::endl;
                    }
                    break;
                case 'h':
                    {
                    std::cout << "Help is not yet available (sorry!)" << std::endl;
                    }
                    break;
                default:
                    {
                    std::cout << "Option " << c << " is unknown." << std::endl;
                    std::cout << "usage: " << prog << " <-tmx -h>" << std::endl;
                    }
                    return 1;
                }
            }
        }

    return 0;
    }
