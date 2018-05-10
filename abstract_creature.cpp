// Abstract Creature
// Demonstrats abstract classes

#include <iostream>

using namespace std;

class Creature  // abstract class
{
public:
       Creature(int health = 10);
       virtual void Greet() const = 0;
       // pure virtual member function
       // it doesn't make sense to define Greet() in Creature, since every
       // creature has a different way of greeting
       // when using = 0, it becomes an abstract class
       virtual void DisplayHealth() const;
       
protected:
          int m_Health;
};

Creature::Creature(int health):
                       m_Health(health)
{}

void Creature::DisplayHealth() const
{
     cout << "Health: " << m_Health << endl;
}

class Orc : public Creature
{
public:
       Orc(int health = 120);
       virtual void Greet() const;
};

Orc::Orc(int health):
             Creature(health)
{}

void Orc::Greet() const
{
     cout << "The orc grunts hello.\n";
}
// this overrides the Creature's pure virtual function
// now it's not abstract anymore

int main()
{
    Creature* pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();
    
    return 0;

} 
