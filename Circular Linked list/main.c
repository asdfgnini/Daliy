#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#include "Circular Linked list.h"

typedef struct PERSON
{
    LinkNode node;
    char name[64];
    int age;
}Person;


void print(LinkNode* data)
{
    Person* p = (Person*)data;
    printf("姓名： %s  年龄: %d\n",p->name,p->age);

}
int Compare(LinkNode* src, LinkNode* data)
{
    Person* p1 = (Person*)src;
    Person* p2 = (Person*)data;
    if (strcmp(p1->name,p2->name) == 0 && p1->age == p2->age)
    {
        return 1;
    }
    return 0;
}
void test01()
{
    Linklist* list = Init_List();
	Person person[5] = { 0 };
    char temp[64];
    for (int i = 0; i < 5; i++)
    {
		person[i].node.next = NULL;
		sprintf(temp, "%d%d", i, i + 1);
		strcpy(person[i].name, temp);
		person[i].age = i + 10;
        Index_List(list,0,(LinkNode*)&person[i]);
	}
    Print_list(list, 2, print);
    printf("链表个数: %d\n",list->size);
    Delete_List(list,3);
    Print_list(list, 2, print);
    printf("链表个数: %d\n",list->size);
    //Remove_List(list);
    //Print_list(list, 2, print);
    //printf("链表个数: %d\n",list->size);
    printf("链表长度为:%d\n",Size_Circularlist(list));
    Delete_value(list,(LinkNode*)&person[3], Compare);
    Print_list(list, 2, print);
    printf("链表个数: %d\n", list->size);
    printf("位置时: %d\n", Find_List(list, (LinkNode*)&person[0], Compare));

}


int main()
{

    test01();


    printf("hello world\n");
    system("pause");
    return 0;
}