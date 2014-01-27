#include "Typelist.h"

template <class TList, template <class> class Unit> class GenScatterHierarchy;

template <class T1, class T2, template <class> class Unit>
class GenScatterHierarchy<LOKI_TYPELIST_2(T1, T2), Unit>
	: public GenScatterHierarchy<T1, Unit>
	, public GenScatterHierarchy<T2, Unit>
{
};

template <class T1, template <class> class Unit>
class GenScatterHierarchy : public Unit<T1>
{
};

template <template <class> class Unit> 
class GenScatterHierarchy<Loki::NullType, Unit>
{
};

template <class T>
struct Holder
{
	T value_;
};

typedef GenScatterHierarchy<LOKI_TYPELIST_3(int, char, float), Holder> WidgetInfo;

int main(int argc, char* argv[])
{
	WidgetInfo obj;
	obj.value_;
	return 0;
}

