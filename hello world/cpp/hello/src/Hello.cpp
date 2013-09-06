#include <hxcpp.h>

#ifndef INCLUDED_Hello
#include <Hello.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Hello_obj::__construct()
{
	return null();
}

Hello_obj::~Hello_obj() { }

Dynamic Hello_obj::__CreateEmpty() { return  new Hello_obj; }
hx::ObjectPtr< Hello_obj > Hello_obj::__new()
{  hx::ObjectPtr< Hello_obj > result = new Hello_obj();
	result->__construct();
	return result;}

Dynamic Hello_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hello_obj > result = new Hello_obj();
	result->__construct();
	return result;}

Void Hello_obj::main( ){
{
		HX_STACK_PUSH("Hello::main","Hello.hx",7);
		HX_STACK_LINE(7)
		::haxe::Log_obj::trace(HX_CSTRING("Hello World!"),hx::SourceInfo(HX_CSTRING("Hello.hx"),8,HX_CSTRING("Hello"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Hello_obj,main,(void))


Hello_obj::Hello_obj()
{
}

void Hello_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hello);
	HX_MARK_END_CLASS();
}

void Hello_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Hello_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hello_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Hello_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hello_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hello_obj::__mClass,"__mClass");
};

Class Hello_obj::__mClass;

void Hello_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hello"), hx::TCanCast< Hello_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Hello_obj::__boot()
{
}

