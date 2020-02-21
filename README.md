# Word Frequency Checker

This project was created for an assignment required by the course CSE 225 ("Data Structure and Algorithms") at North South University. 

# Features!
Given a text file as input:
  - Shows the frequency of each word
  - Shows the position of the words
  - Information for each unique word is only shown once

### Task

This assignment required us to write a program which accepts the name of a text file from the command line. It can be assumed that the text file contains English text. The program should then output the frequency of each word in the file, along with a list of position indexes. The information for each unique word should be shown only once.

If for example the input text file contains the following content:

> The quick brown fox jumps over the lazy dog. However, the dog really did not care.

The output should be the following:

>Total number of words: 16

>Word Frequencies and Positions:

> the - 0.1875: 1,7,11
> quick - 0.0625: 2
> brown - 0.0625: 3
> fox - 0.0625: 4
> jumps - 0.0625: 5
> over - 0.0625: 6 
> lazy - 0.0625: 8
> dog - 0.125: 9, 12
> however - 0.0625: 10
> really - 0.0625: 13 
> did - 0.0625: 14 
> not - 0.0625: 15 
> care - 0.0625: 16 


It must be noted this example is extremely small. The program should be written so that it can handle an arbitrary number of words, appearing in an arbitrary number of positions. The program must also reliably work with files larger than 1 MB. 

### How to run this code

```sh
$ g++ frequency_checker.cpp -o run
$ ./run
$ Type the name of your file: input
```

