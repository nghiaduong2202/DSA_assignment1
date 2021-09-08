#include "SymbolTable.h"

void SymbolTable::run(string filename)
{
    ifstream file(filename);
    int block = 0;
    int size = countBlock(filename);
    LinkedList* list = new LinkedList[size];
    subRun(file, list, block);
}

int SymbolTable::countBlock(string filename)
{
    int count = 0;
    ifstream file(filename);
    string line;
    while(getline(file, line))
    {
        if(line == "BEGIN") count++;
    }
    return count;
}

void SymbolTable::subRun(ifstream& file, LinkedList* list, int block)
{
    
}