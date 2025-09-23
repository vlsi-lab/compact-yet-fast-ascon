// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__26(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__26\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT____Vlvbound5;
    CData/*0:0*/ ascon_top__DOT____Vlvbound6;
    CData/*0:0*/ ascon_top__DOT____Vlvbound7;
    CData/*0:0*/ ascon_top__DOT____Vlvbound8;
    CData/*0:0*/ ascon_top__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT____Vlvbound10;
    CData/*0:0*/ ascon_top__DOT____Vlvbound11;
    CData/*0:0*/ ascon_top__DOT____Vlvbound12;
    CData/*0:0*/ ascon_top__DOT____Vlvbound13;
    CData/*0:0*/ ascon_top__DOT____Vlvbound14;
    CData/*0:0*/ ascon_top__DOT____Vlvbound15;
    CData/*0:0*/ ascon_top__DOT____Vlvbound16;
    CData/*0:0*/ ascon_top__DOT____Vlvbound17;
    CData/*0:0*/ ascon_top__DOT____Vlvbound18;
    CData/*0:0*/ ascon_top__DOT____Vlvbound19;
    CData/*0:0*/ ascon_top__DOT____Vlvbound20;
    CData/*0:0*/ ascon_top__DOT____Vlvbound21;
    CData/*0:0*/ ascon_top__DOT____Vlvbound22;
    CData/*0:0*/ ascon_top__DOT____Vlvbound23;
    CData/*0:0*/ ascon_top__DOT____Vlvbound24;
    CData/*0:0*/ ascon_top__DOT____Vlvbound25;
    CData/*0:0*/ ascon_top__DOT____Vlvbound26;
    CData/*0:0*/ ascon_top__DOT____Vlvbound27;
    CData/*0:0*/ ascon_top__DOT____Vlvbound28;
    CData/*0:0*/ ascon_top__DOT____Vlvbound29;
    CData/*0:0*/ ascon_top__DOT____Vlvbound30;
    CData/*0:0*/ ascon_top__DOT____Vlvbound31;
    CData/*0:0*/ ascon_top__DOT____Vlvbound32;
    CData/*0:0*/ ascon_top__DOT____Vlvbound33;
    CData/*0:0*/ ascon_top__DOT____Vlvbound34;
    CData/*0:0*/ ascon_top__DOT____Vlvbound35;
    CData/*0:0*/ ascon_top__DOT____Vlvbound36;
    CData/*0:0*/ ascon_top__DOT____Vlvbound37;
    CData/*0:0*/ ascon_top__DOT____Vlvbound38;
    CData/*0:0*/ ascon_top__DOT____Vlvbound39;
    CData/*0:0*/ ascon_top__DOT____Vlvbound40;
    CData/*0:0*/ ascon_top__DOT____Vlvbound41;
    CData/*0:0*/ ascon_top__DOT____Vlvbound42;
    CData/*0:0*/ ascon_top__DOT____Vlvbound43;
    CData/*0:0*/ ascon_top__DOT____Vlvbound44;
    CData/*0:0*/ ascon_top__DOT____Vlvbound45;
    CData/*0:0*/ ascon_top__DOT____Vlvbound46;
    CData/*0:0*/ ascon_top__DOT____Vlvbound47;
    CData/*0:0*/ ascon_top__DOT____Vlvbound48;
    CData/*0:0*/ ascon_top__DOT____Vlvbound49;
    CData/*0:0*/ ascon_top__DOT____Vlvbound50;
    CData/*0:0*/ ascon_top__DOT____Vlvbound51;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__in;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__x;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__x;
    VlWide<7>/*223:0*/ __Vtemp28413;
    VlWide<7>/*223:0*/ __Vtemp28447;
    VlWide<3>/*95:0*/ __Vtemp28449;
    VlWide<3>/*95:0*/ __Vtemp28450;
    VlWide<3>/*95:0*/ __Vtemp28451;
    VlWide<3>/*95:0*/ __Vtemp28452;
    VlWide<3>/*95:0*/ __Vtemp28453;
    VlWide<3>/*95:0*/ __Vtemp28454;
    // Body
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i))))) {
            __Vtemp28413[0U] = 0U;
            __Vtemp28413[1U] = 0U;
            __Vtemp28413[2U] = 0U;
            __Vtemp28413[3U] = 0U;
            __Vtemp28413[4U] = 0U;
            __Vtemp28413[5U] = 0U;
            __Vtemp28413[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i)) 
                      & (__Vtemp28413[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i))))) {
            __Vtemp28447[0U] = 0U;
            __Vtemp28447[1U] = 0U;
            __Vtemp28447[2U] = 0U;
            __Vtemp28447[3U] = 0U;
            __Vtemp28447[4U] = 0U;
            __Vtemp28447[5U] = 0U;
            __Vtemp28447[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i)) 
                      & (__Vtemp28447[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelf->start)))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((3U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                        ? 0xbU : 0xcU);
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 0xfU : 0xeU);
            } else if ((0U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if (vlSelf->valid_data_in) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                    if (((IData)(vlSelf->EOT) & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                    }
                } else if (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                            & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                }
            } else {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                        & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))
                        ? 0xbU : 6U);
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 7U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U))) ? 0xaU
                             : 9U));
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                }
            } else if (((IData)(vlSelf->valid_data_in) 
                        | (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 6U : 2U);
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                    == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                        - (IData)(1U))) ? 5U : 4U);
        } else if ((3U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if (vlSelf->start) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelf->load_data) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
        if (vlSelf->ascon_top__DOT__sel_padding) {
            vlSelf->ascon_top__DOT__unnamedblk5__DOT__i = 0x10U;
        }
    }
    if (vlSelf->ascon_top__DOT__extra_padding_ff) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0U;
        if ((0U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff000000U & vlSelf->data_in[3U]));
        }
        if ((1U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff0000U & vlSelf->data_in[3U]));
        }
        if ((2U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff00U & vlSelf->data_in[3U]));
        }
        if ((3U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xffU & vlSelf->data_in[3U]));
        }
        if ((4U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff000000U & vlSelf->data_in[2U]));
        }
        if ((5U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff0000U & vlSelf->data_in[2U]));
        }
        if ((6U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff00U & vlSelf->data_in[2U]));
        }
        if ((7U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xffU & vlSelf->data_in[2U]));
        }
        if ((8U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff000000U & vlSelf->data_in[1U]));
        }
        if ((9U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff0000U & vlSelf->data_in[1U]));
        }
        if ((0xaU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff00U & vlSelf->data_in[1U]));
        }
        if ((0xbU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xffU & vlSelf->data_in[1U]));
        }
        if ((0xcU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff000000U & vlSelf->data_in[0U]));
        }
        if ((0xdU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff0000U & vlSelf->data_in[0U]));
        }
        if ((0xeU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff00U & vlSelf->data_in[0U]));
        }
        if ((0xfU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xffU & vlSelf->data_in[0U]));
        }
        VL_ASSIGNSEL_WIII(128,8,(0x7fU & (((IData)(0x7fU) 
                                           - ((IData)(vlSelf->valid_bytes) 
                                              << 3U)) 
                                          - (IData)(7U))), vlSelf->ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelf->ascon_top__DOT__data_in_padded[0U] 
            = vlSelf->data_in[0U];
        vlSelf->ascon_top__DOT__data_in_padded[1U] 
            = vlSelf->data_in[1U];
        vlSelf->ascon_top__DOT__data_in_padded[2U] 
            = vlSelf->data_in[2U];
        vlSelf->ascon_top__DOT__data_in_padded[3U] 
            = vlSelf->data_in[3U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp28449, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    VL_EXTEND_WQ(66,64, __Vtemp28450, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    vlSelf->ascon_top__DOT__mux_logic__BRA__0__KET____DOT__unnamedblk1__DOT__rc_block_temp 
        = ((3U > (IData)(vlSelf->ascon_top__DOT__bit_counter))
            ? (0x3fffffU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                             ? ((0x41U >= (0x7fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                      ? 0U : (__Vtemp28449[
                                              (((IData)(0x15U) 
                                                + (0x7fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))) 
                                    | (__Vtemp28449[
                                       (3U & (((IData)(0x16U) 
                                               * (IData)(vlSelf->ascon_top__DOT__bit_counter)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                 : 0U) : ((0x41U >= 
                                           (0x7fU & 
                                            ((IData)(0x42U) 
                                             * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x42U) 
                                                    * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                                ? 0U
                                                : (
                                                   __Vtemp28450[
                                                   (((IData)(0x15U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x42U) 
                                                         * (IData)(vlSelf->ascon_top__DOT__bit_counter)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x42U) 
                                                        * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))) 
                                              | (__Vtemp28450[
                                                 (3U 
                                                  & (((IData)(0x42U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x42U) 
                                                     * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                           : 0U))) : 0U);
    vlSelf->ascon_top__DOT__rc_block[0U] = vlSelf->ascon_top__DOT__mux_logic__BRA__0__KET____DOT__unnamedblk1__DOT__rc_block_temp;
    VL_EXTEND_WQ(66,64, __Vtemp28451, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    VL_EXTEND_WQ(66,64, __Vtemp28452, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    vlSelf->ascon_top__DOT__mux_logic__BRA__1__KET____DOT__unnamedblk1__DOT__rc_block_temp 
        = ((3U > (IData)(vlSelf->ascon_top__DOT__bit_counter))
            ? (0x3fffffU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                             ? ((0x41U >= (0x7fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                      ? 0U : (__Vtemp28451[
                                              (((IData)(0x15U) 
                                                + (0x7fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))) 
                                    | (__Vtemp28451[
                                       (3U & (((IData)(0x16U) 
                                               * (IData)(vlSelf->ascon_top__DOT__bit_counter)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                 : 0U) : ((0x41U >= 
                                           (0x7fU & 
                                            ((IData)(0x16U) 
                                             + ((IData)(0x42U) 
                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                                ? 0U
                                                : (
                                                   __Vtemp28452[
                                                   (((IData)(0x15U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x16U) 
                                                         + 
                                                         ((IData)(0x42U) 
                                                          * (IData)(vlSelf->ascon_top__DOT__bit_counter))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x16U) 
                                                        + 
                                                        ((IData)(0x42U) 
                                                         * (IData)(vlSelf->ascon_top__DOT__bit_counter))))))) 
                                              | (__Vtemp28452[
                                                 (3U 
                                                  & (((IData)(0x16U) 
                                                      + 
                                                      ((IData)(0x42U) 
                                                       * (IData)(vlSelf->ascon_top__DOT__bit_counter))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x16U) 
                                                     + 
                                                     ((IData)(0x42U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter))))))
                                           : 0U))) : 0U);
    vlSelf->ascon_top__DOT__rc_block[1U] = vlSelf->ascon_top__DOT__mux_logic__BRA__1__KET____DOT__unnamedblk1__DOT__rc_block_temp;
    VL_EXTEND_WQ(66,64, __Vtemp28453, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    VL_EXTEND_WQ(66,64, __Vtemp28454, (0xf0ULL - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
    vlSelf->ascon_top__DOT__mux_logic__BRA__2__KET____DOT__unnamedblk1__DOT__rc_block_temp 
        = ((3U > (IData)(vlSelf->ascon_top__DOT__bit_counter))
            ? (0x3fffffU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                             ? ((0x41U >= (0x7fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter))))
                                      ? 0U : (__Vtemp28453[
                                              (((IData)(0x15U) 
                                                + (0x7fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))) 
                                    | (__Vtemp28453[
                                       (3U & (((IData)(0x16U) 
                                               * (IData)(vlSelf->ascon_top__DOT__bit_counter)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                 : 0U) : ((0x41U >= 
                                           (0x7fU & 
                                            ((IData)(0x2cU) 
                                             + ((IData)(0x42U) 
                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x2cU) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))
                                                ? 0U
                                                : (
                                                   __Vtemp28454[
                                                   (((IData)(0x15U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x2cU) 
                                                         + 
                                                         ((IData)(0x42U) 
                                                          * (IData)(vlSelf->ascon_top__DOT__bit_counter))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x2cU) 
                                                        + 
                                                        ((IData)(0x42U) 
                                                         * (IData)(vlSelf->ascon_top__DOT__bit_counter))))))) 
                                              | (__Vtemp28454[
                                                 (3U 
                                                  & (((IData)(0x2cU) 
                                                      + 
                                                      ((IData)(0x42U) 
                                                       * (IData)(vlSelf->ascon_top__DOT__bit_counter))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x2cU) 
                                                     + 
                                                     ((IData)(0x42U) 
                                                      * (IData)(vlSelf->ascon_top__DOT__bit_counter))))))
                                           : 0U))) : 0U);
    vlSelf->ascon_top__DOT__rc_block[2U] = vlSelf->ascon_top__DOT__mux_logic__BRA__2__KET____DOT__unnamedblk1__DOT__rc_block_temp;
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ffffff0U 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7fffff0fU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                                                        << 5U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                                                          << 4U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ffff0ffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                                                        << 9U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                                                          << 8U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7fff0fffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                                                        << 0xdU) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                                                          << 0xcU)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ff0ffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                                                        << 0x11U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                                                          << 0x10U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7f0fffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                                                        << 0x15U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                                                          << 0x14U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x70ffffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                                                        << 0x19U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                                                          << 0x18U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0xfffffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                                                     << 0x1dU) 
                                                    | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                                                       << 0x1cU))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[0U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[0U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[1U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[1U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[2U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[2U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[3U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[3U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[4U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[4U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xfffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__data_reg) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__data_reg) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__data_reg) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xffffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xfffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xfffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xffffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xffff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xfffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xfff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xffff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xff0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xf0ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xff000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[5U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[5U]) 
                                            | (0xf0000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                                                         << 0x1dU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                                                           << 0x1cU))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7ffffff0U 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7fffffffU 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7fffff0fU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7ffffff0U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                                                         << 5U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7ffff0ffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7fffff00U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                                                         << 9U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                                                           << 8U))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7fff0fffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7ffff000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                                                   << 0xfU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                                                      << 0xeU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7ff0ffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7fff0000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                                                   << 0x13U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x7f0fffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7ff00000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                                                         << 0x15U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                                                           << 0x14U))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0x70ffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x7f000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                                                   << 0x1bU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                                                         << 0x19U) 
                                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__lfsr_out[6U] = ((0xfffffffU 
                                             & vlSelf->ascon_top__DOT__lfsr_out[6U]) 
                                            | (0x70000000U 
                                               & (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg) 
                                                   << 0x1eU) 
                                                  | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                                                      << 0x1dU) 
                                                     | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                                                        << 0x1cU)))));
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
        = vlSelf->data_in[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
        = vlSelf->data_in[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
        = vlSelf->data_in[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
        = vlSelf->ascon_top__DOT__data_in_padded[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
        = vlSelf->ascon_top__DOT__data_in_padded[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
        = vlSelf->ascon_top__DOT__data_in_padded[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
        = vlSelf->ascon_top__DOT__data_in_padded[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U];
    if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[3U];
    } else {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[3U];
    }
    vlSelf->ascon_top__DOT__mux_1st_x0[0U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0[0U]) 
                                              | (0x3fffffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][0U]));
    vlSelf->ascon_top__DOT__mux_1st_x1[0U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x1[0U]) 
                                              | (0x3fffffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][2U]));
    vlSelf->ascon_top__DOT__mux_1st_x3[0U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x3[0U]) 
                                              | (0x3fffffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][6U]));
    vlSelf->ascon_top__DOT__mux_1st_x4[0U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x4[0U]) 
                                              | (0x3fffffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][8U]));
    vlSelf->ascon_top__DOT__mux_1st_x0[0U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0[0U]) 
                                              | (0xffc00000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][0U]));
    vlSelf->ascon_top__DOT__mux_1st_x0[1U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0[1U]) 
                                              | (0xfffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][1U]));
    vlSelf->ascon_top__DOT__mux_1st_x1[0U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x1[0U]) 
                                              | (0xffc00000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][2U]));
    vlSelf->ascon_top__DOT__mux_1st_x1[1U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x1[1U]) 
                                              | (0xfffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][3U]));
    vlSelf->ascon_top__DOT__mux_1st_x3[0U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x3[0U]) 
                                              | (0xffc00000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][6U]));
    vlSelf->ascon_top__DOT__mux_1st_x3[1U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x3[1U]) 
                                              | (0xfffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][7U]));
    vlSelf->ascon_top__DOT__mux_1st_x4[0U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x4[0U]) 
                                              | (0xffc00000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][8U]));
    vlSelf->ascon_top__DOT__mux_1st_x4[1U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x4[1U]) 
                                              | (0xfffU 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][9U]));
    vlSelf->ascon_top__DOT__mux_1st_x0[1U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0[1U]) 
                                              | (0xfffff000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][1U]));
    vlSelf->ascon_top__DOT__mux_1st_x0[2U] = 0U;
    vlSelf->ascon_top__DOT__mux_1st_x1[1U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x1[1U]) 
                                              | (0xfffff000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][3U]));
    vlSelf->ascon_top__DOT__mux_1st_x1[2U] = 0U;
    vlSelf->ascon_top__DOT__mux_1st_x3[1U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x3[1U]) 
                                              | (0xfffff000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][7U]));
    vlSelf->ascon_top__DOT__mux_1st_x3[2U] = 0U;
    vlSelf->ascon_top__DOT__mux_1st_x4[1U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x4[1U]) 
                                              | (0xfffff000U 
                                                 & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                 [0U][9U]));
    vlSelf->ascon_top__DOT__mux_1st_x4[2U] = 0U;
    vlSelf->ascon_top__DOT__mux_1st_x2[0U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                              | (0x3fffffU 
                                                 & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                    [0U][4U] 
                                                    ^ 
                                                    vlSelf->ascon_top__DOT__rc_block
                                                    [0U])));
    vlSelf->ascon_top__DOT__mux_1st_x2[0U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                              | (0xffc00000U 
                                                 & ((0xffc00000U 
                                                     & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                     [0U][4U]) 
                                                    ^ 
                                                    (vlSelf->ascon_top__DOT__rc_block
                                                     [1U] 
                                                     << 0x16U))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xfffU 
                                                 & ((0x3fffffU 
                                                     & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                     [0U][5U]) 
                                                    ^ 
                                                    (vlSelf->ascon_top__DOT__rc_block
                                                     [1U] 
                                                     >> 0xaU))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xfffff000U 
                                                 & ((0xfffff000U 
                                                     & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                     [0U][5U]) 
                                                    ^ 
                                                    (vlSelf->ascon_top__DOT__rc_block
                                                     [2U] 
                                                     << 0xcU))));
    vlSelf->ascon_top__DOT__mux_1st_x2[2U] = (3U & 
                                              (vlSelf->ascon_top__DOT__rc_block
                                               [2U] 
                                               >> 0x14U));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [0U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound2));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [1U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound2) 
              << 1U));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [2U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound2) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__0__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__0__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__0__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound3));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound3) 
              << 1U));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound3) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__1__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__1__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound4));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound4) 
              << 1U));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound4) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__2__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__2__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound5));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 1U));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__3__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__3__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__3__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound6));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 1U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__4__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__4__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound7));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 1U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__5__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__5__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound8));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 1U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__6__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__6__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound9));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 1U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__7__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__7__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound10));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__8__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__8__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound11));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 1U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__9__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__9__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound12));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 1U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__10__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__10__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound13));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 1U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__11__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__11__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound14));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 1U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__12__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__12__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound15));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 1U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__13__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__13__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound16));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 1U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__14__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__14__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound17));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 1U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__15__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__15__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound18));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 1U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__16__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__16__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound19));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 1U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__17__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__17__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound20));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 1U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__18__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__in = vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__18__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__18__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__18__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__18__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__18__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__18__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout) 
              << 0x12U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound21));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 1U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__19__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__in = vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__19__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__19__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__19__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__19__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__19__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__19__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout) 
              << 0x13U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound22));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 1U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__20__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__in = vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__20__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__20__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__20__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__20__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__20__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__20__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout) 
              << 0x14U));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound23));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound23) 
              << 1U));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound23) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__21__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__in = vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__21__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__21__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__21__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__21__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__21__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__21__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout) 
              << 0x15U));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound24));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound24) 
              << 1U));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound24) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__22__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__in = vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__22__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__22__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__22__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__22__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__22__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__22__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout) 
              << 0x16U));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound25));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound25) 
              << 1U));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound25) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__23__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__in = vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__23__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__23__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__23__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__23__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__23__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__23__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout) 
              << 0x17U));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound26));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound26) 
              << 1U));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound26) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__24__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__in = vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__24__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__24__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__24__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__24__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__24__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__24__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout) 
              << 0x18U));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound27));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound27) 
              << 1U));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound27) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__25__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__in = vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__25__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__25__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__25__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__25__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__25__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__25__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout) 
              << 0x19U));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound28));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound28) 
              << 1U));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound28) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__26__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__in = vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__26__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__26__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__26__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__26__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__26__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__26__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout) 
              << 0x1aU));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound29));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound29) 
              << 1U));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound29) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__27__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__in = vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__27__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__27__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__27__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__27__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout) 
              << 0x1bU));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound30));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound30) 
              << 1U));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound30) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__28__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__28__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout) 
              << 0x1cU));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound31));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound31) 
              << 1U));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound31) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
              << 0x1dU));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound32));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound32) 
              << 1U));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound32) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__30__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__in = vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__30__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__30__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__30__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__30__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__30__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__30__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout) 
              << 0x1eU));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [0U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound33));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [1U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 1U));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [2U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__31__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__in = vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__31__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__31__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__31__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__31__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__31__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__31__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout) 
              << 0x1fU));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [0U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound34));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [1U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 1U));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [2U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__32__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__in = vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__32__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__32__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__32__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__32__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__32__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__32__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__32__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound35));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound35) 
              << 1U));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound35) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__33__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__in = vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__33__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__33__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__33__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__33__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__33__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__33__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound36));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound36) 
              << 1U));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound36) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__34__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__in = vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__34__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__34__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__34__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__34__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__34__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__34__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound37));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound37) 
              << 1U));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound37) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__35__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__in = vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__35__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__35__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__35__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__35__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__35__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__35__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound38));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound38) 
              << 1U));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound38) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__36__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__in = vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__36__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__36__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__36__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__36__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__36__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__36__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound39));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound39) 
              << 1U));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound39) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__37__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__in = vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__37__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__37__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__37__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__37__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__37__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__37__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound40));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound40) 
              << 1U));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound40) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__38__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__in = vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__38__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__38__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__38__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__38__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__38__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__38__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound41));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound41) 
              << 1U));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound41) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__39__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__in = vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__39__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__39__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__39__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__39__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__39__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__39__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound42));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound42) 
              << 1U));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound42) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__40__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__in = vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__40__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__40__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__40__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__40__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__40__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__40__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound43));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound43) 
              << 1U));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound43) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__41__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__in = vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__41__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__41__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__41__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__41__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__41__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__41__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__41__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound44));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound44) 
              << 1U));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound44) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__42__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__42__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__42__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__42__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__42__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound45));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound45) 
              << 1U));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound45) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__43__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__in = vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__43__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__43__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__43__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__43__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__43__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__43__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__43__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__43__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__43__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound46));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound46) 
              << 1U));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound46) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__44__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__in = vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__44__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__44__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__44__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__44__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__44__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__44__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__44__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__44__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__44__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound47));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound47) 
              << 1U));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound47) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__45__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__in = vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__45__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__45__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__45__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__45__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__45__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__45__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__45__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__45__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__45__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound48));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound48) 
              << 1U));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound48) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__46__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__in = vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__46__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__46__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__46__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__46__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__46__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__46__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__46__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__46__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__46__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound49));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound49) 
              << 1U));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound49) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__47__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__in = vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__47__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__47__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__47__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__47__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__47__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__47__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__47__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__47__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__47__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound50));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound50) 
              << 1U));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound50) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__48__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__in = vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__48__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__48__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__48__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__48__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__48__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__48__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__48__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__48__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__48__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound51));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound51) 
              << 1U));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound51) 
              << 2U));
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__N = 3U;
}
