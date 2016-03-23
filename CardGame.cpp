#include<iostream>
#include<string>
using namespace std;

class Card
{
private:
	int Number;
	string Colour;
public:
	Card(int,string);
	string colour();
	int number();
	void print();
	~Card();
};

Card::Card(int n, string c)
{
	Number = n;
	Colour = c;
}

string Card::colour()
{
	return Colour;
}

int Card::number()
{
	return Number;
}

void Card::print()
{
	cout << Colour << " " << Number << endl;
}

Card::~Card()
{

}

//_______________________________________________________________________________
class DeckOfCards
{
	friend class Card;
private:
	 Card *deck;
	 deck = new Card[9];
public:
	DeckOfCards();
	~DeckOfCards();
};
DeckOfCards::DeckOfCards()
{
	
}

DeckOfCards::~DeckOfCards()
{

}
//_____________________________________________________________________________
int main()
{
	Card obj1(1,"red");
	obj1.print();
}