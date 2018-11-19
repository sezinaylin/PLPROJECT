#include <iostream> 
#include <fstream> 
#include <Windows.h> 
#include <string.h> 
 
using namespace std; class project 
{     public:         project();         virtual ~project();         void newSentence();  
}; 
project::project() 
{ 
    //constructor 
} 
project::~project() 
{ 
    //destructor 
} 
void project::newSentence(){  	
    ofstream file;  
     file.open("main.txt");  
 
  string sentence, word;      
  cout<< "enter the sentence: " <<endl;      
  cin>>sentence; 
 
    while(sentence != "..."){            
	word = word + " " + sentence;         
	cin >> sentence; 
    } 
    cout<< "words: "<< word<<endl;     
	file<<endl<<word; 
    file.close();    
} 
int main() 
{    
 project yeni;        
yeni.newSentence();        
return 0;   
} 

