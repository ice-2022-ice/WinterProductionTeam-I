#pragma once
#include "../Utility/Vector2D.h"

class Enemy
{
private:
	int type;			// �^�C�v
	int image;			// �摜
	float speed;		// ����
	Vector2D location;	// �ʒu���
	Vector2D box_size;	// �����蔻��̑傫��
public:
	Enemy(int type, int handle);
	~Enemy();

	void Initialize();			// �����������p
	void Update(float speed);	// �X�V����
	void Draw()const;			// �`�揈��
	void Finalize();			// �I�����̏���

	int GetType()const;			// �^�C�v�̎擾
	Vector2D GetLocation();		// �ʒu���̎擾
	Vector2D GetBoxSize();		// �����蔻��̑傫�����擾
};

