#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 0)
    {
        printf("请指定文件\n");
        exit(1);
    }

    string fileName = argv[1];
    string line;
    vector<string> text;

    ifstream sourceFile;
    sourceFile.open(fileName.c_str());
    while (getline(sourceFile, line, '\r'))
    {
        text.push_back(line);
    }
    sourceFile.close();
    
    fileName += ".lin";
    ofstream targetFile;
    targetFile.open(fileName.c_str(), ios::binary);
    for (int i = 0; i < text.size(); i++)
    {
        targetFile << text[i];    
    }
    targetFile.close();

    return 0;
}
