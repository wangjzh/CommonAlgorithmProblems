// �ϲ��������������ʹ������Ҳ���������С�

ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL)
		return pHead2;
	else if (pHead2 == NULL)
		return pHead1;
	ListNode *pNewHead = NULL, *pNode1 = NULL, *pNode2 = NULL;
	if (pHead1->m_nValue <= pHead2->m_nValue)
	{
		pNewHead = pHead1;
		pNode1 = pHead1->m_pNext;
		pNode2 = pHead2;
	}
	else
	{
		pNewHead = pHead2;
		pNode1 = pHead1;
		pNode2 = pHead2->m_pNext;
	}

	ListNode* pNewListLastNode = pNewHead;

	while (pNode1 != NULL && pNode2 != NULL)
	{
		if (pNode1->m_nValue <= pNode2->m_nValue)
		{
			pNewListLastNode->m_pNext = pNode1;
			pNewListLastNode = pNode1;
			pNode1 = pNode1->m_pNext;
		}
		else
		{
			pNewListLastNode->m_pNext = pNode2;
			pNewListLastNode = pNode2;
			pNode2 = pNode2->m_pNext;
		}
	}

	// һ������������ˣ���һ��ֱ�����ӵ����漴��
	if (pNode1 == NULL)
	{
		pNewListLastNode->m_pNext = pNode2;
	}
	else
	{
		pNewListLastNode->m_pNext = pNode1;
	}

	return pNewHead;
}