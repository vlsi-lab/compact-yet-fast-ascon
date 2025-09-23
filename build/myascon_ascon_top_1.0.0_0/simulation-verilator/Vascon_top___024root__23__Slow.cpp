// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__25(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__25\n"); );
    // Variables
    VlWide<7>/*223:0*/ __Vtemp26917;
    VlWide<7>/*223:0*/ __Vtemp26951;
    VlWide<7>/*223:0*/ __Vtemp26985;
    VlWide<7>/*223:0*/ __Vtemp27019;
    VlWide<7>/*223:0*/ __Vtemp27053;
    VlWide<7>/*223:0*/ __Vtemp27087;
    VlWide<7>/*223:0*/ __Vtemp27121;
    VlWide<7>/*223:0*/ __Vtemp27155;
    VlWide<7>/*223:0*/ __Vtemp27189;
    VlWide<7>/*223:0*/ __Vtemp27223;
    VlWide<7>/*223:0*/ __Vtemp27257;
    VlWide<7>/*223:0*/ __Vtemp27291;
    VlWide<7>/*223:0*/ __Vtemp27325;
    VlWide<7>/*223:0*/ __Vtemp27359;
    VlWide<7>/*223:0*/ __Vtemp27393;
    VlWide<7>/*223:0*/ __Vtemp27427;
    VlWide<7>/*223:0*/ __Vtemp27461;
    VlWide<7>/*223:0*/ __Vtemp27495;
    VlWide<7>/*223:0*/ __Vtemp27529;
    VlWide<7>/*223:0*/ __Vtemp27563;
    VlWide<7>/*223:0*/ __Vtemp27597;
    VlWide<7>/*223:0*/ __Vtemp27631;
    VlWide<7>/*223:0*/ __Vtemp27665;
    VlWide<7>/*223:0*/ __Vtemp27699;
    VlWide<7>/*223:0*/ __Vtemp27733;
    VlWide<7>/*223:0*/ __Vtemp27767;
    VlWide<7>/*223:0*/ __Vtemp27801;
    VlWide<7>/*223:0*/ __Vtemp27835;
    VlWide<7>/*223:0*/ __Vtemp27869;
    VlWide<7>/*223:0*/ __Vtemp27903;
    VlWide<7>/*223:0*/ __Vtemp27937;
    VlWide<7>/*223:0*/ __Vtemp27971;
    VlWide<7>/*223:0*/ __Vtemp28005;
    VlWide<7>/*223:0*/ __Vtemp28039;
    VlWide<7>/*223:0*/ __Vtemp28073;
    VlWide<7>/*223:0*/ __Vtemp28107;
    VlWide<7>/*223:0*/ __Vtemp28141;
    VlWide<7>/*223:0*/ __Vtemp28175;
    VlWide<7>/*223:0*/ __Vtemp28209;
    VlWide<7>/*223:0*/ __Vtemp28243;
    VlWide<7>/*223:0*/ __Vtemp28277;
    VlWide<7>/*223:0*/ __Vtemp28311;
    VlWide<7>/*223:0*/ __Vtemp28345;
    VlWide<7>/*223:0*/ __Vtemp28379;
    // Body
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i))))) {
            __Vtemp26917[0U] = 0U;
            __Vtemp26917[1U] = 0U;
            __Vtemp26917[2U] = 0U;
            __Vtemp26917[3U] = 0U;
            __Vtemp26917[4U] = 0U;
            __Vtemp26917[5U] = 0U;
            __Vtemp26917[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i)) 
                      & (__Vtemp26917[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i))))) {
            __Vtemp26951[0U] = 0U;
            __Vtemp26951[1U] = 0U;
            __Vtemp26951[2U] = 0U;
            __Vtemp26951[3U] = 0U;
            __Vtemp26951[4U] = 0U;
            __Vtemp26951[5U] = 0U;
            __Vtemp26951[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i)) 
                      & (__Vtemp26951[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i))))) {
            __Vtemp26985[0U] = 0U;
            __Vtemp26985[1U] = 0U;
            __Vtemp26985[2U] = 0U;
            __Vtemp26985[3U] = 0U;
            __Vtemp26985[4U] = 0U;
            __Vtemp26985[5U] = 0U;
            __Vtemp26985[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i)) 
                      & (__Vtemp26985[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i))))) {
            __Vtemp27019[0U] = 0U;
            __Vtemp27019[1U] = 0U;
            __Vtemp27019[2U] = 0U;
            __Vtemp27019[3U] = 0U;
            __Vtemp27019[4U] = 0U;
            __Vtemp27019[5U] = 0U;
            __Vtemp27019[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i)) 
                      & (__Vtemp27019[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i))))) {
            __Vtemp27053[0U] = 0U;
            __Vtemp27053[1U] = 0U;
            __Vtemp27053[2U] = 0U;
            __Vtemp27053[3U] = 0U;
            __Vtemp27053[4U] = 0U;
            __Vtemp27053[5U] = 0U;
            __Vtemp27053[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i)) 
                      & (__Vtemp27053[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i))))) {
            __Vtemp27087[0U] = 0U;
            __Vtemp27087[1U] = 0U;
            __Vtemp27087[2U] = 0U;
            __Vtemp27087[3U] = 0U;
            __Vtemp27087[4U] = 0U;
            __Vtemp27087[5U] = 0U;
            __Vtemp27087[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i)) 
                      & (__Vtemp27087[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i))))) {
            __Vtemp27121[0U] = 0U;
            __Vtemp27121[1U] = 0U;
            __Vtemp27121[2U] = 0U;
            __Vtemp27121[3U] = 0U;
            __Vtemp27121[4U] = 0U;
            __Vtemp27121[5U] = 0U;
            __Vtemp27121[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i)) 
                      & (__Vtemp27121[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i))))) {
            __Vtemp27155[0U] = 0U;
            __Vtemp27155[1U] = 0U;
            __Vtemp27155[2U] = 0U;
            __Vtemp27155[3U] = 0U;
            __Vtemp27155[4U] = 0U;
            __Vtemp27155[5U] = 0U;
            __Vtemp27155[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i)) 
                      & (__Vtemp27155[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i))))) {
            __Vtemp27189[0U] = 0U;
            __Vtemp27189[1U] = 0U;
            __Vtemp27189[2U] = 0U;
            __Vtemp27189[3U] = 0U;
            __Vtemp27189[4U] = 0U;
            __Vtemp27189[5U] = 0U;
            __Vtemp27189[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i)) 
                      & (__Vtemp27189[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i))))) {
            __Vtemp27223[0U] = 0U;
            __Vtemp27223[1U] = 0U;
            __Vtemp27223[2U] = 0U;
            __Vtemp27223[3U] = 0U;
            __Vtemp27223[4U] = 0U;
            __Vtemp27223[5U] = 0U;
            __Vtemp27223[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i)) 
                      & (__Vtemp27223[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i))))) {
            __Vtemp27257[0U] = 0U;
            __Vtemp27257[1U] = 0U;
            __Vtemp27257[2U] = 0U;
            __Vtemp27257[3U] = 0U;
            __Vtemp27257[4U] = 0U;
            __Vtemp27257[5U] = 0U;
            __Vtemp27257[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i)) 
                      & (__Vtemp27257[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i))))) {
            __Vtemp27291[0U] = 0U;
            __Vtemp27291[1U] = 0U;
            __Vtemp27291[2U] = 0U;
            __Vtemp27291[3U] = 0U;
            __Vtemp27291[4U] = 0U;
            __Vtemp27291[5U] = 0U;
            __Vtemp27291[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i)) 
                      & (__Vtemp27291[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i))))) {
            __Vtemp27325[0U] = 0U;
            __Vtemp27325[1U] = 0U;
            __Vtemp27325[2U] = 0U;
            __Vtemp27325[3U] = 0U;
            __Vtemp27325[4U] = 0U;
            __Vtemp27325[5U] = 0U;
            __Vtemp27325[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i)) 
                      & (__Vtemp27325[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i))))) {
            __Vtemp27359[0U] = 0U;
            __Vtemp27359[1U] = 0U;
            __Vtemp27359[2U] = 0U;
            __Vtemp27359[3U] = 0U;
            __Vtemp27359[4U] = 0U;
            __Vtemp27359[5U] = 0U;
            __Vtemp27359[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i)) 
                      & (__Vtemp27359[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i))))) {
            __Vtemp27393[0U] = 0U;
            __Vtemp27393[1U] = 0U;
            __Vtemp27393[2U] = 0U;
            __Vtemp27393[3U] = 0U;
            __Vtemp27393[4U] = 0U;
            __Vtemp27393[5U] = 0U;
            __Vtemp27393[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i)) 
                      & (__Vtemp27393[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i))))) {
            __Vtemp27427[0U] = 0U;
            __Vtemp27427[1U] = 0U;
            __Vtemp27427[2U] = 0U;
            __Vtemp27427[3U] = 0U;
            __Vtemp27427[4U] = 0U;
            __Vtemp27427[5U] = 0U;
            __Vtemp27427[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i)) 
                      & (__Vtemp27427[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i))))) {
            __Vtemp27461[0U] = 0U;
            __Vtemp27461[1U] = 0U;
            __Vtemp27461[2U] = 0U;
            __Vtemp27461[3U] = 0U;
            __Vtemp27461[4U] = 0U;
            __Vtemp27461[5U] = 0U;
            __Vtemp27461[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i)) 
                      & (__Vtemp27461[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i))))) {
            __Vtemp27495[0U] = 0U;
            __Vtemp27495[1U] = 0U;
            __Vtemp27495[2U] = 0U;
            __Vtemp27495[3U] = 0U;
            __Vtemp27495[4U] = 0U;
            __Vtemp27495[5U] = 0U;
            __Vtemp27495[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i)) 
                      & (__Vtemp27495[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i))))) {
            __Vtemp27529[0U] = 0U;
            __Vtemp27529[1U] = 0U;
            __Vtemp27529[2U] = 0U;
            __Vtemp27529[3U] = 0U;
            __Vtemp27529[4U] = 0U;
            __Vtemp27529[5U] = 0U;
            __Vtemp27529[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i)) 
                      & (__Vtemp27529[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i))))) {
            __Vtemp27563[0U] = 0U;
            __Vtemp27563[1U] = 0U;
            __Vtemp27563[2U] = 0U;
            __Vtemp27563[3U] = 0U;
            __Vtemp27563[4U] = 0U;
            __Vtemp27563[5U] = 0U;
            __Vtemp27563[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i)) 
                      & (__Vtemp27563[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i))))) {
            __Vtemp27597[0U] = 0U;
            __Vtemp27597[1U] = 0U;
            __Vtemp27597[2U] = 0U;
            __Vtemp27597[3U] = 0U;
            __Vtemp27597[4U] = 0U;
            __Vtemp27597[5U] = 0U;
            __Vtemp27597[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i)) 
                      & (__Vtemp27597[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i))))) {
            __Vtemp27631[0U] = 0U;
            __Vtemp27631[1U] = 0U;
            __Vtemp27631[2U] = 0U;
            __Vtemp27631[3U] = 0U;
            __Vtemp27631[4U] = 0U;
            __Vtemp27631[5U] = 0U;
            __Vtemp27631[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i)) 
                      & (__Vtemp27631[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i))))) {
            __Vtemp27665[0U] = 0U;
            __Vtemp27665[1U] = 0U;
            __Vtemp27665[2U] = 0U;
            __Vtemp27665[3U] = 0U;
            __Vtemp27665[4U] = 0U;
            __Vtemp27665[5U] = 0U;
            __Vtemp27665[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i)) 
                      & (__Vtemp27665[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i))))) {
            __Vtemp27699[0U] = 0U;
            __Vtemp27699[1U] = 0U;
            __Vtemp27699[2U] = 0U;
            __Vtemp27699[3U] = 0U;
            __Vtemp27699[4U] = 0U;
            __Vtemp27699[5U] = 0U;
            __Vtemp27699[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i)) 
                      & (__Vtemp27699[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i))))) {
            __Vtemp27733[0U] = 0U;
            __Vtemp27733[1U] = 0U;
            __Vtemp27733[2U] = 0U;
            __Vtemp27733[3U] = 0U;
            __Vtemp27733[4U] = 0U;
            __Vtemp27733[5U] = 0U;
            __Vtemp27733[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i)) 
                      & (__Vtemp27733[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i))))) {
            __Vtemp27767[0U] = 0U;
            __Vtemp27767[1U] = 0U;
            __Vtemp27767[2U] = 0U;
            __Vtemp27767[3U] = 0U;
            __Vtemp27767[4U] = 0U;
            __Vtemp27767[5U] = 0U;
            __Vtemp27767[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i)) 
                      & (__Vtemp27767[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i))))) {
            __Vtemp27801[0U] = 0U;
            __Vtemp27801[1U] = 0U;
            __Vtemp27801[2U] = 0U;
            __Vtemp27801[3U] = 0U;
            __Vtemp27801[4U] = 0U;
            __Vtemp27801[5U] = 0U;
            __Vtemp27801[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i)) 
                      & (__Vtemp27801[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i))))) {
            __Vtemp27835[0U] = 0U;
            __Vtemp27835[1U] = 0U;
            __Vtemp27835[2U] = 0U;
            __Vtemp27835[3U] = 0U;
            __Vtemp27835[4U] = 0U;
            __Vtemp27835[5U] = 0U;
            __Vtemp27835[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i)) 
                      & (__Vtemp27835[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i))))) {
            __Vtemp27869[0U] = 0U;
            __Vtemp27869[1U] = 0U;
            __Vtemp27869[2U] = 0U;
            __Vtemp27869[3U] = 0U;
            __Vtemp27869[4U] = 0U;
            __Vtemp27869[5U] = 0U;
            __Vtemp27869[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i)) 
                      & (__Vtemp27869[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i))))) {
            __Vtemp27903[0U] = 0U;
            __Vtemp27903[1U] = 0U;
            __Vtemp27903[2U] = 0U;
            __Vtemp27903[3U] = 0U;
            __Vtemp27903[4U] = 0U;
            __Vtemp27903[5U] = 0U;
            __Vtemp27903[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i)) 
                      & (__Vtemp27903[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i))))) {
            __Vtemp27937[0U] = 0U;
            __Vtemp27937[1U] = 0U;
            __Vtemp27937[2U] = 0U;
            __Vtemp27937[3U] = 0U;
            __Vtemp27937[4U] = 0U;
            __Vtemp27937[5U] = 0U;
            __Vtemp27937[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i)) 
                      & (__Vtemp27937[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i))))) {
            __Vtemp27971[0U] = 0U;
            __Vtemp27971[1U] = 0U;
            __Vtemp27971[2U] = 0U;
            __Vtemp27971[3U] = 0U;
            __Vtemp27971[4U] = 0U;
            __Vtemp27971[5U] = 0U;
            __Vtemp27971[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i)) 
                      & (__Vtemp27971[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i))))) {
            __Vtemp28005[0U] = 0U;
            __Vtemp28005[1U] = 0U;
            __Vtemp28005[2U] = 0U;
            __Vtemp28005[3U] = 0U;
            __Vtemp28005[4U] = 0U;
            __Vtemp28005[5U] = 0U;
            __Vtemp28005[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i)) 
                      & (__Vtemp28005[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i))))) {
            __Vtemp28039[0U] = 0U;
            __Vtemp28039[1U] = 0U;
            __Vtemp28039[2U] = 0U;
            __Vtemp28039[3U] = 0U;
            __Vtemp28039[4U] = 0U;
            __Vtemp28039[5U] = 0U;
            __Vtemp28039[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i)) 
                      & (__Vtemp28039[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i))))) {
            __Vtemp28073[0U] = 0U;
            __Vtemp28073[1U] = 0U;
            __Vtemp28073[2U] = 0U;
            __Vtemp28073[3U] = 0U;
            __Vtemp28073[4U] = 0U;
            __Vtemp28073[5U] = 0U;
            __Vtemp28073[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i)) 
                      & (__Vtemp28073[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i))))) {
            __Vtemp28107[0U] = 0U;
            __Vtemp28107[1U] = 0U;
            __Vtemp28107[2U] = 0U;
            __Vtemp28107[3U] = 0U;
            __Vtemp28107[4U] = 0U;
            __Vtemp28107[5U] = 0U;
            __Vtemp28107[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i)) 
                      & (__Vtemp28107[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i))))) {
            __Vtemp28141[0U] = 0U;
            __Vtemp28141[1U] = 0U;
            __Vtemp28141[2U] = 0U;
            __Vtemp28141[3U] = 0U;
            __Vtemp28141[4U] = 0U;
            __Vtemp28141[5U] = 0U;
            __Vtemp28141[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i)) 
                      & (__Vtemp28141[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i))))) {
            __Vtemp28175[0U] = 0U;
            __Vtemp28175[1U] = 0U;
            __Vtemp28175[2U] = 0U;
            __Vtemp28175[3U] = 0U;
            __Vtemp28175[4U] = 0U;
            __Vtemp28175[5U] = 0U;
            __Vtemp28175[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i)) 
                      & (__Vtemp28175[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i))))) {
            __Vtemp28209[0U] = 0U;
            __Vtemp28209[1U] = 0U;
            __Vtemp28209[2U] = 0U;
            __Vtemp28209[3U] = 0U;
            __Vtemp28209[4U] = 0U;
            __Vtemp28209[5U] = 0U;
            __Vtemp28209[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i)) 
                      & (__Vtemp28209[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i))))) {
            __Vtemp28243[0U] = 0U;
            __Vtemp28243[1U] = 0U;
            __Vtemp28243[2U] = 0U;
            __Vtemp28243[3U] = 0U;
            __Vtemp28243[4U] = 0U;
            __Vtemp28243[5U] = 0U;
            __Vtemp28243[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i)) 
                      & (__Vtemp28243[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i))))) {
            __Vtemp28277[0U] = 0U;
            __Vtemp28277[1U] = 0U;
            __Vtemp28277[2U] = 0U;
            __Vtemp28277[3U] = 0U;
            __Vtemp28277[4U] = 0U;
            __Vtemp28277[5U] = 0U;
            __Vtemp28277[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i)) 
                      & (__Vtemp28277[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i))))) {
            __Vtemp28311[0U] = 0U;
            __Vtemp28311[1U] = 0U;
            __Vtemp28311[2U] = 0U;
            __Vtemp28311[3U] = 0U;
            __Vtemp28311[4U] = 0U;
            __Vtemp28311[5U] = 0U;
            __Vtemp28311[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i)) 
                      & (__Vtemp28311[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i))))) {
            __Vtemp28345[0U] = 0U;
            __Vtemp28345[1U] = 0U;
            __Vtemp28345[2U] = 0U;
            __Vtemp28345[3U] = 0U;
            __Vtemp28345[4U] = 0U;
            __Vtemp28345[5U] = 0U;
            __Vtemp28345[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i)) 
                      & (__Vtemp28345[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i))))) {
            __Vtemp28379[0U] = 0U;
            __Vtemp28379[1U] = 0U;
            __Vtemp28379[2U] = 0U;
            __Vtemp28379[3U] = 0U;
            __Vtemp28379[4U] = 0U;
            __Vtemp28379[5U] = 0U;
            __Vtemp28379[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i)) 
                      & (__Vtemp28379[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
}
