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
    while (getline(sourceFile, line))
    {
        line += "\r";
        //if (!text.empty())
            //line = "\r" + line; 
        text.push_back(line);
    }
    sourceFile.close();
    
    fileName += ".win";
    ofstream targetFile;
    targetFile.open(fileName.c_str(), ios::binary);
    for (int i = 0; i < text.size(); i++)
    {
        targetFile << text[i] << endl;    
    }
    targetFile.close();

    return 0;
}
