/*
��蕶
1118 �̂悤�ȁA3 �ȏ�̓����������A�����ĕ��� 4 ���̐����� �ǂ����� �Ƃ��܂��B
4 ���̐��� N ���^������̂ŁAN �� �ǂ����� ���ǂ����𓚂��Ă��������B
*/

#include<iostream>
#include<vector>

//�W�����͂Ō�����Ă������悤vector�ɂ��܂���


const int continuity = 3;  //����3�A���Ȃ̂�3  �����ɘA���̐�������Ɖ��A���ł��ł���

int main() {
	bool flag=false;
	int num,k=0;
	std::vector<int> v;

	std::cin >> num;

	int tmp = num;

	while (tmp!=0) {  //tmp��while�̒������̎����ɂ����������@((int tmp=num)!=0)�Ƃ��������������ǖ�������
		v.push_back(tmp % 10);
		tmp /= 10;
	}

	for (int i = 0;i<v.size(); i++) {
		for (int j = i+1;j<v.size(); j++) {
			if (v[i] == v[j]) {
				k++;
				if (k == continuity) {
					flag = true;
				}
			}
			else {
				break;
			}
		}
	}

	std::cout << (flag ? "Yes" : "No") << std::endl;

	return 0;
}