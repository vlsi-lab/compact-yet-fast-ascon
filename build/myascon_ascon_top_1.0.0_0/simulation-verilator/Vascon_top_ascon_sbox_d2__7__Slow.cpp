// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top_ascon_sbox_d2.h"
#include "Vascon_top__Syms.h"

void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__22(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__22\n"); );
    // Variables
    CData/*0:0*/ __Vlvbound2;
    CData/*0:0*/ __Vlvbound3;
    CData/*0:0*/ __Vlvbound4;
    CData/*0:0*/ __Vlvbound5;
    CData/*0:0*/ __Vlvbound10;
    CData/*0:0*/ __Vlvbound11;
    CData/*0:0*/ __Vfunc_xor_tree__21__Vfuncout;
    CData/*2:0*/ __Vfunc_xor_tree__21__in;
    IData/*31:0*/ __Vfunc_xor_tree__21__N;
    IData/*31:0*/ __Vfunc_xor_tree__21__level;
    IData/*31:0*/ __Vfunc_xor_tree__21__num;
    IData/*31:0*/ __Vfunc_xor_tree__21__unnamedblk7__DOT__i;
    // Body
    __Vlvbound10 = (1U & vlSelf->__PVT__and_result_reg
                    [0U]);
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 1U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 2U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[0U] = ((6U & vlSelf->__PVT__y[0U]) 
                            | (IData)(__Vlvbound11));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 3U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 4U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 5U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[0U] = ((5U & vlSelf->__PVT__y[0U]) 
                            | ((IData)(__Vlvbound11) 
                               << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 6U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 7U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [0U] >> 8U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[0U] = ((3U & vlSelf->__PVT__y[0U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
    __Vlvbound10 = (1U & vlSelf->__PVT__and_result_reg
                    [1U]);
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 1U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 2U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[1U] = ((6U & vlSelf->__PVT__y[1U]) 
                            | (IData)(__Vlvbound11));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 3U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 4U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 5U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[1U] = ((5U & vlSelf->__PVT__y[1U]) 
                            | ((IData)(__Vlvbound11) 
                               << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 6U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 7U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [1U] >> 8U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[1U] = ((3U & vlSelf->__PVT__y[1U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
    __Vlvbound10 = (1U & vlSelf->__PVT__and_result_reg
                    [2U]);
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 1U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 2U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[2U] = ((6U & vlSelf->__PVT__y[2U]) 
                            | (IData)(__Vlvbound11));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 3U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 4U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 5U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[2U] = ((5U & vlSelf->__PVT__y[2U]) 
                            | ((IData)(__Vlvbound11) 
                               << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 6U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 7U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [2U] >> 8U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[2U] = ((3U & vlSelf->__PVT__y[2U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
    __Vlvbound10 = (1U & vlSelf->__PVT__and_result_reg
                    [3U]);
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 1U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 2U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[3U] = ((6U & vlSelf->__PVT__y[3U]) 
                            | (IData)(__Vlvbound11));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 3U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 4U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 5U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[3U] = ((5U & vlSelf->__PVT__y[3U]) 
                            | ((IData)(__Vlvbound11) 
                               << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 6U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 7U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [3U] >> 8U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[3U] = ((3U & vlSelf->__PVT__y[3U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
    __Vlvbound10 = (1U & vlSelf->__PVT__and_result_reg
                    [4U]);
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 1U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 2U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[4U] = ((6U & vlSelf->__PVT__y[4U]) 
                            | (IData)(__Vlvbound11));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 3U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 4U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 5U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[4U] = ((5U & vlSelf->__PVT__y[4U]) 
                            | ((IData)(__Vlvbound11) 
                               << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 6U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(__Vlvbound10));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 7U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 1U));
    __Vlvbound10 = (1U & (vlSelf->__PVT__and_result_reg
                          [4U] >> 8U));
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(__Vlvbound10) << 2U));
    __Vfunc_xor_tree__21__N = 3U;
    __Vfunc_xor_tree__21__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__21__level = 0U;
    __Vfunc_xor_tree__21__num = 3U;
    __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__21__unnamedblk7__DOT__i, __Vfunc_xor_tree__21__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__21__in) 
                                  >> (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__21__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__21__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__21__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__21__num)) {
        vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__21__level))
                                         ? vlSelf->__Vfunc_xor_tree__21__stage
                                        [(3U & __Vfunc_xor_tree__21__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__21__level))
                                           ? vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__21__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__21__level))
                                        ? vlSelf->__Vfunc_xor_tree__21__stage
                                       [(3U & __Vfunc_xor_tree__21__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__21__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__21__level)))))) {
                vlSelf->__Vfunc_xor_tree__21__stage[(3U 
                                                     & ((IData)(1U) 
                                                        + __Vfunc_xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__21__num = ((IData)(1U) 
                                         + VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__21__num = VL_DIVS_III(32, __Vfunc_xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_xor_tree__21__level = ((IData)(1U) 
                                       + __Vfunc_xor_tree__21__level);
    }
    __Vfunc_xor_tree__21__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__21__level))
                                       ? (1U & vlSelf->__Vfunc_xor_tree__21__stage
                                          [(3U & __Vfunc_xor_tree__21__level)])
                                       : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__21__Vfuncout;
    vlSelf->__PVT__y[4U] = ((3U & vlSelf->__PVT__y[4U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
    vlSelf->__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [0x15U] >> 0xcU));
    vlSelf->__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [0x15U] >> 9U));
    vlSelf->__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [0x15U] >> 6U));
    vlSelf->__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [0x15U] >> 3U));
    vlSelf->__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                            [0x15U]);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->__PVT__x[0U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->__PVT__x[1U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->__PVT__x[2U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->__PVT__and_result_bank[0U] = 0U;
    __Vlvbound2 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1feU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | (IData)(__Vlvbound2));
    __Vlvbound3 = (1U & vlSelf->__PVT__and_result_bank
                   [0U]);
    vlSelf->__PVT__y_noMask[0U] = ((6U & vlSelf->__PVT__y_noMask
                                    [0U]) | (IData)(__Vlvbound3));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1bfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 6U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 1U));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1efU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 4U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [0U] >> 4U));
    vlSelf->__PVT__y_noMask[0U] = ((5U & vlSelf->__PVT__y_noMask
                                    [0U]) | ((IData)(__Vlvbound3) 
                                             << 1U));
    __Vlvbound4 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x17fU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 7U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 2U));
    vlSelf->__PVT__and_result_bank[0U] = ((0xffU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 8U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [0U] >> 8U));
    vlSelf->__PVT__y_noMask[0U] = ((3U & vlSelf->__PVT__y_noMask
                                    [0U]) | ((IData)(__Vlvbound3) 
                                             << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->__PVT__x[1U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->__PVT__x[2U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->__PVT__x[3U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->__PVT__and_result_bank[1U] = 0U;
    __Vlvbound2 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1feU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | (IData)(__Vlvbound2));
    __Vlvbound3 = (1U & vlSelf->__PVT__and_result_bank
                   [1U]);
    vlSelf->__PVT__y_noMask[1U] = ((6U & vlSelf->__PVT__y_noMask
                                    [1U]) | (IData)(__Vlvbound3));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1bfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 6U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 1U));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1efU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 4U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [1U] >> 4U));
    vlSelf->__PVT__y_noMask[1U] = ((5U & vlSelf->__PVT__y_noMask
                                    [1U]) | ((IData)(__Vlvbound3) 
                                             << 1U));
    __Vlvbound4 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x17fU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 7U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 2U));
    vlSelf->__PVT__and_result_bank[1U] = ((0xffU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 8U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [1U] >> 8U));
    vlSelf->__PVT__y_noMask[1U] = ((3U & vlSelf->__PVT__y_noMask
                                    [1U]) | ((IData)(__Vlvbound3) 
                                             << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->__PVT__x[2U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->__PVT__x[3U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->__PVT__x[4U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->__PVT__and_result_bank[2U] = 0U;
    __Vlvbound2 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1feU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | (IData)(__Vlvbound2));
    __Vlvbound3 = (1U & vlSelf->__PVT__and_result_bank
                   [2U]);
    vlSelf->__PVT__y_noMask[2U] = ((6U & vlSelf->__PVT__y_noMask
                                    [2U]) | (IData)(__Vlvbound3));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1bfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 6U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 1U));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1efU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 4U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [2U] >> 4U));
    vlSelf->__PVT__y_noMask[2U] = ((5U & vlSelf->__PVT__y_noMask
                                    [2U]) | ((IData)(__Vlvbound3) 
                                             << 1U));
    __Vlvbound4 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x17fU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 7U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 2U));
    vlSelf->__PVT__and_result_bank[2U] = ((0xffU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 8U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [2U] >> 8U));
    vlSelf->__PVT__y_noMask[2U] = ((3U & vlSelf->__PVT__y_noMask
                                    [2U]) | ((IData)(__Vlvbound3) 
                                             << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->__PVT__x[3U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->__PVT__x[4U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->__PVT__x[0U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->__PVT__and_result_bank[3U] = 0U;
    __Vlvbound2 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1feU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | (IData)(__Vlvbound2));
    __Vlvbound3 = (1U & vlSelf->__PVT__and_result_bank
                   [3U]);
    vlSelf->__PVT__y_noMask[3U] = ((6U & vlSelf->__PVT__y_noMask
                                    [3U]) | (IData)(__Vlvbound3));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1bfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 6U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 1U));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1efU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 4U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [3U] >> 4U));
    vlSelf->__PVT__y_noMask[3U] = ((5U & vlSelf->__PVT__y_noMask
                                    [3U]) | ((IData)(__Vlvbound3) 
                                             << 1U));
    __Vlvbound4 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x17fU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 7U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 2U));
    vlSelf->__PVT__and_result_bank[3U] = ((0xffU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 8U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [3U] >> 8U));
    vlSelf->__PVT__y_noMask[3U] = ((3U & vlSelf->__PVT__y_noMask
                                    [3U]) | ((IData)(__Vlvbound3) 
                                             << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->__PVT__x[4U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->__PVT__x[0U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->__PVT__x[1U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->__PVT__and_result_bank[4U] = 0U;
    __Vlvbound2 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1feU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | (IData)(__Vlvbound2));
    __Vlvbound3 = (1U & vlSelf->__PVT__and_result_bank
                   [4U]);
    vlSelf->__PVT__y_noMask[4U] = ((6U & vlSelf->__PVT__y_noMask
                                    [4U]) | (IData)(__Vlvbound3));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ vlSymsp->TOP.state_reg_out[1U]));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0x1aU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1bfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 6U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 1U));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1efU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 4U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [4U] >> 4U));
    vlSelf->__PVT__y_noMask[4U] = ((5U & vlSelf->__PVT__y_noMask
                                    [4U]) | ((IData)(__Vlvbound3) 
                                             << 1U));
    __Vlvbound4 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0x18U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x17fU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 7U));
    __Vlvbound2 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                          ^ (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                         >> 2U));
    vlSelf->__PVT__and_result_bank[4U] = ((0xffU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound2) 
                                           << 8U));
    __Vlvbound3 = (1U & (vlSelf->__PVT__and_result_bank
                         [4U] >> 8U));
    vlSelf->__PVT__y_noMask[4U] = ((3U & vlSelf->__PVT__y_noMask
                                    [4U]) | ((IData)(__Vlvbound3) 
                                             << 2U));
}

void Vascon_top_ascon_sbox_d2___ctor_var_reset(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->x_in = VL_RAND_RESET_I(15);
    vlSelf->fresh_r = VL_RAND_RESET_I(3);
    vlSelf->sel_masked_round = VL_RAND_RESET_I(1);
    vlSelf->x_out = VL_RAND_RESET_I(15);
    vlSelf->x_out_noMask = VL_RAND_RESET_I(15);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__x[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__and_result_bank[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__and_result_reg[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__y[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__y_noMask[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk6__DOT__i = 0;
    vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(3);
    vlSelf->__Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound8 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound9 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__0__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__1__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__2__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__3__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__4__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__5__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__9__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__10__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__11__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__12__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__13__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__14__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__15__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__16__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__17__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__18__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__19__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__20__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__21__unnamedblk8__DOT__i = 0;
}
