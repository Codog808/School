/* 
   Original program by Wes Peterson, modified by William Albritton
   Example using string-related function getline() 
*/

#include <iostream> //defines I/O functions
#include <string.h> //for C style string functions
#include <string>   //for C++ style string class and functions
#include <fstream>  //for file processing
#define MAX 20

using namespace std;

int main(int argc, char *argv[]){
  //C style string
  char inputFile[MAX] = {'\0'};
  char outputFile[MAX] = {'\0'};
  
  //C++ style string
  string line = "line";

  //check for commandline input for input file name
  if(argc>=2) strcpy(inputFile, argv[1]);
  //if no commandline input, ask user for input file
  else {
    cout << "Enter Input File Name: ";
    cin >> inputFile;
  }
  
  /*
  makes an ifstream object for file input
  "fileInputStream" is the ifstream object, 
  and inputFileName is the parameter for the constructor
  NOTE: inputFileName has to be a C style string. NOT a C++ style string.
  */
  ifstream fileInputStream(inputFile);
  //if the file cannot be opened, "fileInputStream" ifstream object is NULL
  
	//if(NULL==fileInputStream) { //older compiler way
	if(!fileInputStream.is_open()){ //newer way
    cout << "Cannot open file " << inputFile << endl;
    //quit program
    return 1;
  }
  
  //check for commandline input for output file name
  if(argc>=3) strcpy(outputFile, argv[2]);
  //if no commandline input, ask user for input file
  else {
    cout << "Enter Output File Name: ";
    cin >> outputFile;
  }  
  
  //set up connection to output file
  //NOTE: outputFileName has to be a C style string. NOT a C++ style string.
  ofstream fileOutputStream(outputFile);
  
	//if(NULL==fileOutputStream) { //older compiler way
  if(!fileOutputStream.is_open()){ //newer compiler way
    cout << "Cannot open file " << outputFile << endl;
    return 1;
  }
  
  //read one line and display, until end of file
  while(!fileInputStream.eof()) {
    /*
      If s is a string and w is an input stream, 
      then getline(w, s) reads a line from stream w into s
    */
    getline(fileInputStream, line);
    //write to output file
    fileOutputStream << "<" << line << ">" <<    endl;
    //output to screen
    cout << "<" << line << ">" <<    endl;
  }
  return 0;
}

/*
Enter Input File Name: input.txt
Enter Output File Name: output.txt
<ABC>
<123>
<this is a pen>
<the quick brown fox jumped over the lazy dog>

 */
