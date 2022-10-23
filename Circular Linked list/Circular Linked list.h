#pragma once



//����ѭ������  ����ǰ���  ��ͳ�������ҵ����ͬ�ĵط�����  ��ʼ��ͷ�ڵ�ʱ next��ָ��NULL,ָ���Լ���
//�жϽ���  ���ж�next�ǲ��ǵ���ͷ�ڵ�
//			 ͨ��size�����ж�(���Խ��в���)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//���β��õ���  ��ҵ����  ��Ϊ����

typedef struct LINKNODE
{
	struct LINKNODE* next;
}LinkNode;

typedef void(*printlist)(LinkNode*);

typedef int(*COMPARER)(LinkNode*,LinkNode*);

typedef struct LINKLIST
{
	LinkNode head;
	int size;
}Linklist;

//��ʼ������
Linklist* Init_List();
//����ڵ�
void Index_List(Linklist* list,int pos,LinkNode* node);
//ɾ���ڵ�
void Delete_List(Linklist* list, int pos);
//����ֵ����ɾ��
void Delete_value(Linklist* list,LinkNode* data, COMPARER compare);
//����
int Find_List(Linklist* list, LinkNode* data, COMPARER compare);
//��ӡ����
void Print_list(Linklist* list,int n, printlist print);
//�������ĳ���
int Size_Circularlist(Linklist* list);
//��������
void Remove_List(Linklist* list);
