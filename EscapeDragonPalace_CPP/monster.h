#pragma once

// ���� Ŭ����
class Monster
{
protected:
	int HP;						// ü��
	int attack;					// ���ݷ�
	float speed;				// �̵� �ӵ�
	bool isAlive;				// ���� ����
	bool isDamaged;				// �ǰ� ���� ����
	unsigned long lastHitTime;	// ������ �ǰ� �ð�
};

// ���� Ÿ�� ������
enum MonsterType
{
	E_MONSTER_FISH,
	E_MONSTER_CRAB,
	E_MONSTER_CLAM,
	E_MONSTER_TURTLE,
	E_MONSTER_SMALLFISH,
	E_MONSTER_TYPE_COUNT
};