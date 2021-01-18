// 1. Write a menu driven C++ program to create a single line text file and then implement the following:
// a) Convert every lower case letter to upper case and upper case letter to lower case.
// b) Display the content of the file.
// c) Determine how many times a character ‘a’ is present in the file.

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
# define path "/Users/aditya/Desktop/test.txt" //edit path according to you
void lowerUpper(){
    ifstream fin;
    string line;
    // Creation of ifstream class object to read the file 
    fin.open(path); 
    while (!fin.eof()) { 
        getline(fin, line); 
        if(line!= ""){
            cout <<"Original text :\n" <<line << endl; 
            for(int i=0;i<line.size();i++){
                if(isupper(line[i]))
                    line[i] = tolower(line[i]);
                else
                    line[i] = toupper(line[i]);
                
                }
        }
        
    } 
    cout <<"Modified text :\n" <<line << endl; 
    fin.close(); 
    
}
void fileContent(){
    ifstream fin;
    string line;
    // Creation of ifstream class object to read the file 
    fin.open(path); 
    while (!fin.eof()) { 
        getline(fin, line); 
        if(line!= ""){
            cout <<"Content in file :\n" <<line << endl; 
        }
    } 
    fin.close();
}
void countA(){
    ifstream fin;
    string line;
    int counterA = 0;
    // Creation of ifstream class object to read the file 
    fin.open(path); 
    while (!fin.eof()) { 
        getline(fin, line); 
        if(line!= ""){
            for(int i=0;i<line.size();i++){
                if(line[i] == 'a')
                    counterA+=1;
                }
        } 
    }
    cout <<"A present " <<counterA <<" time(s) in file " << endl; 
    fin.close(); 
}
int main(){
    char option;
    cout << "\nFirst create file at the specifed by path" << endl;
    while(option!='D'){
        cout << "---- Enter your choice index ----" << endl;
        cout << " A. Convert every lower case letter to upper case and upper case letter to lower case." << endl;
        cout << " B. Display the content of the file." << endl;
        cout << " C. Check how many times a character ‘a’ is present in the file." << endl;       
        cout << " D. Type 'D' to quit this program" << endl;
        cin >> option ;
        switch (option){
            case 'A' : lowerUpper();
            break;
            case 'B' : fileContent();
            break;
            case 'C' :   countA();
            break;
            case 'D' : cout << "You choose to Quit" << endl;
            break;
            default : cout << "*Please choose the correct option*" << endl;
        }

    } 
}