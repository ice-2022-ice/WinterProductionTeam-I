#include "Barrier.h"
#include"DxLib.h"

Barrier::Barrier():image(NULL),life_span(1000)
{
	// �摜�Ǎ�
	image = LoadGraph("Resource/images/barrier.png");

	// �G���[�`�F�b�N
	if (image == -1) {
		throw("�o���A�̉摜������܂���");
	}
}

Barrier::~Barrier()
{
	// �摜����
	DeleteGraph(image);
}

void Barrier::Draw(const Vector2D& location)
{
	DrawRotaGraphF(location.x, location.y, 1.0, 0.0, image, TRUE);
}

bool Barrier::IsFinished(float speed)
{
	life_span -= speed;		// �t���[�����Ƃ�life_span���}�C�i�X
	return (life_span<=0);	// ���C�t��0�ȉ����ǂ�����Ԃ�
}
