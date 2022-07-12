#pragma once

class Penaly {

	
	static short staticId;
	int id = 0;
	string text = "";
	string dataTime = "";
	short price = 0;

public:

	Penaly(string text,string dataTime,short price)
		:id(staticId++),text(text),dataTime(dataTime),price(price){}

	
	friend ostream& operator<<(ostream& out, const Penaly& p);
};

short Penaly::staticId = 0;

ostream& operator<<(ostream& out, const Penaly& p) {
	cout<< "Id: " << p.id << endl
		<< "Text: " << p.text << endl
		<< "Data Time: " << p.dataTime << endl
		<< "Price: " << p.price << endl;

	

	return out;
}




