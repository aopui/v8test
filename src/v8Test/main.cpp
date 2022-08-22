#include <iostream>
#include <cjson/cJSON.h>
#include <string>
#include <v8.h>
#include <libplatform/libplatform.h>
#include <v8-context.h>
#include <v8-initialization.h>
#include <v8-isolate.h>
#include <v8-local-handle.h>
#include <v8-primitive.h>
#include <v8-script.h>


using namespace std;
int main(int argc, char* argv[]){
    
  v8::V8::InitializeICUDefaultLocation(argv[0]);
  v8::V8::InitializeExternalStartupData(argv[0]);
  std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
  v8::V8::InitializePlatform(platform.get());
  v8::V8::Initialize();



    cJSON *name = NULL;
    name = cJSON_CreateString("Awesome 4K");
    struct cJSON *next;
    // int ret=slib::add(10,20);
    // //cout<<"####hello"+to_string(ret)<<endl;

    // ret=dlib::sub(20,5);
    //cout<<"####hello"+to_string(ret)<<endl;
    return 0;
}


