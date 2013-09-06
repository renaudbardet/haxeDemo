#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Symbol
#include <Symbol.h>
#endif
#ifndef INCLUDED_TicTacToe
#include <TicTacToe.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void TicTacToe_obj::__construct(Dynamic _p1,Dynamic _p2)
{
HX_STACK_PUSH("TicTacToe::new","TicTacToe.hx",17);
{
	HX_STACK_LINE(19)
	this->grid = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new().Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None)).Add(Array_obj< ::Dynamic >::__new().Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None)).Add(Array_obj< ::Dynamic >::__new().Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None).Add(::haxe::ds::Option_obj::None));
	HX_STACK_LINE(25)
	this->playerTic = _p1;
	HX_STACK_LINE(26)
	this->playerTac = _p2;
}
;
	return null();
}

TicTacToe_obj::~TicTacToe_obj() { }

Dynamic TicTacToe_obj::__CreateEmpty() { return  new TicTacToe_obj; }
hx::ObjectPtr< TicTacToe_obj > TicTacToe_obj::__new(Dynamic _p1,Dynamic _p2)
{  hx::ObjectPtr< TicTacToe_obj > result = new TicTacToe_obj();
	result->__construct(_p1,_p2);
	return result;}

Dynamic TicTacToe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TicTacToe_obj > result = new TicTacToe_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::haxe::ds::Option TicTacToe_obj::detectWinner( ){
	HX_STACK_PUSH("TicTacToe::detectWinner","TicTacToe.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >())).Add(Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get((int)1).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()->__get((int)1).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()->__get((int)1).StaticCast< ::haxe::ds::Option >())).Add(Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get((int)2).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()->__get((int)2).StaticCast< ::haxe::ds::Option >()));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(73)
	Array< ::Dynamic > winningSchemes = Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()).Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()).Add(t->__get((int)0).StaticCast< Array< ::Dynamic > >()).Add(t->__get((int)1).StaticCast< Array< ::Dynamic > >()).Add(t->__get((int)2).StaticCast< Array< ::Dynamic > >()).Add(Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()->__get((int)1).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()->__get((int)2).StaticCast< ::haxe::ds::Option >())).Add(Array_obj< ::Dynamic >::__new().Add(this->grid->__get((int)2).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)1).StaticCast< Array< ::Dynamic > >()->__get((int)1).StaticCast< ::haxe::ds::Option >()).Add(this->grid->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get((int)2).StaticCast< ::haxe::ds::Option >()));		HX_STACK_VAR(winningSchemes,"winningSchemes");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		while(((_g < winningSchemes->length))){
			HX_STACK_LINE(80)
			Array< ::Dynamic > scheme = winningSchemes->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(scheme,"scheme");
			HX_STACK_LINE(80)
			++(_g);
			HX_STACK_LINE(82)
			::haxe::ds::Option winnerSymbol = ::haxe::ds::Option_obj::None;		HX_STACK_VAR(winnerSymbol,"winnerSymbol");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(::Symbol_obj::Tic).Add(::Symbol_obj::Tac);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(83)
				while(((_g1 < _g2->length))){
					HX_STACK_LINE(83)
					::Symbol symbol = _g2->__get(_g1).StaticCast< ::Symbol >();		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(83)
					++(_g1);
					struct _Function_5_1{
						inline static Dynamic Block( ::Symbol &symbol){
							HX_STACK_PUSH("*::closure","TicTacToe.hx",85);
							{
								HX_STACK_LINE(85)
								Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new().Add(::haxe::ds::Option_obj::Some(symbol));		HX_STACK_VAR(a,"a");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_1,Array< ::Dynamic >,a)
								bool run(::haxe::ds::Option b){
									HX_STACK_PUSH("*::_Function_6_1","TicTacToe.hx",85);
									HX_STACK_ARG(b,"b");
									{
										HX_STACK_LINE(85)
										return ::Type_obj::enumEq(a->__get((int)0).StaticCast< ::haxe::ds::Option >(),b);
									}
									return null();
								}
								HX_END_LOCAL_FUNC1(return)

								HX_STACK_LINE(85)
								return  Dynamic(new _Function_6_1(a));
							}
							return null();
						}
					};
					HX_STACK_LINE(85)
					if (((::Lambda_obj::count(scheme,_Function_5_1::Block(symbol)) == (int)3))){
						HX_STACK_LINE(87)
						winnerSymbol = ::haxe::ds::Option_obj::Some(symbol);
						HX_STACK_LINE(88)
						break;
					}
				}
			}
			HX_STACK_LINE(93)
			{
				::haxe::ds::Option _switch_1 = (winnerSymbol);
				switch((_switch_1)->GetIndex()){
					case 1: {
					}
					;break;
					case 0: {
						Dynamic winnerSymbol_eSome_0 = _switch_1->__Param(0);
{
							HX_STACK_LINE(93)
							{
								::Symbol _switch_2 = (winnerSymbol_eSome_0);
								switch((_switch_2)->GetIndex()){
									case 0: {
										HX_STACK_LINE(95)
										return ::haxe::ds::Option_obj::Some(this->playerTic);
									}
									;break;
									case 1: {
										HX_STACK_LINE(96)
										return ::haxe::ds::Option_obj::Some(this->playerTac);
									}
									;break;
								}
							}
						}
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(101)
	return ::haxe::ds::Option_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC0(TicTacToe_obj,detectWinner,return )

::haxe::ds::Option TicTacToe_obj::play( ){
	HX_STACK_PUSH("TicTacToe::play","TicTacToe.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(33)
	::haxe::ds::Option winner = ::haxe::ds::Option_obj::None;		HX_STACK_VAR(winner,"winner");
	HX_STACK_LINE(35)
	Dynamic moves = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(moves,"moves");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &_g1,Dynamic &moves){
			HX_STACK_PUSH("*::closure","TicTacToe.hx",37);
			{
				hx::Anon __result = hx::Anon_obj::Create();

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g1,Dynamic,moves)
				bool run(){
					HX_STACK_PUSH("*::_Function_2_1","TicTacToe.hx",38);
					{
						struct _Function_3_1{
							inline static Dynamic Block( Array< ::Dynamic > &_g1){
								HX_STACK_PUSH("*::closure","TicTacToe.hx",39);
								{
									HX_STACK_LINE(39)
									Dynamic _g = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(39)
									{
										HX_STACK_LINE(39)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										int _g2 = _g1->__get((int)0).StaticCast< ::TicTacToe >()->grid->length;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(39)
										while(((_g3 < _g2))){
											HX_STACK_LINE(39)
											int i = (_g3)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(39)
											int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
											int _g4 = _g1->__get((int)0).StaticCast< ::TicTacToe >()->grid->__get(i).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(39)
											while(((_g5 < _g4))){
												HX_STACK_LINE(39)
												int j = (_g5)++;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(39)
												if ((::Type_obj::enumEq(_g1->__get((int)0).StaticCast< ::TicTacToe >()->grid->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::haxe::ds::Option >(),::haxe::ds::Option_obj::None))){
													struct _Function_8_1{
														inline static Dynamic Block( int &i,int &j){
															HX_STACK_PUSH("*::closure","TicTacToe.hx",39);
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_CSTRING("x") , i,false);
																__result->Add(HX_CSTRING("y") , j,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(39)
													_g->__Field(HX_CSTRING("push"),true)(_Function_8_1::Block(i,j));
												}
											}
										}
									}
									HX_STACK_LINE(39)
									return _g;
								}
								return null();
							}
						};
						HX_STACK_LINE(39)
						hx::IndexRef((moves).mPtr,(int)0) = _Function_3_1::Block(_g1);
						HX_STACK_LINE(40)
						return (moves->__GetItem((int)0)->__Field(HX_CSTRING("length"),true) > (int)0);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_CSTRING("hasNext") ,  Dynamic(new _Function_2_1(_g1,moves)),true);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Dynamic,moves)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_2","TicTacToe.hx",42);
					{
						HX_STACK_LINE(42)
						return moves->__GetItem((int)0)->__GetItem(::Std_obj::_int((::Math_obj::random() * moves->__GetItem((int)0)->__Field(HX_CSTRING("length"),true))));
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_2_2(moves)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	Dynamic moveIterator = _Function_1_1::Block(_g1,moves);		HX_STACK_VAR(moveIterator,"moveIterator");
	HX_STACK_LINE(45)
	Array< ::Dynamic > playOrder = Array_obj< ::Dynamic >::__new().Add(::Symbol_obj::Tic).Add(::Symbol_obj::Tac);		HX_STACK_VAR(playOrder,"playOrder");
	HX_STACK_LINE(46)
	int currentPlayer = ::Std_obj::_int((::Math_obj::random() * (int)2));		HX_STACK_VAR(currentPlayer,"currentPlayer");
	HX_STACK_LINE(48)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(moveIterator);  __it->hasNext(); ){
		Dynamic move = __it->next();
		{
			HX_STACK_LINE(51)
			this->grid->__get(move->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()[move->__Field(HX_CSTRING("y"),true)] = ::haxe::ds::Option_obj::Some(playOrder->__get(currentPlayer).StaticCast< ::Symbol >());
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::haxe::ds::Option _g = winner = this->detectWinner();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				{
					::haxe::ds::Option _switch_3 = (_g);
					int _switch_4 = (_switch_3)->GetIndex();{
						if (1==_switch_4) {
							HX_STACK_LINE(54)
							currentPlayer = hx::Mod(++(currentPlayer),(int)2);
						}
						else if (0==_switch_4) {
							HX_STACK_LINE(55)
							break;
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(60)
	return winner;
}


HX_DEFINE_DYNAMIC_FUNC0(TicTacToe_obj,play,return )

Dynamic TicTacToe_obj::leaderboards;

Void TicTacToe_obj::main( ){
{
		HX_STACK_PUSH("TicTacToe::main","TicTacToe.hx",106);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",110);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Adam"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",111);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Alex"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",112);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Alexis"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",113);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Arnaud"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",114);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Corentin"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",115);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Francois"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",116);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Kevin"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",117);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Lizhao"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",118);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Olivier"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",119);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Peter"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",120);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Renaud"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","TicTacToe.hx",121);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("Titi"),false);
					__result->Add(HX_CSTRING("points") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		::TicTacToe_obj::leaderboards = Dynamic( Array_obj<Dynamic>::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block()).Add(_Function_1_4::Block()).Add(_Function_1_5::Block()).Add(_Function_1_6::Block()).Add(_Function_1_7::Block()).Add(_Function_1_8::Block()).Add(_Function_1_9::Block()).Add(_Function_1_10::Block()).Add(_Function_1_11::Block()).Add(_Function_1_12::Block()));
		HX_STACK_LINE(124)
		Dynamic players = ::TicTacToe_obj::leaderboards->__Field(HX_CSTRING("copy"),true)();		HX_STACK_VAR(players,"players");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = players->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			while(((_g1 < _g))){
				HX_STACK_LINE(126)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(129)
				Dynamic playerA = players->__GetItem(i);		HX_STACK_VAR(playerA,"playerA");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					int _g3 = (i + (int)1);		HX_STACK_VAR(_g3,"_g3");
					int _g2 = players->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(130)
					while(((_g3 < _g2))){
						HX_STACK_LINE(130)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(132)
						Dynamic playerB = players->__GetItem(j);		HX_STACK_VAR(playerB,"playerB");
						HX_STACK_LINE(134)
						::haxe::Log_obj::trace((((HX_CSTRING("matching ") + playerA->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(" and ")) + playerB->__Field(HX_CSTRING("name"),true)),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),134,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
						HX_STACK_LINE(136)
						::TicTacToe ttt = ::TicTacToe_obj::__new(playerA,playerB);		HX_STACK_VAR(ttt,"ttt");
						HX_STACK_LINE(137)
						::haxe::ds::Option winner = ttt->play();		HX_STACK_VAR(winner,"winner");
						HX_STACK_LINE(139)
						{
							::haxe::ds::Option _switch_5 = (winner);
							switch((_switch_5)->GetIndex()){
								case 1: {
									HX_STACK_LINE(140)
									::haxe::Log_obj::trace(HX_CSTRING("draw! nobody gets any points"),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),140,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
								}
								;break;
								case 0: {
									Dynamic p = _switch_5->__Param(0);
{
										HX_STACK_LINE(142)
										++(p->__FieldRef(HX_CSTRING("points")));
										HX_STACK_LINE(144)
										::haxe::Log_obj::trace(((HX_CSTRING("") + p->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(" wins!")),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),144,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
										HX_STACK_LINE(146)
										::TicTacToe_obj::sortleaderboards();
										HX_STACK_LINE(148)
										int pos = (::Lambda_obj::indexOf(::TicTacToe_obj::leaderboards,p) + (int)1);		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(150)
										::haxe::Log_obj::trace(::StringTools_obj::replace(((((((HX_CSTRING("") + p->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(" is now ")) + pos) + HX_CSTRING("[th] with ")) + p->__Field(HX_CSTRING("points"),true)) + HX_CSTRING(" points.")),HX_CSTRING("[th]"),(  (((hx::Mod(pos,(int)10) == (int)1))) ? ::String(HX_CSTRING("st")) : ::String((  (((hx::Mod(pos,(int)10) == (int)2))) ? ::String(HX_CSTRING("nd")) : ::String((  (((hx::Mod(pos,(int)10) == (int)3))) ? ::String(HX_CSTRING("rd")) : ::String(HX_CSTRING("th")) )) )) )),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),150,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
									}
								}
								;break;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(165)
		::haxe::Log_obj::trace(HX_CSTRING("End of the tournament!, and the winner is:"),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),165,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
		HX_STACK_LINE(166)
		::haxe::Log_obj::trace((::TicTacToe_obj::leaderboards->__GetItem((int)0)->__Field(HX_CSTRING("name"),true) + HX_CSTRING("!")),hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),166,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
		HX_STACK_LINE(167)
		::haxe::Log_obj::trace(::TicTacToe_obj::leaderboards,hx::SourceInfo(HX_CSTRING("TicTacToe.hx"),167,HX_CSTRING("TicTacToe"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TicTacToe_obj,main,(void))

Void TicTacToe_obj::sortleaderboards( ){
{
		HX_STACK_PUSH("TicTacToe::sortleaderboards","TicTacToe.hx",172);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(Dynamic a,Dynamic b){
			HX_STACK_PUSH("*::_Function_1_1","TicTacToe.hx",174);
			HX_STACK_ARG(a,"a");
			HX_STACK_ARG(b,"b");
			{
				HX_STACK_LINE(174)
				return (b->__Field(HX_CSTRING("points"),true) - a->__Field(HX_CSTRING("points"),true));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(172)
		::TicTacToe_obj::leaderboards->__Field(HX_CSTRING("sort"),true)( Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TicTacToe_obj,sortleaderboards,(void))


TicTacToe_obj::TicTacToe_obj()
{
}

void TicTacToe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TicTacToe);
	HX_MARK_MEMBER_NAME(playerTac,"playerTac");
	HX_MARK_MEMBER_NAME(playerTic,"playerTic");
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_END_CLASS();
}

void TicTacToe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playerTac,"playerTac");
	HX_VISIT_MEMBER_NAME(playerTic,"playerTic");
	HX_VISIT_MEMBER_NAME(grid,"grid");
}

Dynamic TicTacToe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerTac") ) { return playerTac; }
		if (HX_FIELD_EQ(inName,"playerTic") ) { return playerTic; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"leaderboards") ) { return leaderboards; }
		if (HX_FIELD_EQ(inName,"detectWinner") ) { return detectWinner_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sortleaderboards") ) { return sortleaderboards_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TicTacToe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerTac") ) { playerTac=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerTic") ) { playerTic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"leaderboards") ) { leaderboards=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TicTacToe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playerTac"));
	outFields->push(HX_CSTRING("playerTic"));
	outFields->push(HX_CSTRING("grid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("leaderboards"),
	HX_CSTRING("main"),
	HX_CSTRING("sortleaderboards"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("detectWinner"),
	HX_CSTRING("play"),
	HX_CSTRING("playerTac"),
	HX_CSTRING("playerTic"),
	HX_CSTRING("grid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TicTacToe_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TicTacToe_obj::leaderboards,"leaderboards");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TicTacToe_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TicTacToe_obj::leaderboards,"leaderboards");
};

Class TicTacToe_obj::__mClass;

void TicTacToe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TicTacToe"), hx::TCanCast< TicTacToe_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TicTacToe_obj::__boot()
{
}

