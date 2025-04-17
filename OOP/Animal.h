#pragma once

class Animal
{
public:
	virtual void Travel();
		//00023AE34F3FC
	Animal() : m_limbs(4) {}
	Animal(int limbs) : m_limbs(limbs){}
	int GetLimbs() { return m_limbs; }
	void SetLimbs(int limbs) { m_limbs = limbs; }
protected:
	int m_limbs;
};