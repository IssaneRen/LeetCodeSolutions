/************************************************************************************************************
*2017/12/26 IssaneRen
*Two Sum
*
*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*
*You may assume that each input would have exactly one solution, and you may not use the same element twice.
*
**Example:
***Given nums = [2, 7, 11, 15], target = 9,
***
***Because nums[0] + nums[1] = 2 + 7 = 9,
***return [0, 1].
************************************************************************************************************/

#pragma once

using namespace std;

#include <iostream>
#include <vector>

class TwoSumSolution
{
public:
	TwoSumSolution();
	~TwoSumSolution();
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>* resultVec = new vector<int>();
		//vector<int>::iterator it1, it2;
		int i1 = 0, i2 = 0;
		bool findingFlag = false;
		//for (it1 = nums.begin(); it1 != nums.end(); it1++) {
		//	for (it2 = nums.begin(); it2 != nums.end(); it2++) {
		//		if (it1 == it2)
		//			break;
		//		if ((*(it1)+*(it2) == target)) {
		//			resultVec->push_back(*it1);
		//			resultVec->push_back(*it2);
		//			findingFlag = true;
		//			break;
		//		}
		//	}
		//	if (findingFlag)
		//		break;
		//}		
		for (i1 = 0; i1 < nums.size(); i1++) {
			for (i2 = 0; i2 < nums.size(); i2++) {
				if (i1 == i2)
					continue;
				if ((nums[i1] + nums[i2] == target)) {
					resultVec->push_back(i1);
					resultVec->push_back(i2);
					findingFlag = true;
					break;
				}
			}
			if (findingFlag)
				break;
		}
		return *resultVec;
	}
private:

};

