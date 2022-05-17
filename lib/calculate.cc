#include <node.h>
#include <v8.h>
#include "uv-tp.h"
#include "macro.h"


namespace calculate {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::Number;
using v8::Value;
using v8::Value;
using v8::String;
using namespace std;
using namespace v8;

void Method(const FunctionCallbackInfo<Value> &args) {

v8::Isolate* isolate = args.GetIsolate();
v8::String::Utf8Value str(isolate, args[0]);
v8::String::Utf8Value str1(isolate, args[1]);
v8::String::Utf8Value str2(isolate, args[2]);
std::string cppStr(*str);
char  id[cppStr.size() + 1];
strcpy(id, cppStr.c_str()); 
//stringstream geek(cppStr);
//int x = 0;
//geek >> x;

std::string cppStr1(*str1);
char  channel[cppStr1.size() + 1];
strcpy(channel, cppStr1.c_str()); 
//stringstream geek2(cppStr1);
//int y = 0;
//eek2 >> y;

std::string cppStr2(*str2);
char  method[cppStr2.size() + 1];
strcpy(method, cppStr2.c_str()); 
//id=(char*)malloc(5*sizeof(char));
//id=cppStr.c_str();

/*char * method;
method=(char*)malloc(30*sizeof(char));
method=cppStr1.c_str();

char * channel = cppStr1.c_str();
channel=(char*)malloc(5*sizeof(char));
channel=cppStr2.c_str(); */

tracepoint(uv_provider, uv_send_event, id, channel, method);

//auto total = Number::New(isolate, x);
//args.GetReturnValue().Set(total);
}

void Initialize(Local<Object> exports) {

     NODE_SET_METHOD(exports, "send_event", Method);

   }

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}
