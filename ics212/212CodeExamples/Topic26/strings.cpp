/* 
   Original program by Wes Peterson, modified by William Albritton 
   C++ String function examples
*/

#include <iostream>
#include <string>  //C++ string library

using namespace std;

int main(){
  //initialize a string
  string sentence = "This is a string.";  
  // output a string
  cout<<"sentence = "<<sentence<<endl;
  // output characters from a string
  cout<<"sentence[0] = "<<sentence[0]<<endl;
  cout<<"sentence[1] = "<<sentence[1]<<endl;
  cout<<"sentence[2] = "<<sentence[2]<<endl;
  /*
    sentence = This is a string.
    sentence[0] = T 
    sentence[1] = h
    sentence[2] = i
  */
  
  //length will return the number of characters in the string
  cout<<"sentence.length() = "<<sentence.length()<<endl; //17
  
  //substr(pos,len) return substring, starting at character position pos and spans len characters.
  int length = sentence.length();
  cout<<"1st half = "<<sentence.substr(0,length/2)<<endl;  
  cout<<"2nd half = "<<sentence.substr(length/2,length)<<endl; 
  /*
    1st half = This is 
    2nd half = a string.
  */		
  
  //instantiate an array of strings
  string a[9] = {"The ", "quick ", "brown ", "fox ", "jumped ",
                 "over ", "the ", "lazy ", "dog."};
  // output the array of strings
  cout << a[0] << a[1] << a[2] << a[3] << a[4] << a[5] << a[6] << a[7] << a[8] << endl;
  /*
    The quick brown fox jumped over the lazy dog.
  */
  
  // concatenate (add) strings together
  string s = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8];
  cout << "s = " << s << endl;
  /*
    s = The quick brown fox jumped over the lazy dog.
  */
  
  string t = ""; //initialize to empty string
  for(int i = 0; i<9; i++) {
    t = t + a[i];
  }
  cout << "t = " << t << endl;
  /*
    t = The quick brown fox jumped over the lazy dog.
  */
  
  //find() function returns the index of the start of the matching string
  int k = s.find("brown");
  cout << "k = " << k << endl; //k = 10
  cout<<"sentence.find(\"is\") = "<<sentence.find("is")<<endl; //sentence.find("is") = 2
  
  //function erase(pos,len) erases the portion of the string value that begins 
  //at the character position pos and spans len characters 
  cout << "before s = " << s << endl;
  cout << "erase:     " << s.erase(k, 6) << endl;
  cout << " after s = " << s << endl;
  /*
    before s = The quick brown fox jumped over the lazy dog.
    erase:     The quick fox jumped over the lazy dog.
    after s = The quick fox jumped over the lazy dog.
  */   
  
  //find() function returns the index of the start of the matching string
  int m = t.find('j');
  int n = t.find("ov");
  //substr(pos,len) return substring, starting at character position pos and spans len characters.
  string u = t.substr(m, n-m);
  cout << "m = " << m << "  n = " << n << "  u = #" << u << "#" << endl;
  cout << "Now t =   " << t << endl;
  //replace(pos,len,str) replaces the portion of the string that 
  //begins at character pos and spans len characters with the string str   
  cout << "Replace:  " << t.replace(m, n-m, "ran ") << endl;
  cout << "Now t =   " << t << endl;
  /*
    m = 20  n = 27  u = #jumped #
    Now t =   The quick brown fox jumped over the lazy dog.
    Replace:  The quick brown fox ran over the lazy dog.
    Now t =   The quick brown fox ran over the lazy dog.
  */   
  
  //if find(x) does not find  a matching substring  with "x"
  // string::npos  is returned (a special value indicating that the substring was not found)
  cout<<"s = "<<s<<endl;
  cout<<s.find("!")<<endl;
  if(s.find("!")==string::npos){
    cout<<"! was not found in the string"<<endl;
  }
  /*
    s=The quick fox jumped over the lazy dog.
    4294967295
    ! was not found in the string
  */
  
  //length will return the number of characters in the string
  cout<<"s.length() = "<<s.length()<<endl;
  /*
    s.length() = 39
  */
  
  //convert to uppercase, and back to lowercase
  cout<<"s = "<<s<<endl;
  for(int i=0;i<s.length();i++){
    s[i]=toupper(s[i]);
  }
  cout<<"s = "<<s<<endl;
  for(int i=0;i<s.length();i++){
    s[i]=tolower(s[i]);
  }
  cout<<"s = "<<s<<endl;
  /*
    s = The quick fox jumped over the lazy dog.
    s = THE QUICK FOX JUMPED OVER THE LAZY DOG.
    s = the quick fox jumped over the lazy dog.
  */

  //we can use <, >, ==, <=, >= to compare C++ style strings
  string dog = "dog";
  string cat = "cat";
  bool result = true;
  result = (dog < cat);
  cout<<"result="<<boolalpha<<result<<endl;
  if(dog < cat){
    cout<<"string dog is less than cat"<<endl;
  }
  else{
    cout<<"string dog is not less than cat"<<endl;
  }

  
  return 0;
}

/*
sentence = This is a string.
sentence[0] = T
sentence[1] = h
sentence[2] = i
sentence.length() = 17
1st half = This is 
2nd half = a string.
The quick brown fox jumped over the lazy dog.
s = The quick brown fox jumped over the lazy dog.
t = The quick brown fox jumped over the lazy dog.
k = 10
sentence.find("is") = 2
before s = The quick brown fox jumped over the lazy dog.
erase:     The quick fox jumped over the lazy dog.
 after s = The quick fox jumped over the lazy dog.
m = 20  n = 27  u = #jumped #
Now t =   The quick brown fox jumped over the lazy dog.
Replace:  The quick brown fox ran over the lazy dog.
Now t =   The quick brown fox ran over the lazy dog.
s = The quick fox jumped over the lazy dog.
4294967295
! was not found in the string
s.length() = 39
s = The quick fox jumped over the lazy dog.
s = THE QUICK FOX JUMPED OVER THE LAZY DOG.
s = the quick fox jumped over the lazy dog.

 */
	      

			  
