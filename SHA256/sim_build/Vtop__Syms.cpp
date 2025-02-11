// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_sha256.configure(this, name(), "sha256", "sha256", -9, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_sha256);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOPp->clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"hash", &(TOPp->hash), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,255,0);
        __Vscope_TOP.varInsert(__Vfinal,"message", &(TOPp->message), false, VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1 ,511,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOPp->reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_sha256.varInsert(__Vfinal,"H", &(TOPp->sha256__DOT__H), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
        __Vscope_sha256.varInsert(__Vfinal,"K", &(TOPp->sha256__DOT__K), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,63,0);
        __Vscope_sha256.varInsert(__Vfinal,"W", &(TOPp->sha256__DOT__W), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,63,0);
        __Vscope_sha256.varInsert(__Vfinal,"a", &(TOPp->sha256__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"b", &(TOPp->sha256__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"c", &(TOPp->sha256__DOT__c), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"clk", &(TOPp->sha256__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256.varInsert(__Vfinal,"d", &(TOPp->sha256__DOT__d), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"e", &(TOPp->sha256__DOT__e), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"f", &(TOPp->sha256__DOT__f), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"g", &(TOPp->sha256__DOT__g), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"h", &(TOPp->sha256__DOT__h), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"hash", &(TOPp->sha256__DOT__hash), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,255,0);
        __Vscope_sha256.varInsert(__Vfinal,"i", &(TOPp->sha256__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"message", &(TOPp->sha256__DOT__message), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,511,0);
        __Vscope_sha256.varInsert(__Vfinal,"reset", &(TOPp->sha256__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_sha256.varInsert(__Vfinal,"temp1", &(TOPp->sha256__DOT__temp1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_sha256.varInsert(__Vfinal,"temp2", &(TOPp->sha256__DOT__temp2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
