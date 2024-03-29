//
// File generated by rootcint at Wed Oct 29 21:22:23 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dOdIincludedIDictionary_DmpEvtBgoPID
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "Dictionary_DmpEvtBgoPID.h"

#include "TCollectionProxyInfo.h"
#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void DmpEvtBgoPID_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_DmpEvtBgoPID(void *p = 0);
   static void *newArray_DmpEvtBgoPID(Long_t size, void *p);
   static void delete_DmpEvtBgoPID(void *p);
   static void deleteArray_DmpEvtBgoPID(void *p);
   static void destruct_DmpEvtBgoPID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DmpEvtBgoPID*)
   {
      ::DmpEvtBgoPID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DmpEvtBgoPID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DmpEvtBgoPID", ::DmpEvtBgoPID::Class_Version(), "./include/DmpEvtBgoPID.h", 13,
                  typeid(::DmpEvtBgoPID), DefineBehavior(ptr, ptr),
                  &::DmpEvtBgoPID::Dictionary, isa_proxy, 4,
                  sizeof(::DmpEvtBgoPID) );
      instance.SetNew(&new_DmpEvtBgoPID);
      instance.SetNewArray(&newArray_DmpEvtBgoPID);
      instance.SetDelete(&delete_DmpEvtBgoPID);
      instance.SetDeleteArray(&deleteArray_DmpEvtBgoPID);
      instance.SetDestructor(&destruct_DmpEvtBgoPID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DmpEvtBgoPID*)
   {
      return GenerateInitInstanceLocal((::DmpEvtBgoPID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DmpEvtBgoPID*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *DmpEvtBgoPID::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *DmpEvtBgoPID::Class_Name()
{
   return "DmpEvtBgoPID";
}

//______________________________________________________________________________
const char *DmpEvtBgoPID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DmpEvtBgoPID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DmpEvtBgoPID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DmpEvtBgoPID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void DmpEvtBgoPID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DmpEvtBgoPID*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *DmpEvtBgoPID::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DmpEvtBgoPID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void DmpEvtBgoPID::Streamer(TBuffer &R__b)
{
   // Stream an object of class DmpEvtBgoPID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DmpEvtBgoPID::Class(),this);
   } else {
      R__b.WriteClassBuffer(DmpEvtBgoPID::Class(),this);
   }
}

//______________________________________________________________________________
void DmpEvtBgoPID::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class DmpEvtBgoPID.
      TClass *R__cl = ::DmpEvtBgoPID::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fLayer", (void*)&fLayer);
      R__insp.InspectMember("vector<short>", (void*)&fLayer, "fLayer.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fFValue", (void*)&fFValue);
      R__insp.InspectMember("vector<double>", (void*)&fFValue, "fFValue.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fSqr_RMS", (void*)&fSqr_RMS);
      R__insp.InspectMember("vector<double>", (void*)&fSqr_RMS, "fSqr_RMS.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fLC_E", (void*)&fLC_E);
      R__insp.InspectMember("vector<double>", (void*)&fLC_E, "fLC_E.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fLC_Size", (void*)&fLC_Size);
      R__insp.InspectMember("vector<short>", (void*)&fLC_Size, "fLC_Size.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fSize", &fSize);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fEnergy", &fEnergy);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fLgCenter", &fLgCenter);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fTrWidth", &fTrWidth);
      TObject::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DmpEvtBgoPID(void *p) {
      return  p ? new(p) ::DmpEvtBgoPID : new ::DmpEvtBgoPID;
   }
   static void *newArray_DmpEvtBgoPID(Long_t nElements, void *p) {
      return p ? new(p) ::DmpEvtBgoPID[nElements] : new ::DmpEvtBgoPID[nElements];
   }
   // Wrapper around operator delete
   static void delete_DmpEvtBgoPID(void *p) {
      delete ((::DmpEvtBgoPID*)p);
   }
   static void deleteArray_DmpEvtBgoPID(void *p) {
      delete [] ((::DmpEvtBgoPID*)p);
   }
   static void destruct_DmpEvtBgoPID(void *p) {
      typedef ::DmpEvtBgoPID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DmpEvtBgoPID

namespace ROOT {
   void vectorlEdoublegR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void vectorlEdoublegR_Dictionary();
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector.dll", 0,
                  typeid(vector<double>), DefineBehavior(ptr, ptr),
                  0, &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEdoublegR_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   void vectorlEshortgR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void vectorlEshortgR_Dictionary();
   static void *new_vectorlEshortgR(void *p = 0);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector.dll", 0,
                  typeid(vector<short>), DefineBehavior(ptr, ptr),
                  0, &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEshortgR_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const vector<short>*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete ((vector<short>*)p);
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] ((vector<short>*)p);
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short>

/********************************************************
* ./include/Dictionary_DmpEvtBgoPID.cc
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableDictionary_DmpEvtBgoPID();

extern "C" void G__set_cpp_environmentDictionary_DmpEvtBgoPID() {
  G__cpp_reset_tagtableDictionary_DmpEvtBgoPID();
}
#include <new>
extern "C" int G__cpp_dllrevDictionary_DmpEvtBgoPID() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* DmpEvtBgoPID */
static int G__Dictionary_DmpEvtBgoPID_168_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   DmpEvtBgoPID* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new DmpEvtBgoPID[n];
     } else {
       p = new((void*) gvp) DmpEvtBgoPID[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new DmpEvtBgoPID;
     } else {
       p = new((void*) gvp) DmpEvtBgoPID;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((DmpEvtBgoPID*) G__getstructoffset())->Reset();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) DmpEvtBgoPID::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) DmpEvtBgoPID::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) DmpEvtBgoPID::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      DmpEvtBgoPID::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((DmpEvtBgoPID*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) DmpEvtBgoPID::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) DmpEvtBgoPID::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) DmpEvtBgoPID::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Dictionary_DmpEvtBgoPID_168_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) DmpEvtBgoPID::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__Dictionary_DmpEvtBgoPID_168_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   DmpEvtBgoPID* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new DmpEvtBgoPID(*(DmpEvtBgoPID*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef DmpEvtBgoPID G__TDmpEvtBgoPID;
static int G__Dictionary_DmpEvtBgoPID_168_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (DmpEvtBgoPID*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((DmpEvtBgoPID*) (soff+(sizeof(DmpEvtBgoPID)*i)))->~G__TDmpEvtBgoPID();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (DmpEvtBgoPID*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((DmpEvtBgoPID*) (soff))->~G__TDmpEvtBgoPID();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__Dictionary_DmpEvtBgoPID_168_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   DmpEvtBgoPID* dest = (DmpEvtBgoPID*) G__getstructoffset();
   *dest = *(DmpEvtBgoPID*) libp->para[0].ref;
   const DmpEvtBgoPID& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* DmpEvtBgoPID */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncDictionary_DmpEvtBgoPID {
 public:
  G__Sizep2memfuncDictionary_DmpEvtBgoPID(): p(&G__Sizep2memfuncDictionary_DmpEvtBgoPID::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncDictionary_DmpEvtBgoPID::*p)();
};

size_t G__get_sizep2memfuncDictionary_DmpEvtBgoPID()
{
  G__Sizep2memfuncDictionary_DmpEvtBgoPID a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceDictionary_DmpEvtBgoPID() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID))) {
     DmpEvtBgoPID *G__Lderived;
     G__Lderived=(DmpEvtBgoPID*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID),G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableDictionary_DmpEvtBgoPID() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* DmpEvtBgoPID */
static void G__setup_memvarDmpEvtBgoPID(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID));
   { DmpEvtBgoPID *p; p=(DmpEvtBgoPID*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->fLayer)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEshortcOallocatorlEshortgRsPgR),G__defined_typename("vector<short>"),-1,1,"fLayer=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fFValue)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR),G__defined_typename("vector<double>"),-1,1,"fFValue=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fSqr_RMS)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR),G__defined_typename("vector<double>"),-1,1,"fSqr_RMS=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fLC_E)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR),G__defined_typename("vector<double>"),-1,1,"fLC_E=",0,"Layer Cluster Energy");
   G__memvar_setup((void*)((long)(&p->fLC_Size)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEshortcOallocatorlEshortgRsPgR),G__defined_typename("vector<short>"),-1,1,"fLC_Size=",0,"Layer Cluster Size");
   G__memvar_setup((void*)((long)(&p->fSize)-(long)(p)),115,0,0,-1,-1,-1,1,"fSize=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fEnergy)-(long)(p)),100,0,0,-1,-1,-1,1,"fEnergy=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->fLgCenter)-(long)(p)),100,0,0,-1,-1,-1,1,"fLgCenter=",0,"longitudinal energy weigting center");
   G__memvar_setup((void*)((long)(&p->fTrWidth)-(long)(p)),100,0,0,-1,-1,-1,1,"fTrWidth=",0,"fTransverseWidth; energy weigting");
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarDictionary_DmpEvtBgoPID() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncDmpEvtBgoPID(void) {
   /* DmpEvtBgoPID */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID));
   G__memfunc_setup("DmpEvtBgoPID",1093,G__Dictionary_DmpEvtBgoPID_168_0_1, 105, G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Reset",515,G__Dictionary_DmpEvtBgoPID_168_0_2, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__Dictionary_DmpEvtBgoPID_168_0_3, 85, G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&DmpEvtBgoPID::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__Dictionary_DmpEvtBgoPID_168_0_4, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&DmpEvtBgoPID::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__Dictionary_DmpEvtBgoPID_168_0_5, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&DmpEvtBgoPID::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__Dictionary_DmpEvtBgoPID_168_0_6, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&DmpEvtBgoPID::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__Dictionary_DmpEvtBgoPID_168_0_10, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__Dictionary_DmpEvtBgoPID_168_0_11, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&DmpEvtBgoPID::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__Dictionary_DmpEvtBgoPID_168_0_12, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&DmpEvtBgoPID::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__Dictionary_DmpEvtBgoPID_168_0_13, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&DmpEvtBgoPID::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__Dictionary_DmpEvtBgoPID_168_0_14, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&DmpEvtBgoPID::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("DmpEvtBgoPID", 1093, G__Dictionary_DmpEvtBgoPID_168_0_15, (int) ('i'), G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID), -1, 0, 1, 1, 1, 0, "u 'DmpEvtBgoPID' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~DmpEvtBgoPID", 1219, G__Dictionary_DmpEvtBgoPID_168_0_16, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__Dictionary_DmpEvtBgoPID_168_0_17, (int) ('u'), G__get_linked_tagnum(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID), -1, 1, 1, 1, 1, 0, "u 'DmpEvtBgoPID' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncDictionary_DmpEvtBgoPID() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalDictionary_DmpEvtBgoPID() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcDictionary_DmpEvtBgoPID() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_vectorlEshortcOallocatorlEshortgRsPgR = { "vector<short,allocator<short> >" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR = { "vector<double,allocator<double> >" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID = { "DmpEvtBgoPID" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableDictionary_DmpEvtBgoPID() {
  G__Dictionary_DmpEvtBgoPIDLN_TClass.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_TBuffer.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_TMemberInspector.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_TObject.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_vectorlEshortcOallocatorlEshortgRsPgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableDictionary_DmpEvtBgoPID() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_TClass);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_TObject);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEshortcOallocatorlEshortgRsPgR);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEdoublecOallocatorlEdoublegRsPgR);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__Dictionary_DmpEvtBgoPIDLN_DmpEvtBgoPID),sizeof(DmpEvtBgoPID),-1,292096,(char*)NULL,G__setup_memvarDmpEvtBgoPID,G__setup_memfuncDmpEvtBgoPID);
}
extern "C" void G__cpp_setupDictionary_DmpEvtBgoPID(void) {
  G__check_setup_version(30051515,"G__cpp_setupDictionary_DmpEvtBgoPID()");
  G__set_cpp_environmentDictionary_DmpEvtBgoPID();
  G__cpp_setup_tagtableDictionary_DmpEvtBgoPID();

  G__cpp_setup_inheritanceDictionary_DmpEvtBgoPID();

  G__cpp_setup_typetableDictionary_DmpEvtBgoPID();

  G__cpp_setup_memvarDictionary_DmpEvtBgoPID();

  G__cpp_setup_memfuncDictionary_DmpEvtBgoPID();
  G__cpp_setup_globalDictionary_DmpEvtBgoPID();
  G__cpp_setup_funcDictionary_DmpEvtBgoPID();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncDictionary_DmpEvtBgoPID();
  return;
}
class G__cpp_setup_initDictionary_DmpEvtBgoPID {
  public:
    G__cpp_setup_initDictionary_DmpEvtBgoPID() { G__add_setup_func("Dictionary_DmpEvtBgoPID",(G__incsetup)(&G__cpp_setupDictionary_DmpEvtBgoPID)); G__call_setup_funcs(); }
   ~G__cpp_setup_initDictionary_DmpEvtBgoPID() { G__remove_setup_func("Dictionary_DmpEvtBgoPID"); }
};
G__cpp_setup_initDictionary_DmpEvtBgoPID G__cpp_setup_initializerDictionary_DmpEvtBgoPID;

