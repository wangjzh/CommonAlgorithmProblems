#pragma once

#include <vector>
using namespace std;
// ��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
class Solution {
public:
	bool Find(vector<vector<int> > array, int target) {

		bool found = false;
		int rows = array.size();
		int columns = array[0].size();

		if (rows > 0 && columns > 0)
		{
			int row = 0, column = columns - 1;
			while (row <  rows && column >= 0)
			{
				if (array[row][column] == target)
				{
					found = true;
					break;
				}
				else if (array[row][column] > target)
					--column;
				else
					++row;
			}
		}
		return found;
	}
};
