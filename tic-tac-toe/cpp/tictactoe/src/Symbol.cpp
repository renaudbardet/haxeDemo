#include <hxcpp.h>

#ifndef INCLUDED_Symbol
#include <Symbol.h>
#endif

::Symbol Symbol_obj::Tac;

::Symbol Symbol_obj::Tic;

HX_DEFINE_CREATE_ENUM(Symbol_obj)

int Symbol_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Tac")) return 1;
	if (inName==HX_CSTRING("Tic")) return 0;
	return super::__FindIndex(inName);
}

int Symbol_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Tac")) return 0;
	if (inName==HX_CSTRING("Tic")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Symbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Tac")) return Tac;
	if (inName==HX_CSTRING("Tic")) return Tic;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Tic"),
	HX_CSTRING("Tac"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Symbol_obj::Tac,"Tac");
	HX_MARK_MEMBER_NAME(Symbol_obj::Tic,"Tic");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Symbol_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Symbol_obj::Tac,"Tac");
	HX_VISIT_MEMBER_NAME(Symbol_obj::Tic,"Tic");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Symbol_obj::__mClass;

Dynamic __Create_Symbol_obj() { return new Symbol_obj; }

void Symbol_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Symbol"), hx::TCanCast< Symbol_obj >,sStaticFields,sMemberFields,
	&__Create_Symbol_obj, &__Create,
	&super::__SGetClass(), &CreateSymbol_obj, sMarkStatics, sVisitStatic);
}

void Symbol_obj::__boot()
{
hx::Static(Tac) = hx::CreateEnum< Symbol_obj >(HX_CSTRING("Tac"),1);
hx::Static(Tic) = hx::CreateEnum< Symbol_obj >(HX_CSTRING("Tic"),0);
}


