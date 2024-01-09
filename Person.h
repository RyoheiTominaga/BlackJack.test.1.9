#pragma once

#include "common.h"
//#include "Player.h"
//#include "Dealer.h"
class Shoe;

class Person
{
private:
	int _hand[HAND_SIZE];	// ���_�ケ�ꂭ�炢���Ă�OK...�ɍ���͂����Ⴄ
	bool _calcUpdate;
	int _cardNum;
	int _score;
	char _name[16];
	
public:
	// �R���X�g���N�^
	Person(char *name);

	//�X�R�A�̎擾(hit���ꂽ���̂ݍČv�Z�����)
	int getScore();

	//�J�[�h�̒ǉ�
	void hit(Shoe shoe);

	//��D��\��
	void showHand();

	//�^�[������
	bool play(Shoe* shoe);

protected:
 	/*virtual*/ void playBase(Shoe* shoe)/*=0*/;	//�^�[�������{��

};

