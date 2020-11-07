#pragma once
#include "Nodo.h";

template <typename T>
class Lista_Enlazada
{
public:
	Nodo<T>* start;
	Nodo<T>* end;
	int count;

	Lista_Enlazada() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~Lista_Enlazada() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtEnd(T new_value) {
		Nodo<T>* new_nodo = new Nodo<T>();
		new_nodo->value = new_value;

		if (IsEmpty()) {
			start = new_nodo;
			end = new_nodo;
		}
		else {
			end->next = new_nodo;
			new_nodo->prev = end;
			end = new_nodo;
		}

		count++;
		return;
	}
};
