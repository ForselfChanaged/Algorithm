#include<stdio.h>
#include <vector>
#include <iostream>
using namespace std;
class  Sort {
public:
	/// <summary>
	/// ð������һ�αȽ�����Ԫ�أ�������ǵ�˳�����Ͱ����ǽ�������
	/// </summary>
	/// <param name="nums"></param>
	static void BubbleSort(vector<int>& nums) 
	{
		bool order;
		for (int i = 0; i < nums.size(); i++)
		{
			order = true;
			for (int j = 1; j < nums.size()-i; j++)
			{
				if (nums[j - 1] > nums[j])
				{
					order = false;
					swap(nums[j - 1], nums[j]);
				}	
			}
			if (order) break;
		}
	}
	/// <summary>
	/// ѡ��������δ����������ҵ���СԪ�أ����������������ʼλ��
	/// ��ʣ��Ԫ���м���Ѱ����СԪ�أ�Ȼ�������Ѿ���������ĩβ���ظ��˲���
	/// </summary>
	/// <param name="nums"></param>
	static void SelectSort(vector<int> &nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			int minIndex = i;
			for (int j = i+1; j < nums.size(); j++)
			{
				if (nums[j] < nums[minIndex])
				{
					minIndex = j;//�ҵ���Сֵ����
				}
			}
			swap(nums[i], nums[minIndex]);
		}
	}
	static void Print(vector<int>& nums)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			printf(" %d ",nums[i]);
		}
		printf("\n");
	}
	
};
