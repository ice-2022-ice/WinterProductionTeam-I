#pragma once
class RankingData
{
public:
	RankingData();
	~RankingData();

	void Initialize(); //��������
	void Finalize(); //�I������

public:
	//�����L���O�f�[�^�̍쐬
	void SetRankingData(int score, const char* name);
	//�X�R�A�擾����
	int GetScore(int value) const;
	//�X�R�A�擾����
	int GetRank(int value) const;
	//���O�擾����
	const char* GetName(int value) const;

private:
	int score[6];
	int rank[6];
	char name[6][15];

private:
	//�f�[�^����ւ�����
	void SortData();

};