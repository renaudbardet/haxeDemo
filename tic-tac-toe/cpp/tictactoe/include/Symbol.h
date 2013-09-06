#ifndef INCLUDED_Symbol
#define INCLUDED_Symbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Symbol)


class Symbol_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Symbol_obj OBJ_;

	public:
		Symbol_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Symbol"); }
		::String __ToString() const { return HX_CSTRING("Symbol.") + tag; }

		static ::Symbol Tac;
		static inline ::Symbol Tac_dyn() { return Tac; }
		static ::Symbol Tic;
		static inline ::Symbol Tic_dyn() { return Tic; }
};


#endif /* INCLUDED_Symbol */ 
