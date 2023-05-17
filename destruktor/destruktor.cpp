#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int); //Constructor
    ~angka();  //Destructor
    void cetakData();
    void isiData();

};

//Definisi member Function
angka::angka(int i) { //construktor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka() { //Destruktor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;

}