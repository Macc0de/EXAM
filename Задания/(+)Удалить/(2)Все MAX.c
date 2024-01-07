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
	
	while(F != NULL) // Проверка F
	{
		cur = F; // Для препода
		if(F->data == max) // Если первый
			F = F->Next;
		else
			break;
	}
	
	if(F != NULL) // Если F существует
	{
		cur = F;
		while(cur->Next != NULL) // Если не первый
		{
			cur_next = cur->Next;
			if(cur_next->data == max)
				cur->Next = cur_next->Next; // Удаление
			else
				cur = cur->Next;
		}
	}
	
	return;
}
