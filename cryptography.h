#include <iostream>


using namespace std;

class algorithms {
public:
    int keysNum;
    bool reversible,r;
};

class onekeyAl:public algorithms {
public:
    void onekeyA() {
        cout << "\nIs your metod reversible?(1-yes/0-no) ";
        cin >> reversible;
    }
};

class hash0 : public algorithms {
public:
    hash0() {
        cout << "\nYour method is - Hash: ";
        reversible = false;
        cout << "\nIs this method reversible? No";
        cout << "\nWhere it can be used? To check data that you are entering at log in";
    }
};

class simetrical : public onekeyAl {
public:
    void simetrica() {
        cout << "\nYour method is - Symetric encryption ";
        cout << "\nIs this method reversible? Yes";
        cout << "\nWhere it can be used? To encrypt/decrypt data with 1 key";
        cout << "\nCan be 2 types: Block(press 1) or Stream(press 0) ";
        cin >> r;
    }
};

class blockEn: public simetrical {
public:
    blockEn() {
        cout << "\nBlock Symmetric encryption:\nSet lengths of bits are encrypted in blocks of electronic data with the use of a specific secret key.";
    }
};

class streamEn : public simetrical {
public:
    streamEn() {
        cout << "\nStream Symmetric encryption:\nData is encrypted as it streams instead of being retained in the system’s memory.";
    }
};

class twoK:public algorithms {
public:
    void two() {
        cout << "\nIs your metod reversible?(1-yes/0-no) ";
        cin >> reversible;
    }
};

class asymetrical: public twoK {
public:
    asymetrical() {
        cout << "\nYour method is - Asymetric encryption ";
        cout << "\nIs this method reversible? Yes";
        cout << "\nWhere it can be used? To encrypt/decrypt data with 2 keys(first for encryption, second for decryption)";
    }
};

class pidpis : public twoK {
public:
    pidpis() {
        cout << "\nYour method is - Electronic signature ";
        cout << "\nIs this method reversible? No";
        cout << "\nWhere it can be used? To ensure that document was from you/was checked/wasn't modified";
    }
};
