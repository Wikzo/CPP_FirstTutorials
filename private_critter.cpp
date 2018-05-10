// Privat Critter
// Demonstrates setting member access levels

#include <iostream>

using namespace std;

class Critter
{
public:      // begin public section - any part of code can use this
       Critter(int hunger = 0);
       int GetHunger() const;
       void SetHunger(int hunger);
private:    // begin private section - only code in Critter can directly access this
        int m_Hunger;
};

Critter::Critter(int hunger): m_Hunger(hunger)
{        
    cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const   // bruges for at få adgang til m_Hunger (som er private)
{                                // const bruges, fordi den ikke skal ændre nogen værdi
    return m_Hunger;
}

void Critter::SetHunger(int hunger)
{
     if (hunger < 0)
        cout << "You can't set a critter's hunger to a negative score.\n\n";
     else
         m_Hunger = hunger;
}

int main()
{
    Critter crit(5);
    // cout << crit.m_Hunger;     // illegal, m_Hunger is private!
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
    // GetHunger() giver m_Hunger
    
    cout << "Calling SetHunger() with -1\n";
    crit.SetHunger(-1);
    
    cout << "Calling SetHunger() with 9.\n";
    crit.SetHunger(9);
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
    
    return 0;
    
}
