#include "Circular Linked list.h"

Linklist* Init_List()
{
	Linklist* list = (Linklist*)malloc(sizeof(Linklist));
	if (list != NULL)
	{
		list->size = 0;
		list->head.next = &(list->head);
	
	}


	return list;
}

void Index_List(Linklist* list, int pos, LinkNode* node)
{
	if (list == NULL || node == NULL)
	{
		return;
	}
	if (pos < 0 || pos > list->size)
	{
		pos = list->size;
	}
	LinkNode* Pruent = &(list->head);
	for (int i = 0; i < pos; i++)
	{
		Pruent = Pruent->next;
	}
	node->next = Pruent->next;
	Pruent->next = node;

	list->size++;
}

void Delete_List(Linklist* list, int pos)
{
	if (list == NULL)
	{
		return;	
	}
	if (pos < 0 || pos > list->size)
	{
		pos = list->size;
	}
	LinkNode* Pruent = &(list->head);
	for (int i = 0; i < pos; i++)
	{
		Pruent = Pruent->next;
	}
	LinkNode* Pel = Pruent->next;
	Pruent->next = Pel->next;

	list->size--;
}

void Delete_value(Linklist* list, LinkNode* data, COMPARER compare)
{
	if (list == NULL || data == NULL || compare == NULL)
	{
		return;
	}
	int pos = -1;
	LinkNode* Pruent = &(list->head);
	for (int i = 0; i < list->size; i++)
	{
		Pruent = Pruent->next;

		if (compare(Pruent, data) != 0)
		{
			pos = i;
			Delete_List(list,pos);
			break;
		}		
	}
	if (pos == -1)
	{
		printf("未找到改数据\n");
	}
}

int Find_List(Linklist* list, LinkNode* data, COMPARER compare)
{
	if (list == NULL || data == NULL)
	{
		return;
	}
	int pos = -1;
	LinkNode* Pruent = &(list->head);
	for (int i = 0; i < list->size; i++)
	{
		Pruent = Pruent->next;
		if (compare(Pruent, data) != 0)
		{
			pos = i;
			break;
		}
	}

	return pos;
}

void Print_list(Linklist* list,int n, printlist print)
{
	if (list == NULL)
	{
		return;
	}
	LinkNode* Pruent = &(list->head);
	for (int i = 0; i < list->size * n; i++)
	{
		Pruent = Pruent->next;
		print(Pruent);
		if (Pruent->next == &(list->head))
		{
			Pruent = &(list->head);
			printf("-----------------------\n");
		}
	}

}

int Size_Circularlist(Linklist* list)
{


	return list->size;
}

void Remove_List(Linklist* list)
{
	if (list == NULL)
	{
		return;
	}

	free(list);
	list = NULL;
}
