#include <iostream>
#include "Class_Triangle.h"
#include "familyTree.h"
#include "cryptography.h"

using namespace std;

void main()
{
    
    /*triangle obj;

    obj.set();
    obj.angles();
    obj.S();*/

   /* int k;

    cout << "Whose family tree do you want to see? \n1. Prince Jordge \n2. Prince Archi \n3. Princess Savanna \n4. Princess Mia \n";
    cin >> k;

    if (k == 1) {
        Jordge *a=new Jordge();
        delete a;
    }
    else if (k == 2) {
        Archi *b = new Archi();
        delete b;
    }
    else if (k == 3) {
        Savanna *c = new Savanna();
        delete c;
    }
    else if (k == 4) {
        Mia *d = new Mia();
        delete d;
    }*/

    algorithms obj;

    cout << "How many keys do you need for your method? ";
    cin >> obj.keysNum;

    if (obj.keysNum == 0) {
        hash0 h;
    }
    else if (obj.keysNum == 1) {
        onekeyAl oneK;
        oneK.onekeyA();
        if (oneK.reversible == false) {
            hash0 h1;
        }
        else {
            simetrical sm;
            sm.simetrica();
            if(sm.r==1) {
                blockEn bl;
            }
            else {
                streamEn st;
            }
        }
    }
    else {
        twoK twok;
        twok.two();
        if(twok.reversible==false){
            pidpis pd;
        }
        else {
            asymetrical ass;
        }
    }

}


