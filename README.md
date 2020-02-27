# Word Frequency Checker

This project was created for an assignment required by the course CSE 225 ("Data Structure and Algorithms") at North South University. 

# Features
Given a text file as input:
  - Shows the frequency of each word
  - Shows the position of the words
  - Information for each unique word is only shown once

### Description

This assignment required us to write a program which accepts the name of a text file from the command line. It can be assumed that the text file contains English text. The program outputs the frequency of each word in the file, along with a list of position indexes. The information for each unique word is shown only once.

If for example the input text file contains the following content:

> The quick brown fox jumps over the lazy dog. However, the dog really did not care.

The output will be the following:

```sh
Opening input.txt
Word: the - Frequency: 0.1875 - Position: 1 7 11 
Word: quick - Frequency: 0.0625 - Position: 2 
Word: brown - Frequency: 0.0625 - Position: 3 
Word: fox - Frequency: 0.0625 - Position: 4 
Word: jumps - Frequency: 0.0625 - Position: 5 
Word: over - Frequency: 0.0625 - Position: 6 
Word: lazy - Frequency: 0.0625 - Position: 8 
Word: dog - Frequency: 0.125 - Position: 9 12 
Word: however - Frequency: 0.0625 - Position: 10 
Word: really - Frequency: 0.0625 - Position: 13 
Word: did - Frequency: 0.0625 - Position: 14 
Word: not - Frequency: 0.0625 - Position: 15 
Word: care - Frequency: 0.0625 - Position: 16 
```

This example is extremely small. The program is written so that it can handle an arbitrary number of words, appearing in an arbitrary number of positions. The program can also reliably work with files larger than 1 MB. 

### How to run this code

```sh
g++ frequency_checker.cpp -o run
./run
Type the name of your file: input
```

