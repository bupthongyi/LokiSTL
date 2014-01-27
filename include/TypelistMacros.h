#ifndef _TYPE_LIST_MACROS_H__
#define _TYPE_LIST_MACROS_H__

#define LOKI_TYPELIST_1(T1) \
	::Loki::Typelist<T1, ::Loki::NullType>

#define LOKI_TYPELIST_2(T1, T2) \
	::Loki::Typelist<T1, LOKI_TYPELIST_1(T2)>

#define LOKI_TYPELIST_3(T1, T2, T3) \
	::Loki::Typelist<T1, LOKI_TYPELIST_2(T2, T3)>

#define LOKI_TYPELIST_4(T1, T2, T3, T4) \
	::Loki::Typelist<T1, LOKI_TYPELIST_3(T2, T3, T4)>

#define LOKI_TYPELIST_5(T1, T2, T3, T4, T5) \
	::Loki::Typelist<T1, LOKI_TYPELIST_4(T2, T3, T4, T5)>

#define LOKI_TYPELIST_6(T1, T2, T3, T4, T5, T6) \
	::Loki::Typelist<T1, LOKI_TYPELIST_5(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_7(T1, T2, T3, T4, T5, T6, T7) \
	::Loki::Typelist<T1, LOKI_TYPELIST_6(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_8(T1, T2, T3, T4, T5, T6, T7, T8) \
	::Loki::Typelist<T1, LOKI_TYPELIST_7(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_9(T1, T2, T3, T4, T5, T6, T7, T8, T9) \
	::Loki::Typelist<T1, LOKI_TYPELIST_8(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_10(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10) \
	::Loki::Typelist<T1, LOKI_TYPELIST_9(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_11(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11) \
	::Loki::Typelist<T1, LOKI_TYPELIST_10(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_12(T1, T2, T3, T4, T5,T6, T7, T8, T9, T10, \
	T11, T12) \
	::Loki::Typelist<T1, LOKI_TYPELIST_11(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_13(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13) \
	::Loki::Typelist<T1, LOKI_TYPELIST_12(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_14(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14) \
	::Loki::Typelist<T1, LOKI_TYPELIST_13(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_15(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15) \
	::Loki::Typelist<T1, LOKI_TYPELIST_14(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_16(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15, T16) \
	::Loki::Typelist<T1, LOKI_TYPELIST_15(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_17(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15, T16, T17) \
	::Loki::Typelist<T1, LOKI_TYPELIST_16(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_18(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15, T16, T17, T18) \
	::Loki::Typelist<T1, LOKI_TYPELIST_17(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_19(T1, T2, T3, T4, T5,T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15, T16, T17, T18, T19) \
	::Loki::Typelist<T1, LOKI_TYPELIST_18(T2, T3, T4, T5, T6)>

#define LOKI_TYPELIST_20(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, \
	T11, T12, T13, T14, T15, T16, T17, T18, T19, T20) \
	::Loki::Typelist<T1, LOKI_TYPELIST_19(T2, T3, T4, T5, T6)>

#endif