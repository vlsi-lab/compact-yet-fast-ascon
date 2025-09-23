// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top_ascon_sbox_d2.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__50(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__50\n"); );
    // Body
    vlSelf->__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [5U] >> 0xcU));
    vlSelf->__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [5U] >> 9U));
    vlSelf->__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [5U] >> 6U));
    vlSelf->__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [5U] >> 3U));
    vlSelf->__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                            [5U]);
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__72(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__72\n"); );
    // Variables
    CData/*0:0*/ __Vlvbound2;
    CData/*0:0*/ __Vlvbound3;
    CData/*0:0*/ __Vlvbound4;
    CData/*0:0*/ __Vlvbound5;
    // Body
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x10U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x10U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xaU)));
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
                                                >> 8U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 8U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x10U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x10U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xaU)));
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
                                                >> 8U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 8U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x10U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x10U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xaU)));
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
                                                >> 8U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 8U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x10U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x10U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xaU)));
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
                                                >> 8U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 8U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x10U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x10U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xaU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xaU)));
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
                                                >> 8U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 8U)));
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

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__29(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__29\n"); );
    // Variables
    SData/*8:0*/ __Vlvbound6;
    CData/*0:0*/ __Vlvbound10;
    CData/*0:0*/ __Vlvbound11;
    CData/*0:0*/ __Vfunc_xor_tree__6__Vfuncout;
    CData/*2:0*/ __Vfunc_xor_tree__6__in;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v0;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v1;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v2;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v3;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v4;
    IData/*31:0*/ __Vfunc_xor_tree__6__N;
    IData/*31:0*/ __Vfunc_xor_tree__6__level;
    IData/*31:0*/ __Vfunc_xor_tree__6__num;
    IData/*31:0*/ __Vfunc_xor_tree__6__unnamedblk7__DOT__i;
    // Body
    vlSelf->__PVT__unnamedblk6__DOT__i = 5U;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[0U];
    __Vdlyvval__and_result_reg__v0 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[1U];
    __Vdlyvval__and_result_reg__v1 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[2U];
    __Vdlyvval__and_result_reg__v2 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[3U];
    __Vdlyvval__and_result_reg__v3 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[4U];
    __Vdlyvval__and_result_reg__v4 = __Vlvbound6;
    vlSelf->__PVT__and_result_reg[0U] = __Vdlyvval__and_result_reg__v0;
    vlSelf->__PVT__and_result_reg[1U] = __Vdlyvval__and_result_reg__v1;
    vlSelf->__PVT__and_result_reg[2U] = __Vdlyvval__and_result_reg__v2;
    vlSelf->__PVT__and_result_reg[3U] = __Vdlyvval__and_result_reg__v3;
    vlSelf->__PVT__and_result_reg[4U] = __Vdlyvval__and_result_reg__v4;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
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
    __Vfunc_xor_tree__6__N = 3U;
    __Vfunc_xor_tree__6__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__6__level = 0U;
    __Vfunc_xor_tree__6__num = 3U;
    __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__6__unnamedblk7__DOT__i, __Vfunc_xor_tree__6__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__6__in) 
                                  >> (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__6__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__6__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__6__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__6__num)) {
        vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__6__level))
                                         ? vlSelf->__Vfunc_xor_tree__6__stage
                                        [(3U & __Vfunc_xor_tree__6__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__6__level))
                                           ? vlSelf->__Vfunc_xor_tree__6__stage
                                          [(3U & __Vfunc_xor_tree__6__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__6__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__6__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__6__level))
                                        ? vlSelf->__Vfunc_xor_tree__6__stage
                                       [(3U & __Vfunc_xor_tree__6__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__6__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__6__level)))))) {
                vlSelf->__Vfunc_xor_tree__6__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__6__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__6__num = VL_DIVS_III(32, __Vfunc_xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_xor_tree__6__level = ((IData)(1U) + __Vfunc_xor_tree__6__level);
    }
    __Vfunc_xor_tree__6__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__6__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__6__stage
                                         [(3U & __Vfunc_xor_tree__6__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__6__Vfuncout;
    vlSelf->__PVT__y[4U] = ((3U & vlSelf->__PVT__y[4U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__51(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__51\n"); );
    // Body
    vlSelf->__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [6U] >> 0xcU));
    vlSelf->__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [6U] >> 9U));
    vlSelf->__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [6U] >> 6U));
    vlSelf->__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [6U] >> 3U));
    vlSelf->__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                            [6U]);
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__73(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__73\n"); );
    // Variables
    CData/*0:0*/ __Vlvbound2;
    CData/*0:0*/ __Vlvbound3;
    CData/*0:0*/ __Vlvbound4;
    CData/*0:0*/ __Vlvbound5;
    // Body
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x11U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x11U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xbU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xbU)));
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
                                                >> 9U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 9U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x11U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x11U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xbU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xbU)));
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
                                                >> 9U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 9U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x11U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x11U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xbU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xbU)));
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
                                                >> 9U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 9U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x11U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x11U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xbU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xbU)));
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
                                                >> 9U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 9U)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x11U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x11U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xbU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xbU)));
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
                                                >> 9U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 9U)));
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

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__30(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__30\n"); );
    // Variables
    SData/*8:0*/ __Vlvbound6;
    CData/*0:0*/ __Vlvbound10;
    CData/*0:0*/ __Vlvbound11;
    CData/*0:0*/ __Vfunc_xor_tree__7__Vfuncout;
    CData/*2:0*/ __Vfunc_xor_tree__7__in;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v0;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v1;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v2;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v3;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v4;
    IData/*31:0*/ __Vfunc_xor_tree__7__N;
    IData/*31:0*/ __Vfunc_xor_tree__7__level;
    IData/*31:0*/ __Vfunc_xor_tree__7__num;
    IData/*31:0*/ __Vfunc_xor_tree__7__unnamedblk7__DOT__i;
    // Body
    vlSelf->__PVT__unnamedblk6__DOT__i = 5U;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[0U];
    __Vdlyvval__and_result_reg__v0 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[1U];
    __Vdlyvval__and_result_reg__v1 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[2U];
    __Vdlyvval__and_result_reg__v2 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[3U];
    __Vdlyvval__and_result_reg__v3 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[4U];
    __Vdlyvval__and_result_reg__v4 = __Vlvbound6;
    vlSelf->__PVT__and_result_reg[0U] = __Vdlyvval__and_result_reg__v0;
    vlSelf->__PVT__and_result_reg[1U] = __Vdlyvval__and_result_reg__v1;
    vlSelf->__PVT__and_result_reg[2U] = __Vdlyvval__and_result_reg__v2;
    vlSelf->__PVT__and_result_reg[3U] = __Vdlyvval__and_result_reg__v3;
    vlSelf->__PVT__and_result_reg[4U] = __Vdlyvval__and_result_reg__v4;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
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
    __Vfunc_xor_tree__7__N = 3U;
    __Vfunc_xor_tree__7__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__7__level = 0U;
    __Vfunc_xor_tree__7__num = 3U;
    __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__7__unnamedblk7__DOT__i, __Vfunc_xor_tree__7__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__7__in) 
                                  >> (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__7__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__7__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__7__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__7__num)) {
        vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__7__level))
                                         ? vlSelf->__Vfunc_xor_tree__7__stage
                                        [(3U & __Vfunc_xor_tree__7__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__7__level))
                                           ? vlSelf->__Vfunc_xor_tree__7__stage
                                          [(3U & __Vfunc_xor_tree__7__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__7__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__7__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__7__level))
                                        ? vlSelf->__Vfunc_xor_tree__7__stage
                                       [(3U & __Vfunc_xor_tree__7__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__7__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__7__level)))))) {
                vlSelf->__Vfunc_xor_tree__7__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__7__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__7__num = VL_DIVS_III(32, __Vfunc_xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_xor_tree__7__level = ((IData)(1U) + __Vfunc_xor_tree__7__level);
    }
    __Vfunc_xor_tree__7__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__7__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__7__stage
                                         [(3U & __Vfunc_xor_tree__7__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__7__Vfuncout;
    vlSelf->__PVT__y[4U] = ((3U & vlSelf->__PVT__y[4U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__52(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__52\n"); );
    // Body
    vlSelf->__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [7U] >> 0xcU));
    vlSelf->__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [7U] >> 9U));
    vlSelf->__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [7U] >> 6U));
    vlSelf->__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                  [7U] >> 3U));
    vlSelf->__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                            [7U]);
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__74(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__74\n"); );
    // Variables
    CData/*0:0*/ __Vlvbound2;
    CData/*0:0*/ __Vlvbound3;
    CData/*0:0*/ __Vlvbound4;
    CData/*0:0*/ __Vlvbound5;
    // Body
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x12U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x12U)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xcU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xcU)));
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
                                                >> 0xaU)));
    vlSelf->__PVT__and_result_bank[0U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [0U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0xaU)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x12U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x12U)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xcU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xcU)));
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
                                                >> 0xaU)));
    vlSelf->__PVT__and_result_bank[1U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [1U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0xaU)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x12U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x12U)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xcU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xcU)));
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
                                                >> 0xaU)));
    vlSelf->__PVT__and_result_bank[2U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [2U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0xaU)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x12U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x12U)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xcU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xcU)));
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
                                                >> 0xaU)));
    vlSelf->__PVT__and_result_bank[3U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [3U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0xaU)));
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
                             >> 1U)) ^ (vlSymsp->TOP.state_reg_out[0U] 
                                        >> 0x12U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fdU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 1U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 1U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[0U] 
                            >> 0x12U)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1f7U & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound5) 
                                           << 3U));
    __Vlvbound4 = (1U & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                          & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                        >> 0xcU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1fbU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 2U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                         ^ (vlSymsp->TOP.state_reg_out[1U] 
                            >> 0xcU)));
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
                                                >> 0xaU)));
    vlSelf->__PVT__and_result_bank[4U] = ((0x1dfU & 
                                           vlSelf->__PVT__and_result_bank
                                           [4U]) | 
                                          ((IData)(__Vlvbound4) 
                                           << 5U));
    __Vlvbound5 = (1U & ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                           >> 2U) & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                     >> 1U)) ^ (vlSymsp->TOP.state_reg_out[1U] 
                                                >> 0xaU)));
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

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__31(Vascon_top_ascon_sbox_d2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__31\n"); );
    // Variables
    SData/*8:0*/ __Vlvbound6;
    CData/*0:0*/ __Vlvbound10;
    CData/*0:0*/ __Vlvbound11;
    CData/*0:0*/ __Vfunc_xor_tree__8__Vfuncout;
    CData/*2:0*/ __Vfunc_xor_tree__8__in;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v0;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v1;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v2;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v3;
    SData/*8:0*/ __Vdlyvval__and_result_reg__v4;
    IData/*31:0*/ __Vfunc_xor_tree__8__N;
    IData/*31:0*/ __Vfunc_xor_tree__8__level;
    IData/*31:0*/ __Vfunc_xor_tree__8__num;
    IData/*31:0*/ __Vfunc_xor_tree__8__unnamedblk7__DOT__i;
    // Body
    vlSelf->__PVT__unnamedblk6__DOT__i = 5U;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[0U];
    __Vdlyvval__and_result_reg__v0 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[1U];
    __Vdlyvval__and_result_reg__v1 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[2U];
    __Vdlyvval__and_result_reg__v2 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[3U];
    __Vdlyvval__and_result_reg__v3 = __Vlvbound6;
    __Vlvbound6 = vlSelf->__PVT__and_result_bank[4U];
    __Vdlyvval__and_result_reg__v4 = __Vlvbound6;
    vlSelf->__PVT__and_result_reg[0U] = __Vdlyvval__and_result_reg__v0;
    vlSelf->__PVT__and_result_reg[1U] = __Vdlyvval__and_result_reg__v1;
    vlSelf->__PVT__and_result_reg[2U] = __Vdlyvval__and_result_reg__v2;
    vlSelf->__PVT__and_result_reg[3U] = __Vdlyvval__and_result_reg__v3;
    vlSelf->__PVT__and_result_reg[4U] = __Vdlyvval__and_result_reg__v4;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
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
    __Vfunc_xor_tree__8__N = 3U;
    __Vfunc_xor_tree__8__in = vlSelf->__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_xor_tree__8__level = 0U;
    __Vfunc_xor_tree__8__num = 3U;
    __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_xor_tree__8__unnamedblk7__DOT__i, __Vfunc_xor_tree__8__N)) {
        vlSelf->__Vlvbound7 = ((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)) 
                               & ((IData)(__Vfunc_xor_tree__8__in) 
                                  >> (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->__Vlvbound7) 
                                   << (3U & __Vfunc_xor_tree__8__unnamedblk7__DOT__i))));
        }
        __Vfunc_xor_tree__8__unnamedblk7__DOT__i = 
            ((IData)(1U) + __Vfunc_xor_tree__8__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_xor_tree__8__num)) {
        vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound8 = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                                    & (((2U >= (3U 
                                                & __Vfunc_xor_tree__8__level))
                                         ? vlSelf->__Vfunc_xor_tree__8__stage
                                        [(3U & __Vfunc_xor_tree__8__level)]
                                         : 0U) >> (3U 
                                                   & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                   ^ ((2U >= (3U & 
                                              ((IData)(1U) 
                                               + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)))) 
                                      & (((2U >= (3U 
                                                  & __Vfunc_xor_tree__8__level))
                                           ? vlSelf->__Vfunc_xor_tree__8__stage
                                          [(3U & __Vfunc_xor_tree__8__level)]
                                           : 0U) >> 
                                         (3U & ((IData)(1U) 
                                                + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_xor_tree__8__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) {
            vlSelf->__Vlvbound9 = ((2U >= (3U & (__Vfunc_xor_tree__8__num 
                                                 - (IData)(1U)))) 
                                   & (((2U >= (3U & __Vfunc_xor_tree__8__level))
                                        ? vlSelf->__Vfunc_xor_tree__8__stage
                                       [(3U & __Vfunc_xor_tree__8__level)]
                                        : 0U) >> (3U 
                                                  & (__Vfunc_xor_tree__8__num 
                                                     - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_xor_tree__8__level)))))) {
                vlSelf->__Vfunc_xor_tree__8__stage[(3U 
                                                    & ((IData)(1U) 
                                                       + __Vfunc_xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->__Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_xor_tree__8__num = ((IData)(1U) 
                                        + VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_xor_tree__8__num = VL_DIVS_III(32, __Vfunc_xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_xor_tree__8__level = ((IData)(1U) + __Vfunc_xor_tree__8__level);
    }
    __Vfunc_xor_tree__8__Vfuncout = ((2U >= (3U & __Vfunc_xor_tree__8__level))
                                      ? (1U & vlSelf->__Vfunc_xor_tree__8__stage
                                         [(3U & __Vfunc_xor_tree__8__level)])
                                      : 0U);
    __Vlvbound11 = __Vfunc_xor_tree__8__Vfuncout;
    vlSelf->__PVT__y[4U] = ((3U & vlSelf->__PVT__y[4U]) 
                            | ((IData)(__Vlvbound11) 
                               << 2U));
}
