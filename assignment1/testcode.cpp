#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
// #include "SymbolTable.h"
using namespace std;
int main()
{
      ifstream file("./testcase/test6.txt");
      string line ;
      getline(file, line);
      if(line == "BEGIN")
            cout << 1;
      else 
            cout << 0;
      return 0;

}