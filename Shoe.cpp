#include "Shoe.h"
#include <iostream>
#include <random> //��������

using namespace std;

//�V���b�t���i�t�B�b�V���[�C�F�[�c�j
void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}

//�R���X�g���N�^
Shoe::Shoe() {

	//�J�[�h�����Ă�0.... /13�ŃJ�[�h��ނƂ���
	for (int i = 0; i < NUM; i++) {
		_cardShoe[i] = i;
	}
	_cardNum = NUM; //�J�[�h�����̐ݒ�

	//�V���b�t��
	_shuffle();
}

//�J�[�h�V���[��\��(�f�o�b�O�p)
void Shoe::showShoe(SHOW_TYPE type) const 
{
	int roopCnt = NUM;
	if (type == CARD_ONLY) {	//�J�[�h�������\��
		//�J�[�h�̂ݕ\���ɂ���B
		roopCnt = _cardNum;
	}

	for (int i = 0; i < roopCnt; i++) {
		cout << _cardShoe[i] << ' ';
	}
	cout << endl;
}

//�J�[�h��1�����o��
int Shoe::takeCard() {
	//�J�[�h������0�ȉ��������ꍇ,�G���[�Ƃ��ďo��
	if (_cardNum <= 0) {
		//�W���o��
		cout << "�V���[�ɃJ�[�h������܂���B" << endl;
		addCard();
		//return -1;
	}

	int card = _cardShoe[_cardNum];
	_cardNum--;
	return card;
}
void Shoe::addCard() {

	cout << "��[���܂�" << endl;
	for (int i = 0; i < NUM; i++) {
		_cardShoe[i] = i;
	}
	_cardNum = NUM; //�J�[�h�����̐ݒ�

	//�V���b�t��
	_shuffle();
}