#include <iostream>

using namespace std;

class Elizavetta2 {
protected:
	string birth, death;
public:
	Elizavetta2() {
		birth = "21.04.1926";
		cout << "Grandgrandmother - Elizavetta II: Born in " << birth << "\nMarried with Fillip";
	}
	~Elizavetta2() {
		death = "alive";
		cout << "\nElizavetta II: " << death;
	}
};

class Fillip {
protected:
	string birthOther, deathOther;
public:
	Fillip() {
		birthOther = "10.06.1921";
		cout << "\nGrandgrandfather - Fillip: Born in " << birthOther;
	}
	~Fillip() {
		deathOther = "09.04.2021";
		cout << "\nFillip: Died in " << deathOther;;
	}
};

class Charlz: public Elizavetta2,public Fillip {
public:
	Charlz() {
		birth = "14.11.1948";
		cout << "\n\nGrandfather - Charlz: Born in " << birth<<"\nMarried with Diana";
	}
	~Charlz() {
		death = "alive";
		cout << "\nCharlz: " << death;
	}
};

class Diana {
protected:
	string birthOther, deathOther;
public:
	Diana() {
		birthOther = "01.07.1961";
		cout << "\nGrandmother - Diana: Born in " << birthOther;
	}
	~Diana() {
		deathOther = "31.08.1997";
		cout << "\nDiana: Died in " << deathOther;
	}
};

class Anna: public Elizavetta2, public Fillip {
public:
	Anna() {
		birth = "15.08.1950";
		cout << "\n\nGrandmother - Anna: Born in " << birth << "\nMarried with Mark Fillips(until 1992) and Timoti Lourens(from 1992)";
	}
	
	~Anna() {
		death = "alive";
		cout << "Anna: " << death;
	}
};

class Mark {
protected:
	string birthOther, deathOther;
public:
	Mark() {
		birthOther = "22.09.1948";
		cout << "\nGrandfather - Capitan Mark Fillips: Born in " << birthOther;
	}
	~Mark() {
		deathOther = "alive";
		cout << "\nMark Fillips: " << deathOther;
	}
};

class William: public Charlz, public Diana {
public:
	William() {
		birth = "21.06.1982";
		cout << "\n\nFather - William: Born in " << birth << "\nMarried with Catrin";
	}
	~William() {
		death = "alive";
		cout << "\nWilliam: " << death;
	}
};

class Catrin {
protected:
	string birthOther, deathOther;
public:
	Catrin() {
		birthOther = "09.01.1982";
		cout << "\nMother - Catrin: Born in " << birthOther;
	}
	~Catrin() {
		deathOther = "alive";
		cout << "\nCatrin: " << deathOther;
	}
};

class Genry : public Charlz,public Diana {
public:
	Genry() {
		birth = "15.09.1984";
		cout << "\n\nFather - Genry: Born in " << birth << "\nMarried with Megan";
	}
	~Genry() {
		death = "alive";
		cout << "\nGenry: " << death;
	}
};

class Megan {
protected:
	string birthOther, deathOther;
public:
	Megan() {
		birthOther = "09.01.1982";
		cout << "\nMother - Megan: Born in " << birthOther;
	}
	~Megan() {
		deathOther = "alive";
		cout << "\nMegan: " << deathOther;
	}
};

class Petter: public Anna, public Mark {
public:
	Petter() {
		birth = "15.11.1977";
		cout << "\n\nFather - Petter: Born in " << birth << "\nMarried with Otem" ;
	}
	~Petter() {
		death = "alive";
		cout << "\nPetter: " << death;
	}
};

class Otem {
protected:
	string birthOther, deathOther;
public:
	Otem() {
		birthOther = "03.05.1978";
		cout << "\nMother - Catrin: Born in " << birthOther;
	}
	~Otem() {
		deathOther = "alive";
		cout << "\nCatrin: " << deathOther;
	}
};

class Zara : public Anna,public Mark {
public:
	Zara() {
		birth = "15.05.1981";
		cout << "\n\nMother - Zara: Born in " << birth << "\nMarried with Michael";
	}
	~Zara() {
		death = "alive";
		cout << "\nZara: " << death;
	}
};

class Michael {
protected:
	string birthOther, deathOther;
public:
	Michael() {
		birthOther = "18.10.1978";
		cout << "\nFather - Michael: Born in " << birthOther;
	}
	~Michael() {
		deathOther = "alive";
		cout << "\nCatrin: " << deathOther;
	}
};

class Jordge: public William, public Catrin {
public:
	Jordge() {
		birth = "22.08.2013";
		cout << "\nJordge: Born in " << birth;
	}
	~Jordge() {
		death = "alive";
		cout << "\n\nCurrent state:\nJordge: " << death;
	}
};

class Archi: public Genry, public Megan {
public:
	Archi() {
		birth = "06.05.2019";
		cout << "\nArchi: Born in " << birth;
	}
	~Archi() {
		death = "alive";
		cout << "\n\nCurrent state:\nArchi: " << death;
	}
};

class Savanna : public Petter, public Otem {
public:
	Savanna() {
		birth = "29.12.2010";
		cout << "\nSavanna: Born in " << birth;
	}
	~Savanna() {
		death = "alive";
		cout << "\n\nCurrent state:\nSavanna: " << death;
	}
};

class Mia : public Zara, public Michael {
public:
	Mia() {
		birth = "17.01.2014";
		cout << "\nMia: Born in " << birth;
	}
	~Mia() {
		death = "alive";
		cout << "\n\nCurrent state:\nMia: " << death;
	}
};