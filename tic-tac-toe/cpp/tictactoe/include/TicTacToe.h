#ifndef INCLUDED_TicTacToe
#define INCLUDED_TicTacToe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TicTacToe)
HX_DECLARE_CLASS2(haxe,ds,Option)


class HXCPP_CLASS_ATTRIBUTES  TicTacToe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TicTacToe_obj OBJ_;
		TicTacToe_obj();
		Void __construct(Dynamic _p1,Dynamic _p2);

	public:
		static hx::ObjectPtr< TicTacToe_obj > __new(Dynamic _p1,Dynamic _p2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TicTacToe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TicTacToe"); }

		virtual ::haxe::ds::Option detectWinner( );
		Dynamic detectWinner_dyn();

		virtual ::haxe::ds::Option play( );
		Dynamic play_dyn();

		Dynamic playerTac;
		Dynamic playerTic;
		Array< ::Dynamic > grid;
		static Dynamic leaderboards;
		static Void main( );
		static Dynamic main_dyn();

		static Void sortleaderboards( );
		static Dynamic sortleaderboards_dyn();

};


#endif /* INCLUDED_TicTacToe */ 
