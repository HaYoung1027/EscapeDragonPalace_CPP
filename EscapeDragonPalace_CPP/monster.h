#pragma once
#include "init.h"

// ���� Ŭ����
class Monster
{
public:
	// ������
	Monster();
	Monster(int HP, float speed);
	~Monster();	// �Ҹ���

protected:
	int HP;						// ü��
	float speed;				// �̵� �ӵ�
	bool isAlive;				// ���� ����
	bool isDamaged;				// �ǰ� ���� ����
	unsigned long lastHitTime;	// ������ �ǰ� �ð�
};

// ��ų Ŭ����
class MonsterSkill
{
	bool isAttack;		// ��ų ��� ������ ����
	int attackCnt;		// ��ų ���� Ƚ��
	int attack;			// ��ų ���ݷ�
	long coolTime;		// ��ų ��Ÿ�� (ms)
};