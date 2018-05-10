// Simple Boss
// Demonstrates inheritance

#include <iostream>

using namespace std;

int playerLife = 50;

class Enemy
{
public:
       int m_Damage;
       
       Enemy();
       void Attack() const;
};

Enemy::Enemy():
               m_Damage(10)
{}

void Enemy::Attack() const
{
     cout << "Attack inflicts " << m_Damage << " damage points!\n";
     playerLife = playerLife - m_Damage;
     cout << "Your HP: " << playerLife << "\n\n";
}

class Boss : public Enemy   // Inheritance, Boss = subclass defined from superclass Enemy
{
public:
       int m_DamageMultiplier;
       
       Boss();
       void SpecialAttack() const;
};

Boss::Boss():
             m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const
{
     cout << "Special Attack inflicts " << (m_Damage * m_DamageMultiplier);
     cout << " damage points!\n";
     playerLife = playerLife - (m_Damage * m_DamageMultiplier);
     cout << "Your HP: " << playerLife << "\n\n";
}

int main()
{
    cout << "Your HP: " << playerLife << "\n\n";
    
    cout << "Creating a normal enemy.\n";
    Enemy enemy1;
    
    enemy1.Attack();
    
    cout << "\nCreating a big nasty boss.\n";
    Boss boss1;
    
    boss1.Attack();
    boss1.SpecialAttack();
    
    return 0;
}
