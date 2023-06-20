#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "ScavTrap";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->damage = 20;
    cout << "ScavTrap default constructor called " << endl; 
}

ScavTrap::ScavTrap(const string &name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->damage = 20;
    cout << "ScavTrap name constructor called " << endl; 
}

ScavTrap::~ScavTrap()
{
     cout << "ScavTrap destructor called " << endl; 
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
    this->name = obj.name;
    this->energyPoint = obj.energyPoint;
    this->hitPoint = obj.hitPoint;
    this->damage = obj.damage;
    cout << "ScavTrap assignment operator called" << endl;
    return *this;
} 

void ScavTrap::guardGate()
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
        cout << "This ScavTrap " << this->name << " in GuardGate Mode " << endl;
    else
        cout << "This ScavTrap " << this->name << " had dead " << endl;
}

void ScavTrap::attack(const string &target)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        cout << "ScavTrap "<<this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << endl;
        this->energyPoint--;
    }
    else
        cout << "ScavTrap " << this->name << " has not enough " << (!this->hitPoint ? " hit point !!" : " hit enegry !!") << endl;

}

/*

    "Guard Gate" modu, genellikle bir oyun veya benzeri bir
    senaryoda karakterlerin bir noktayı korumak,
    saldırılara karşı savunma yapmak veya belirli bir alanı güven altında
    tutmak için kullanılan bir mod veya durumdur.

ScavTrap'ın "guardGate" metodu, ScavTrap nesnesinin bu koruma moduna geçiş yapmasını simüle eder. 
Yani, enerji puanları ve can puanları belirli bir eşik değerinin üzerindeyse,
 ScavTrap "GuardGate Mode" durumuna girer. 
Bu modda, ScavTrap, düşmanları tespit etmek ve 
saldırılara karşı savunma yapmak için aktif bir konumda olabilir.

"Guard Gate" modu genellikle oyunlarda düşman saldırılarına karşı direnç sağlamak,
 belirli bir bölgeyi korumak veya saldırıları püskürtmek için kullanılır. 
 Karakterin savunma yeteneklerini artırabilir, 
 ekstra hasar verebilir veya saldırılara karşı daha dayanıklı hale gelebilir.
  Bu mod, oyuncuların stratejik olarak önemli bölgeleri veya noktaları korumalarına yardımcı olabilir.
*/
