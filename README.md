# Morse Translator
### Ian Gillingham, March 2019
Breif:
Translate a file or stream of morse code to text and reverse.

The aim of the coding challenge is to produce 2 C++ applications, demonstrating an understanding of the following:
The first application would read in a plain text file from the local file structure and convert it to Morse Code (a text file using ".", "-" and space).
The second application reads the Morse Code file and outputs the original text.
A single object orientated implementation should be completed, with an appropriate test harness. In addition recommendations of improvements for a system translating significant quantities of morse code data to text should be provided.


## Installation
git clone https://github.com/igillingham/morse_translator.git  

## Usage
usage: morseReader
 -t : translate the assets/text.txt file to morse
 -m : translate the assets/morse.txt file to text
 -x : some ad-hoc tests
 -h : help
 
## Notes:
For the sake of expediency, there is very little in the way of commentary.
Documentation was to have been established on Readthedocs, but time constraints have put his on hold. 

This is quite a minimalistic approach to a Morse translator, very much more could be designed in
to turn it into a much more versatile application.

Instead of two programs, I have incorporated translation in both directions with the use of 
command line switches.

For much larger streams to be translated, then this approach would run up against string buffer sizes.
In this case it would be necessary to consider circular buffers, or using std::queue.
At this stage, there exists very little checking on data validity or exception handling.
 
  
## Further documentation at:
https://morse-translator.readthedocs.io/
