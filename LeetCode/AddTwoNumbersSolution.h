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
#include <iostream>
#include <list>

class AddTwoNumbersSolution
{
public:
	AddTwoNumbersSolution();
	~AddTwoNumbersSolution();

	
	//Definition for singly-linked list.
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	 };
	
	class Solution {
	public:
		ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {

		}
	};

};

