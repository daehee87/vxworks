#include <stdio.h>
#include <math.h>

extern "C"{

//{{ override missing import functions here! (infer types from IDA hexray)
int ioTaskStdGet(int a, int b){  return 0;  }
void ioTaskStdSet(int a, int b, int c){}
void edrErrorInjectStub(int a, char b, int c, int d, int e, int f, char g){}
int geiLinkDown(int a){	 return 0;  }
int ifFlagGet(char a, int b){ return 0; }
void geiLinkUpdateByUnit(int a){}
int endFindByName(char a, int b){ return 0; }
int muxIoctl(int a, int b, int c){ return 0; }
int getNportFromENDunit(int a){ return 0; }
int OVVXW_logEvent(int a, char b, char c){ return 0; }
int taskCreateHookAdd(int a){ return 0; }
int __stderr(){	return 0; }
void ipcom_ipd_kill(char a){}
int sysClkRateGet(){ return 0; }
void taskDelay(int a){}
int muxTkCookieGet(char a, int b){ return 0; }
void taskCreateHookDelete(int a){}
int ohiActiveGetEx(int a){ return 0; }
int __mul64(int a, int b, int c, int d){ return 0; }
int __div64(int a, int b, int c, int d){ return 0; }
int __rem64(int a, int b, int c, int d){ return 0; }
int tickGet(int a){ return 0; }
void taskUnsafe(){}
void rm(char a){}
int _f_ftoll(float a){ return 0; }
int muxDevExists(char a, int b){ return 0; }
void unldByModuleId(char *a, int b){}
int semWTake(int *a, int b){ return 0; }
int semRTake(int *a, int b){ return 0; }
int *semRWCreate(int a, int b){ return 0; }
float *__DIAB_rd_pk_fl(int a){ return 0; }
double __DIAB_wr_pk_fl(int a, char *b){ return 0; }

//unknown; vfdprintf
void vfdprintf(){}
int msgQNumMsgs(int a[]){ return 0; }
//int lstInit(*this)
int lstInit(void){ return 0; }
//int lstCount(*this)
int lstCount(void){ return 0; }
//lstFirst
int lstFirst(void){ return 0; }
int lstNext(int a){ return 0; }
int lstAdd(int a, int * b){ return 0; }
//int lstDelete(*this, *ptr)
int lstDelete(void){ return 0; }

int intContext(void){ return 0; }

//std::_String_base::_Xran() const
//std::_String_base::_Xlen() const
//operator delete(void*, void*)
//std::cout

int __cxa_guard_acquire(char a){ return 0; }
int __cxa_guard_release(char a){ return 0; }
//std::ios_base::clear(std::_Iosb<int>::_Iostate, bool)
int _Locksyslock(int a){ return 0; }
int _Unlocksyslock(int a){ return 0; }

//std::locale::id::_Id_cnt
//std::_Locinfo::_Locinfo(std::string const&)
//std::_Locinfo::~_Locinfo()
//std::locale::_Getfacet(unsigned int) const
//std::locale::facet::_Register()
//std::ctype<char>::id
//std::ios_base::_Init()
//std::ios_base::_Addstd()

int __diab_alloc_semaphore(void){ return 0; }
//std::locale::locale()
int __diab_free_semaphore(void){ return 0; }
// std::ios_base::~ios_base()
int __diab_lock_semaphore(int *a){ return 0; }
int __diab_unlock_semaphore(int *a){ return 0; }
// std::_BADOFF
// std::_Fpz
char *__locale(char *a){ return 0; }
// std::_Fiopen(char const*, std::_Iosb<int>::_Openmode, int)
// _Stoulx
int _Stoulx(void){ return 0; }
int _Stolx(int *a, int *b, int c, int *d){ return 0; }
int _Stollx(int a, int *b, int c, int d){ return 0; }
int _Stoullx(int a, int *b, int c, int d){ return 0; }
float _Stofx(char *a, char *b, char *c, int d){ return 0; }
double _Stodx(char a, char *b, char *c, int *d){ return 0; }
char *_Stoldx(char a, char * b, char *c, int *d){ return 0; }
int semInfoGet(int a, int b){ return 0; }
int taskVarInit(void){ return 0; }
int pipeDevCreate(char a[], int b, int c){ return 0; }
int logFdAdd(int a){ return 0; }
int memPartCreate(int a, int b){ return 0; }
int memPartAlloc(int a, int b){ return 0; }
int memPartFree(int a, int *b){ return 0; }
int taskVarAdd(int a, int b){ return 0; }
int taskVarDelete(int a, int b){ return 0; }
int memSysPartId(void){ return 0; }
int symTblCreate(int a, int b, int c){ return 0; }
int symAdd(int a, char * b, int c, int d, int e){ return 0; }
int symEach(int a, int b, int c){ return 0; }
int __tls_lookup(void *a){ return 0; }
int __rta_longjmp(char *a){ return 0; }
int hostDelete(char a[], char *b){ return 0; }
int ifIndexToIfName(int a, char b[]){ return 0; }

//heesun
void intLock(int a){}
int pentiumTscGet64(int a){ return 0; }
void intUnlock(int a){}
int __lsl64(int a, int b, int c){ return 0; }
int OVVXW_ocr1100_group_get(int a){ return 0; }
int OVVXW_serial_number_string_get(int a){return 0;}
int OVVXW_mfg_index_string_get(int a){ return 0; }
int taskIdSelf(int a){return 0;}
int taskNameToId(int a){return 0;}
int ioGlobalStdSet(int a, int b){ return 0;}
int taskDeleteHookDelete(int a){ return 0; }
int taskDeleteHookAdd(int a){ return 0; }
int taskSuspend(int a){return 0;}
int taskResume(int a){return 0;}
int ipcom_ipd_start(int a){return 0;}
int OVVXW_network_multicast_routeadd(int a){ return 0; }
int __errno(int a){ return 0; }
int routec(int a){return 0;}
int ipradius_set_sever_addr(int a){return 0;}
int OVVXW_network_ipattach_ex(int a, char b, int c){return 0;}
int ifAddrSet(char a, int b){return 0;}
int ifMaskSet(char a, int b){return 0;}
int hostAdd(char a, int b){return 0;}
int ifAddrGet(int a, int b){return 0;}
int inet_ntoa_b(int a, char b){return 0;}
int ifFlagChange(char a, int b, int c){return 0;}
int taskSpawn(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o){return 0;}
void sysSymTbl(int a){}
int symFindByName(int a, char b, int c, char d){return 0;}
int logMsg(char a, int b, int c, int d, int e, int f, int g){return 0;}
int taskIdVerify(int a){return 0;}
int taskPrioritySet(int a, int b){return 0;}
int ipcom_sysvar_get(char a, char b, int c){return 0;}
int semBCreate(int a, int b){return 0;}
int OVVXW_registerAlarmCB(int a){return 0;}
int OVVXW_registerLoggingCB(int a){return 0;}
int OVVXW_sfp_string_get(int a, char b, int c){return 0;}
int shellPromptFmtSet(int a, int b, char c){return 0;}
int shellPromptFmtDftSet(int a, char b){return 0;}
int sysClkRateSet(int a){return 0;}
int clock_setres(int a, int b){return 0;}
int shellGenericInit(char a, int b, int c, int d, int e, int f, int g, int h, int i){return 0;}
int errnoSet(int a){return 0;}
int loadModule(int a, int b){return 0;}
void errnoGet(int a){}
int taskPriorityGet(int a, int b){return 0;}
int OVVXW_flash_secondary_mount(char a){return 0;}
int _f_ftou(int a){return 0;}
int hostGetByName(int a){return 0;}
void __ctype(int a){}
int semMCreate(int a){return 0;}
int iosDrvInstall(int a, int b, int c, int d, int e, int f, int g){return 0;}
int iosDevDelete(int a){return 0;}
int taskDelete(int a){return 0;}
int msgQDelete(int a){return 0;}
int semDelete(int a){return 0;}
int iosDrvRemove(int a, int b){return 0;}
int iosDevAdd(int a, int b, int c){return 0;}
int msgQCreate(int a, int b, int c){return 0;}
int semTake(int a, int b){return 0;}

//nara
int semGive(int a){ return 0; }
int msgQSend(int *a, int *b, int c, int d, int e){ return 0; }
int msgQReceive(int a, int *b, int c, int d){ return 0; }
int __srget(int a){ return 0; }
int __stdin(int a, int b){ return 0; }
int __stdout(){ return 0; }
int d(int a, int *b, int c){ return 0; }
int netMblkToBufCopy(int a, int b, int c){ return 0; }
int netMblkClChainFree(int a){ return 0; }
int muxBind(char a, int b, int c, int d, int e, int f, int g, int h, char i){ return 0; }
int wdCreate(){ return 0; }
int wdStart(int a, int b, int c, int d){ return 0; }
int netJobAdd(int a, int b, int c, int d, int e, int f){ return 0; }
int netTupleGet(int a, int b, int c, int d, int e){ return 0; }
int netMblkFromBufCopy(int a, char b, int c, int d, int e, int f){ return 0; }
int muxSend(int a, int b){ return 0; }
int netTupleFree(int a){ return 0; }
int memPartShow(int a, int b){ return 0; }
int ifBroadcastGet(char a, char b){ return 0; }
int iosFdValue(int a){ return 0; }
int OVVXW_pci_status_show(char a, char b){ return 0; }
int OVVXW_pci_ioic_type_get(int a, int b, char c){ return 0; }
int timer_create(int a, int b, int c){ return 0; }
int timer_settime(int a, int b, int c, int d){ return 0; }
int timer_delete(int a){ return 0; }
int timer_getoverrun(int a){ return 0; }
int pciFindDevice(int a, int b, int c, int d, int e, int f){ return 0; }
int pciConfigInByte(int a, int b, int c, int d, int e){ return 0; }
int sysOutByte(int a, int b){ return 0; }
int sysAuxClkConnect(int a, int b){ return 0; }
int sysAuxClkRateSet(int a){ return 0; }
int sysAuxClkEnable(){ return 0; }
int sysAuxClkDisable(){ return 0; }
int OVVXW_pci_op_reg_addr_get(int a, int b){ return 0; }
int OVVXW_pci_dpr_addr_get(int a, int b){ return 0; }
int OVVXW_pci_dpr_size_get(int a, int b){ return 0; }
int OVVXW_pci_irq_level_get(int a, int b){ return 0; }
int OVVXW_int_num_get(int a, int b){ return 0; }
int OVVXW_pci_int_connect(int a, int b, int c){ return 0; }
int sysIntEnablePIC(int a){ return 0; }
int OVVXW_pci_read_config_double(int a, int b, int c){ return 0; }
int sysInLong(int a){ return 0; }
int sysOutLong(int a, int b){ return 0; }
int sysInByte(int a){ return 0; }
int OVVXW_pci_int_disconnect(int a, int b){ return 0; }
int taskName(int a){ return 0; }
int bcopyWords(int a, int b, int c){ return 0; }
int memPartAlignedAlloc(char a, int b, int c){ return 0; }
int _f_ftoi(int a){ return 0; }
double fabs(double a){ return 0; }
int _d_dtou(int a, int b){ return 0; }
double sqrt(double a){ return 0; }
double exp(double a){ return 0; }
double acos(double a){ return 0; }
double asin(double a){ return 0; }
double atan(double a){ return 0; }
int _d_dtoi(int a, int b){ return 0; }
double pow(double a, double b){ return 0; }
int irint(int a, int b){ return 0; }
double sin(double x){ return 0; }
double cos(double a){  return 0; }
double tan(double a){  return 0; }
double cosh(double a){  return 0;  }
double sinh(double a){  return 0;  }
double tanh(double a){  return 0;  }
double log(double a){  return 0;  }
double log10(double a){  return 0;  }
double round(double a){  return 0;  }
double trunc(double a){  return 0;  }
double log2(double a){  return 0;  }
double floor(double a){  return 0;  }
double ceil(double a){  return 0;  }
int __ctype_toupper;
double fmod(double a, double b){  return 0;  }
int tick64Get(int a){  return 0;  }
int taskIdListGet(int a, int b){  return 0;  }
int taskTcb(int a){  return 0;  }
int dosFsVolDescGet(char a, int b){  return 0;  }
void ipcom_slab_memory_pool_list(){}
void ipcom_list_first(){}
int ipcom_list_next(int a){  return 0;  }
int spyClkStopCommon(){  return 0;  }
int sysAuxClkRateGet(){  return 0;}
int msgQOpen(char a, int b, int c, int d, int e, int f){   return 0;}
void msgQClose(int a){}
double infinity(){  return 0;  }
void ti(int a){}
void tt(int a){}
void checkStack(int a){}
int taskIsSuspended(int a){  return 0; }
int OVVXW_time_get(int * a){  return 0;  }
int OVVXW_timing_start(int a){  return 0;  }
int OVVXW_timing_end(int a, int b, int * c){  return 0;  }
int printErrno(int a){  return 0;  }
void taskLock(){}
void taskUnlock(){}
int __ctype_tolower;
int unld(char * a, int b){  return 0;  }
int semCCreate(int a, int b){  return 0;  }
int iround(int a, int b){  return 0;  }
int taskIsReady(int a){  return 0;  }
int taskIsPended(int a){  return 0;  }
int taskIsDelayed(int a, char * b){  return 0;  }
void semMTake(int a, int b){}
void semMGive(int a){}
void rpcTaskInit(){}
int sysPhysMemTop(){  return 0;  }
int sysMemTop(){  return 0;  }
int usrBootLineGet(){  return 0;  }
void bootStringToStruct(int a, char * b){}
int ixdr_get_long(int * a){  return 0;  }
int iosFdMaxFiles(){  return 0;  }
int iosFdMap(int a){  return 0;  }
void version(){}
int i(int a){  return 0;  }
int ipcom_inet_ntoa(int a){  return 0;  }
int getOVIFName(){  return 0;  }
int ifMaskGet(char * a, int * b){  return 0;  }
int __swbuf(int a, int b){ return 0; }
void taskSafe(){}
} //}} extern C

//}}

//std::_String_base::_Xran() const
namespace std{
    template <typename T>
    class _Iosb{
        public:
            T whatever;
            class _Iostate{
                public:
            };
            class _Openmode{
                public:
            };
    };
    int _BADOFF=0;
    class string{ 
        public:
        string(){} 
    };
    class _String_base
    {
    public:
        void _Xlen(void) const;
        void _Xran(void) const;
    };
    class _Locinfo
    {
    public:
       _Locinfo(); // default constructor
       _Locinfo(const std::string&){} 
       _Locinfo(std::string&){} 
       _Locinfo(std::string){} 
       ~_Locinfo();
    };
    class ios_base
    {
    public:
	void _Addstd(void);
	void _Init(void);
    void clear(std::_Iosb<int>::_Iostate, bool);
    };
    class locale
    {
    public:
      class id{
          public:
          static unsigned long _Id_cnt;
      };
      class facet{
          public:
          void _Register();
      };
	  void _Getfacet(unsigned int) const;
    };
    int _Fpz;
    void _Fiopen(char const*, _Iosb<int>::_Openmode, int){}
};

unsigned long std::locale::id::_Id_cnt = 0;

void std::_String_base::_Xlen(void) const
{   // report a length_error
//_Xlength_error("string too long");
}
void std::_String_base::_Xran(void) const
{   // report an out_of_range error
//_Xout_of_range("invalid string position");
}

void operator delete(void*, void*)
{}

void std::ios_base::_Init(void)
{}

void std::ios_base::_Addstd(void)
{}

std::_Locinfo::_Locinfo(){}
std::_Locinfo::~_Locinfo(){}

void std::locale::facet::_Register(){}
void std::locale::_Getfacet(unsigned int) const{}
void std::ios_base::clear(std::_Iosb<int>::_Iostate, bool){}

void DSMain(){};
int main(){
    // once porting is done, we call any exported function here.
    DSMain();
    return 0;
}


