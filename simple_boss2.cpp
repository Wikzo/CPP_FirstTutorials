// Simple Boss 2.0
// Demonstrates access control under inheritance

/* s. 295
public = members are accessible to all code in a program

protected = only accessible in own class and certain derived classes

private = only accessible in own class */

#include <iostream>

using namespace std;

class Enemy
{
public:
       Enemy();
       void Attack() const;
       
protected:
          int m_Damage;
};

Enemy::Enemy():
                 m_Damage(10)
{}

void Enemy::Attack() const
{
     cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy
{
public:
       Boss();
       void SpecialAttack() const;
       
private:
        int m_DamageMultiplier;
};

Boss::Boss():
             m_DamageMultiplier(3)
{};

void Boss::SpecialAttack() const
{
     cout << "Special attack inflicts " << (m_Damage * m_DamageMultiplier);
     cout << " damage points!\n";
}

int main()
{
    cout << "Creating a normal enemy.\n";
    Enemy enemy1;
    enemy1.Attack();
    
    cout << "\nCreating a boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();
    
    return 0;
    
}
