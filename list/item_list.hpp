#ifndef _ITEM_H_
#define _ITEM_H_

template<typename T>
struct item_list{
	T value;
	item_list *proxItem;
	item_list *itemAnterior;
};

#endif