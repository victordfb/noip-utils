#include <fstream>
#include <iostream>

#include "Configurator.h"

using namespace std;

void Configurator::saveCredentials(string user, string passwd)
{

}

void Configurator::saveAsLastIp(const string &ip) const
{
    ofstream file;
    file.open(this->file, ios::out | ios::binary);
    file << ip;
    file.close();
}
