#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);

    //stringstream ss(s);
    stringstream ss;
    ss << s;
     
    return 0;
}

// Normally word alada alada ber kora //
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    string word;
    //stringstream ss;
   // ss << str;

    while(ss >> word){
        cout << word << endl;
    }

    
    return 0;
}
*/

// ---------------------------------------------------------------------- //

// Refeerencing //

// Ekhane user defined function er moddhe string pathaile main er string er kono change hoy na. 
//user defined function e string& diye reciece korte hoy,mane s er adress ta pathay dite hoy, tahole change hobe //
/*
#include<bits/stdc++.h>
using namespace std;

void print(string& s){
    s = "World";
}

int main()
{
    string s = "Hello";
    print(s);

    cout << s << endl;

    return 0;
}
*/