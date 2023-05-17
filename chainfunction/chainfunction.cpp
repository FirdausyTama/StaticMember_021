#include <iostream>
using namespace std;
class nuku
{
	string judul;

public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function

    }
    string getJudul()
    {
        return this->judul;
    }
} bukunya;