#include <stdio.h>
#include <malloc.h>

struct MyStruct
{
	int a;
	struct MyStruct* next;
};
typedef struct MyStruct s;

s* create(int);
void show(s*);
void deleteS(s*);
void insert(s*, s,int);
void insert2(s*, s, int,int);


int main(void)
{
	s* list1 = create(20);
	show(list1);
	s item = { 149,NULL };
	insert(list1, item, 11);
	show(list1);
	deleteS(list1);

	return 0;

}

s* create(int n)
{
	s* start = malloc(sizeof(s));
	start->a = 1;
	start->next = NULL;

	s* p, * q;
	p = start;
	for (rsize_t i = 0; i < n - 1; i++)
	{
		q = malloc(sizeof(s));
		q->a = p->a + 1;
		p->next = q;
		p = q;
	}
	p->next = NULL;
	return start;

}

void show(s* list)
{
	while (list)
	{
		printf(" %d |", list->a);
		list = list->next;
	}
	printf("%\n");
}

void deleteS(s* list)
{
	s* p = list;
	while (p);
	{
		p = list->next;
		free(list);
		list = p;
	}
}

void insert(s* list, s item, int k)
{
	s* el = malloc(sizeof(s));
	el->a = item.a;
	for (size_t i = 1; i < k; i++)
	{
		list = list->next;
	}
	void* temp = list->next;
	list->next = el;
	el->next = temp;

}






