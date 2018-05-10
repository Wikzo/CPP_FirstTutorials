// Polymorphic Bad Guy
// Demonstrates calling member functions dynamically

#include <iostream>

using namespace std;

class Enemy
{
public:
       Enemy(int damage = 10);
       virtual ~Enemy();  // destructor prototype
       void virtual Attack() const;     // virtual = kan forandre sig dynamisk hvis nødvendigt
       
protected:  // members are only accessible in their own class
          int* m_pDamage;
};

Enemy::Enemy(int damage)
{
                 m_pDamage = new int(damage);
}

Enemy::~Enemy()
{
               cout << "In enemy destructor, deleting m_pDamage.\n";
               delete m_pDamage;
               m_pDamage = 0;
}

void Enemy::Attack() const
{
     cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points!";
}

class Boss : public Enemy      // inheritence from Enemy
{
public:
       Boss(int multiplier = 3);
       virtual ~Boss();
       void virtual Attack() const;

protected:
          int* m_pMultiplier;
};

Boss::Boss(int multiplier)
{
               m_pMultiplier = new int(multiplier);
}

Boss::~Boss()
{
             cout << "In Boss destructor, deleting m_pMultiplier.\n";
             delete m_pMultiplier;
             m_pMultiplier = 0;
}

void Boss::Attack() const
{
     cout << "A boss attacks and inflicts " << ( (*m_pMultiplier) * (*m_pDamage) ) << " damage points!";
}

int main()
{
    cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
    Enemy* pBadGuy = new Boss(); // pointer to Enemy that points to pBadGuy (Boss)
    pBadGuy->Attack();
    
    cout << "\n\nDeleting pointer to Enemy:\n";
    delete pBadGuy;
    pBadGuy = 0;
    
    return 0;
    
}
