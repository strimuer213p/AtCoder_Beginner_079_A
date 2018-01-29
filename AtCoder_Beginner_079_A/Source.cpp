/*
問題文
1118 のような、3 つ以上の同じ数字が連続して並んだ 4 桁の整数を 良い整数 とします。
4 桁の整数 N が与えられるので、N が 良い整数 かどうかを答えてください。
*/

#include<iostream>
#include<vector>

//標準入力で桁入れても動くようvectorにしました


const int continuity = 3;  //問より3連続なので3  ここに連続の数を入れると何連続でもできる

int main() {
	bool flag=false;
	int num,k=0;
	std::vector<int> v;

	std::cin >> num;

	int tmp = num;

	while (tmp!=0) {  //tmpをwhileの中だけの寿命にしたかった　((int tmp=num)!=0)とかしたかったけど無理そう
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