#include <hxcpp.h>

#include <haxe/ds/Option.h>
#include <haxe/Log.h>
#include <Type.h>
#include <Symbol.h>
#include <TicTacToe.h>
#include <StringTools.h>
#include <Std.h>
#include <Lambda.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::haxe::ds::Option_obj::__register();
::haxe::Log_obj::__register();
::Type_obj::__register();
::Symbol_obj::__register();
::TicTacToe_obj::__register();
::StringTools_obj::__register();
::Std_obj::__register();
::Lambda_obj::__register();
::haxe::Log_obj::__boot();
::Lambda_obj::__boot();
::Std_obj::__boot();
::StringTools_obj::__boot();
::TicTacToe_obj::__boot();
::Symbol_obj::__boot();
::Type_obj::__boot();
::haxe::ds::Option_obj::__boot();
}

