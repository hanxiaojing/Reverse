void FromTailToHeadPrint(SListNode*& head)
{
	stack<SListNode*> s;
	SListNode* cur = head;
	while (cur)
	{
		s.push(cur);
		cur = cur->_next;
	}

	while (!s.empty())
	{
		cout << s.top()->_data << "->";
		s.pop();
	}
	cout << "NULL" << endl;
}