#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>


struct Stack_Element
{
	Stack_Element* next;
	Stack_Element* previous;
	int value;

};


class Stack_List
{
private:
	Stack_Element* List;

public:
	Stack_List();

	bool empty();
	Stack_Element* top();
	void Print();

	void pop_front();

	void push_front(int value);

	~Stack_List();
};


int main(int argc, char* argv[])
{
	Stack_List Obj = {};
	Obj.push_front(20);
	Obj.push_front(21);
	Obj.push_front(22);
	Obj.push_front(23);
	Obj.push_front(24);

	Obj.Print();
	Obj.pop_front();
	Obj.Print();
	Obj.pop_front();
	Obj.Print();
	Obj.pop_front();
	Obj.Print();
	Obj.pop_front();
	Obj.Print();
	Obj.pop_front();
	Obj.Print();
	
	return EXIT_SUCCESS;
}


Stack_List::Stack_List()
{

}

bool Stack_List::empty()
{
	return !List;
}

Stack_Element* Stack_List::top()
{
	return List;
}

void Stack_List::Print()
{
	if (List == NULL)
	{
		printf("List is empty");
	}
	else
	{
		Stack_Element* current = List;
		do
		{
			printf("%i", current->value);
			printf("\n");
			current = current->next;
		} while (current != NULL);
		printf("\n");
	}
}

void Stack_List::pop_front()
{
	if (List != NULL)
	{
		if (List->next == NULL)
		{
			List = NULL;
		}
		else
		{
			Stack_Element* temp;
			temp = List->next;
			free(List);
			List = temp;
			List->previous = NULL;
		}
	}
}

void Stack_List::push_front(int value)
{
	if (List == NULL)
	{
		List = (Stack_Element*)malloc(sizeof(Stack_Element));
		List->value = value;
		List->previous = NULL;
		List->next = NULL;
	}
	else
	{
		Stack_Element* current;
		current = (Stack_Element*)malloc(sizeof(Stack_Element));
		current->value = value;
		current->previous = NULL;
		current->next = List;
		List->previous = current;
		List = current;
	}
}


Stack_List::~Stack_List()
{
	while (List)
	{
		pop_front();
	}
}