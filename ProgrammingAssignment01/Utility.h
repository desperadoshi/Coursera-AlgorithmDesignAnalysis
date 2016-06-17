#include <fstream>
#include <cstdlib>

void read1DInt(string InFileName, vector<int>& Out1DInt){
    ifstream File;
    File.open(InFileName, ifstream::in);
    const int BufferSize = 256;
    char Buffer[BufferSize];
    do{
        File.getline(Buffer, BufferSize);
        Out1DInt.push_back(atoi(Buffer));
    }
    while(!File.eof());
    Out1DInt.pop_back();
    File.close();
}
