#pragma once



//单向循环链表  （与前面的  传统链表和企业链表不同的地方在于  初始化头节点时 next不指向NULL,指向自己）
//判断结束  ：判断next是不是等于头节点
//			 通过size进行判断(可以进行测试)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//本次采用的是  企业链表  作为基础

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

//初始化链表
Linklist* Init_List();
//插入节点
void Index_List(Linklist* list,int pos,LinkNode* node);
//删除节点
void Delete_List(Linklist* list, int pos);
//根据值进行删除
void Delete_value(Linklist* list,LinkNode* data, COMPARER compare);
//查找
int Find_List(Linklist* list, LinkNode* data, COMPARER compare);
//打印链表
void Print_list(Linklist* list,int n, printlist print);
//获得链表的长度
int Size_Circularlist(Linklist* list);
//销毁链表
void Remove_List(Linklist* list);
