// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIobjdImydict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "../interface/ConfigFileLine.h"
#include "../interface/ConfigParser.h"
#include "../interface/EffCounter.h"
#include "../interface/HistoManager.h"
#include "../interface/histoUtils.h"
#include "../interface/plotContainer.h"
#include "../interface/utils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *ConfigFileLine_Dictionary();
   static void ConfigFileLine_TClassManip(TClass*);
   static void delete_ConfigFileLine(void *p);
   static void deleteArray_ConfigFileLine(void *p);
   static void destruct_ConfigFileLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConfigFileLine*)
   {
      ::ConfigFileLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConfigFileLine));
      static ::ROOT::TGenericClassInfo 
         instance("ConfigFileLine", "ConfigFileLine.h", 18,
                  typeid(::ConfigFileLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConfigFileLine_Dictionary, isa_proxy, 0,
                  sizeof(::ConfigFileLine) );
      instance.SetDelete(&delete_ConfigFileLine);
      instance.SetDeleteArray(&deleteArray_ConfigFileLine);
      instance.SetDestructor(&destruct_ConfigFileLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConfigFileLine*)
   {
      return GenerateInitInstanceLocal((::ConfigFileLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ConfigFileLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConfigFileLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConfigFileLine*)0x0)->GetClass();
      ConfigFileLine_TClassManip(theClass);
   return theClass;
   }

   static void ConfigFileLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConfigParser_Dictionary();
   static void ConfigParser_TClassManip(TClass*);
   static void *new_ConfigParser(void *p = 0);
   static void *newArray_ConfigParser(Long_t size, void *p);
   static void delete_ConfigParser(void *p);
   static void deleteArray_ConfigParser(void *p);
   static void destruct_ConfigParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConfigParser*)
   {
      ::ConfigParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConfigParser));
      static ::ROOT::TGenericClassInfo 
         instance("ConfigParser", "ConfigParser.h", 23,
                  typeid(::ConfigParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConfigParser_Dictionary, isa_proxy, 0,
                  sizeof(::ConfigParser) );
      instance.SetNew(&new_ConfigParser);
      instance.SetNewArray(&newArray_ConfigParser);
      instance.SetDelete(&delete_ConfigParser);
      instance.SetDeleteArray(&deleteArray_ConfigParser);
      instance.SetDestructor(&destruct_ConfigParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConfigParser*)
   {
      return GenerateInitInstanceLocal((::ConfigParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ConfigParser*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConfigParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConfigParser*)0x0)->GetClass();
      ConfigParser_TClassManip(theClass);
   return theClass;
   }

   static void ConfigParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EffCounter_Dictionary();
   static void EffCounter_TClassManip(TClass*);
   static void *new_EffCounter(void *p = 0);
   static void *newArray_EffCounter(Long_t size, void *p);
   static void delete_EffCounter(void *p);
   static void deleteArray_EffCounter(void *p);
   static void destruct_EffCounter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EffCounter*)
   {
      ::EffCounter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EffCounter));
      static ::ROOT::TGenericClassInfo 
         instance("EffCounter", "EffCounter.h", 20,
                  typeid(::EffCounter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EffCounter_Dictionary, isa_proxy, 0,
                  sizeof(::EffCounter) );
      instance.SetNew(&new_EffCounter);
      instance.SetNewArray(&newArray_EffCounter);
      instance.SetDelete(&delete_EffCounter);
      instance.SetDeleteArray(&deleteArray_EffCounter);
      instance.SetDestructor(&destruct_EffCounter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EffCounter*)
   {
      return GenerateInitInstanceLocal((::EffCounter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::EffCounter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EffCounter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EffCounter*)0x0)->GetClass();
      EffCounter_TClassManip(theClass);
   return theClass;
   }

   static void EffCounter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HistoManager_Dictionary();
   static void HistoManager_TClassManip(TClass*);
   static void delete_HistoManager(void *p);
   static void deleteArray_HistoManager(void *p);
   static void destruct_HistoManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HistoManager*)
   {
      ::HistoManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HistoManager));
      static ::ROOT::TGenericClassInfo 
         instance("HistoManager", "HistoManager.h", 27,
                  typeid(::HistoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HistoManager_Dictionary, isa_proxy, 0,
                  sizeof(::HistoManager) );
      instance.SetDelete(&delete_HistoManager);
      instance.SetDeleteArray(&deleteArray_HistoManager);
      instance.SetDestructor(&destruct_HistoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HistoManager*)
   {
      return GenerateInitInstanceLocal((::HistoManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HistoManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HistoManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::HistoManager*)0x0)->GetClass();
      HistoManager_TClassManip(theClass);
   return theClass;
   }

   static void HistoManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *plotContainer_Dictionary();
   static void plotContainer_TClassManip(TClass*);
   static void delete_plotContainer(void *p);
   static void deleteArray_plotContainer(void *p);
   static void destruct_plotContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::plotContainer*)
   {
      ::plotContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::plotContainer));
      static ::ROOT::TGenericClassInfo 
         instance("plotContainer", "plotContainer.h", 36,
                  typeid(::plotContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &plotContainer_Dictionary, isa_proxy, 0,
                  sizeof(::plotContainer) );
      instance.SetDelete(&delete_plotContainer);
      instance.SetDeleteArray(&deleteArray_plotContainer);
      instance.SetDestructor(&destruct_plotContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::plotContainer*)
   {
      return GenerateInitInstanceLocal((::plotContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::plotContainer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *plotContainer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::plotContainer*)0x0)->GetClass();
      plotContainer_TClassManip(theClass);
   return theClass;
   }

   static void plotContainer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ConfigFileLine(void *p) {
      delete ((::ConfigFileLine*)p);
   }
   static void deleteArray_ConfigFileLine(void *p) {
      delete [] ((::ConfigFileLine*)p);
   }
   static void destruct_ConfigFileLine(void *p) {
      typedef ::ConfigFileLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConfigFileLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConfigParser(void *p) {
      return  p ? new(p) ::ConfigParser : new ::ConfigParser;
   }
   static void *newArray_ConfigParser(Long_t nElements, void *p) {
      return p ? new(p) ::ConfigParser[nElements] : new ::ConfigParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConfigParser(void *p) {
      delete ((::ConfigParser*)p);
   }
   static void deleteArray_ConfigParser(void *p) {
      delete [] ((::ConfigParser*)p);
   }
   static void destruct_ConfigParser(void *p) {
      typedef ::ConfigParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConfigParser

namespace ROOT {
   // Wrappers around operator new
   static void *new_EffCounter(void *p) {
      return  p ? new(p) ::EffCounter : new ::EffCounter;
   }
   static void *newArray_EffCounter(Long_t nElements, void *p) {
      return p ? new(p) ::EffCounter[nElements] : new ::EffCounter[nElements];
   }
   // Wrapper around operator delete
   static void delete_EffCounter(void *p) {
      delete ((::EffCounter*)p);
   }
   static void deleteArray_EffCounter(void *p) {
      delete [] ((::EffCounter*)p);
   }
   static void destruct_EffCounter(void *p) {
      typedef ::EffCounter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EffCounter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_HistoManager(void *p) {
      delete ((::HistoManager*)p);
   }
   static void deleteArray_HistoManager(void *p) {
      delete [] ((::HistoManager*)p);
   }
   static void destruct_HistoManager(void *p) {
      typedef ::HistoManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HistoManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_plotContainer(void *p) {
      delete ((::plotContainer*)p);
   }
   static void deleteArray_plotContainer(void *p) {
      delete [] ((::plotContainer*)p);
   }
   static void destruct_plotContainer(void *p) {
      typedef ::plotContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::plotContainer

namespace {
  void TriggerDictionaryInitialization_mydict_Impl() {
    static const char* headers[] = {
"../interface/ConfigFileLine.h",
"../interface/ConfigParser.h",
"../interface/EffCounter.h",
"../interface/HistoManager.h",
"../interface/histoUtils.h",
"../interface/plotContainer.h",
"../interface/utils.h",
0
    };
    static const char* includePaths[] = {
"../interface/",
"/Applications/root_v6.08.00/include",
"/Applications/root_v6.08.00/include",
"/Users/govoni/private/job/VBSCan/myWork/2016-fit-longitudinal/FWKTemplate/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "mydict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$../interface/ConfigFileLine.h")))  ConfigFileLine;
class __attribute__((annotate("$clingAutoload$../interface/ConfigParser.h")))  ConfigParser;
class __attribute__((annotate("$clingAutoload$../interface/EffCounter.h")))  EffCounter;
class __attribute__((annotate("$clingAutoload$../interface/HistoManager.h")))  HistoManager;
struct __attribute__((annotate("$clingAutoload$../interface/histoUtils.h")))  plotContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "mydict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "../interface/ConfigFileLine.h"
#include "../interface/ConfigParser.h"
#include "../interface/EffCounter.h"
#include "../interface/HistoManager.h"
#include "../interface/histoUtils.h"
#include "../interface/plotContainer.h"
#include "../interface/utils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ConfigFileLine", payloadCode, "@",
"ConfigParser", payloadCode, "@",
"EffCounter", payloadCode, "@",
"HistoManager", payloadCode, "@",
"plotContainer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("mydict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_mydict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_mydict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_mydict() {
  TriggerDictionaryInitialization_mydict_Impl();
}
