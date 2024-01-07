void func()
{ 
	struct List *cur, *cur_next;
	int max;
	
	if(F == NULL) // Если список пуст
		return;
	
	// Поиск максимального элемента
	max = F->data;
	for(cur = F->Next; cur != NULL; cur = cur->Next) // F пропускаем
		if(cur->data > max) 
			max = cur->data;	
		
	if(F->data == max) // Если первый
	{
		cur = F; // Для препода
		F = F->Next;
	}
	else // Если не первый
	{
		for(cur = F; cur->Next != NULL; cur = cur->Next)
		{
			cur_next = cur->Next;
			if(cur_next->data == max)
			{
				cur->Next = cur_next->Next; // Удаление
				break;
			}
		}
	}
	
	return;
}
