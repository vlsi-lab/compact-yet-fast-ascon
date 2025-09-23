// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__20(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__20\n"); );
    // Variables
    VlWide<8>/*253:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout;
    VlWide<8>/*253:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val;
    VlWide<7>/*222:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val;
    VlWide<7>/*222:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j;
    VlWide<8>/*253:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val;
    VlWide<7>/*222:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val;
    VlWide<7>/*222:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j;
    VlWide<7>/*223:0*/ __Vtemp19691;
    VlWide<7>/*223:0*/ __Vtemp19693;
    VlWide<7>/*223:0*/ __Vtemp19732;
    VlWide<7>/*223:0*/ __Vtemp19769;
    VlWide<7>/*223:0*/ __Vtemp19771;
    VlWide<7>/*223:0*/ __Vtemp19810;
    VlWide<7>/*223:0*/ __Vtemp19845;
    VlWide<7>/*223:0*/ __Vtemp19879;
    VlWide<7>/*223:0*/ __Vtemp19913;
    VlWide<7>/*223:0*/ __Vtemp19947;
    VlWide<7>/*223:0*/ __Vtemp19981;
    VlWide<7>/*223:0*/ __Vtemp20015;
    VlWide<7>/*223:0*/ __Vtemp20049;
    VlWide<7>/*223:0*/ __Vtemp20083;
    VlWide<7>/*223:0*/ __Vtemp20117;
    VlWide<7>/*223:0*/ __Vtemp20151;
    VlWide<7>/*223:0*/ __Vtemp20185;
    VlWide<7>/*223:0*/ __Vtemp20219;
    VlWide<7>/*223:0*/ __Vtemp20253;
    VlWide<7>/*223:0*/ __Vtemp20287;
    VlWide<7>/*223:0*/ __Vtemp20321;
    VlWide<7>/*223:0*/ __Vtemp20355;
    VlWide<7>/*223:0*/ __Vtemp20389;
    VlWide<7>/*223:0*/ __Vtemp20423;
    VlWide<7>/*223:0*/ __Vtemp20457;
    VlWide<7>/*223:0*/ __Vtemp20491;
    VlWide<7>/*223:0*/ __Vtemp20525;
    VlWide<7>/*223:0*/ __Vtemp20559;
    VlWide<7>/*223:0*/ __Vtemp20593;
    VlWide<7>/*223:0*/ __Vtemp20627;
    VlWide<7>/*223:0*/ __Vtemp20661;
    VlWide<7>/*223:0*/ __Vtemp20695;
    VlWide<7>/*223:0*/ __Vtemp20729;
    VlWide<7>/*223:0*/ __Vtemp20763;
    VlWide<7>/*223:0*/ __Vtemp20797;
    VlWide<7>/*223:0*/ __Vtemp20831;
    VlWide<7>/*223:0*/ __Vtemp20865;
    VlWide<7>/*223:0*/ __Vtemp20899;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state;
    VlUnpacked<VlWide<7>/*222:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 223> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state;
    VlUnpacked<VlWide<7>/*222:0*/, 223> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state;
    VlUnpacked<VlWide<7>/*222:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 223> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state;
    VlUnpacked<VlWide<7>/*222:0*/, 223> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data;
    // Body
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__state_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_state
        [0xdcU];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][0U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][1U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][2U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][3U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[4U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][4U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[5U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][5U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[6U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data
        [0xdcU][6U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[0U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[0U] 
            << 0x1fU) | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__state_val);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[1U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[0U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[1U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[2U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[1U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[2U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[3U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[2U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[3U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[4U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[3U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[4U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[5U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[4U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[5U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[6U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[5U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[6U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[7U] 
        = (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val[6U] 
           >> 1U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[0U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[1U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[2U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[3U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[4U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[4U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[5U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[5U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[6U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[6U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask[7U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__Vfuncout[7U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4 = 0U;
        if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4;
        }
        if (VL_GTS_III(1,32,32, 0x1fU, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5 = 1U;
            if (VL_LIKELY(((0x1eU >= (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)) 
                           & (0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i))))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)] 
                    = (((~ ((IData)(1U) << (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i))) 
                        & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state
                        [(0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)]) 
                       | (0x7fffffffU & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5) 
                                         << (0x1fU 
                                             & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i))));
            }
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[3U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[4U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[5U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[6U] = 0U;
        if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][0U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][1U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][2U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][3U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[3U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][4U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[4U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][5U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[5U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i)][6U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[6U];
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__i);
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[6U] = 0x40000000U;
    while ((0U != ((((((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[0U] 
                        | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[1U]) 
                       | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[2U]) 
                      | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[3U]) 
                     | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[4U]) 
                    | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[5U]) 
                   | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[6U]))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1eU][6U];
        __Vtemp19691[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[1U]);
        __Vtemp19691[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[2U]);
        __Vtemp19691[3U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[3U]);
        __Vtemp19691[4U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[4U]);
        __Vtemp19691[5U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[5U]);
        __Vtemp19691[6U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[6U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
               ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
            = __Vtemp19691[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
            = __Vtemp19691[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
            = __Vtemp19691[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
            = __Vtemp19691[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
            = __Vtemp19691[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
            = __Vtemp19691[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val);
        __Vtemp19693[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][1U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U]);
        __Vtemp19693[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][2U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U]);
        __Vtemp19693[3U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][3U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U]);
        __Vtemp19693[4U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][4U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U]);
        __Vtemp19693[5U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][5U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U]);
        __Vtemp19693[6U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
                            [0x1bU][6U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
               [0x1bU][0U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
            = __Vtemp19693[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
            = __Vtemp19693[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
            = __Vtemp19693[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
            = __Vtemp19693[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
            = __Vtemp19693[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
            = __Vtemp19693[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1dU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1eU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1cU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1dU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1bU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1cU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x1aU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1bU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x19U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x1aU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x18U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x19U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x17U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x18U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x16U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x17U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x15U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x16U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x14U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x15U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x13U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x14U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x12U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x13U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x11U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x12U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0x10U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x11U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xfU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0x10U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xeU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xfU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xdU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xeU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xcU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xdU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xbU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xcU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0xaU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xbU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [9U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0xaU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [8U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[9U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [7U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[8U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [6U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[7U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [5U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[6U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [4U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[5U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [3U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[4U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [2U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[3U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [1U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[2U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data
            [0U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[1U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j = 0xdeU;
        while (VL_LTS_III(1,32,32, 0U, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
                = ((0xdeU >= (0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                                       - (IData)(1U))))
                    ? __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state
                   [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                              - (IData)(1U)))] : 0U);
            if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
            }
            if ((0xdeU >= (0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                                    - (IData)(1U))))) {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][0U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][1U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][2U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][3U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][4U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][5U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                               - (IData)(1U)))][6U];
            } else {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U] = 0U;
            }
            if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][0U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][1U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][2U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][3U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][4U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][5U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j)][6U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U];
            }
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__j 
                   - (IData)(1U));
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data[0U][6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__lfsr_mask_data[0U][6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U];
        VL_SHIFTR_WWI(223,223,32, __Vtemp19732, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask, 1U);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[0U] 
            = __Vtemp19732[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[1U] 
            = __Vtemp19732[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[2U] 
            = __Vtemp19732[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[3U] 
            = __Vtemp19732[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[4U] 
            = __Vtemp19732[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[5U] 
            = __Vtemp19732[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_mask[6U] 
            = (0x7fffffffU & __Vtemp19732[6U]);
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_state
        [0xddU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][0U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][1U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][3U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][4U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][5U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__output_mask_data
        [0xddU][6U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[0U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
            << 0x1fU) | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__state_val);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[1U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[0U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[2U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[1U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[3U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[2U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[4U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[3U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[5U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[4U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[6U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[5U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[7U] 
        = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__data_val[6U] 
           >> 1U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[0U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[1U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[2U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[3U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[4U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[4U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[5U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[5U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[6U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[6U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask[7U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__914__Vfuncout[7U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4 = 0U;
        if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4;
        }
        if (VL_GTS_III(1,32,32, 0x1fU, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5 = 1U;
            if (VL_LIKELY(((0x1eU >= (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)) 
                           & (0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i))))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)] 
                    = (((~ ((IData)(1U) << (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i))) 
                        & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state
                        [(0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)]) 
                       | (0x7fffffffU & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5) 
                                         << (0x1fU 
                                             & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i))));
            }
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[3U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[4U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[5U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[6U] = 0U;
        if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][0U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][1U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][2U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][3U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[3U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][4U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[4U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][5U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[5U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i)][6U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[6U];
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__i);
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[6U] = 0x40000000U;
    while ((0U != ((((((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[0U] 
                        | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[1U]) 
                       | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[2U]) 
                      | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[3U]) 
                     | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[4U]) 
                    | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[5U]) 
                   | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[6U]))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1eU][6U];
        __Vtemp19769[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[1U]);
        __Vtemp19769[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[2U]);
        __Vtemp19769[3U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[3U]);
        __Vtemp19769[4U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[4U]);
        __Vtemp19769[5U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[5U]);
        __Vtemp19769[6U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
                            ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[6U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
               ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
            = __Vtemp19769[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
            = __Vtemp19769[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
            = __Vtemp19769[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
            = __Vtemp19769[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
            = __Vtemp19769[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
            = __Vtemp19769[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val);
        __Vtemp19771[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][1U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U]);
        __Vtemp19771[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][2U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U]);
        __Vtemp19771[3U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][3U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U]);
        __Vtemp19771[4U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][4U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U]);
        __Vtemp19771[5U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][5U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U]);
        __Vtemp19771[6U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
                            [0x1bU][6U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
               [0x1bU][0U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
            = __Vtemp19771[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
            = __Vtemp19771[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
            = __Vtemp19771[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
            = __Vtemp19771[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
            = __Vtemp19771[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
            = __Vtemp19771[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1dU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1eU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1cU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1dU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1bU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1cU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x1aU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1bU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x19U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x1aU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x18U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x19U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x17U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x18U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x16U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x17U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x15U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x16U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x14U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x15U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x13U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x14U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x12U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x13U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x11U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x12U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0x10U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x11U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xfU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0x10U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xeU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xfU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xdU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xeU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xcU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xdU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xbU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xcU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0xaU][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xbU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [9U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0xaU][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [8U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[9U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [7U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[8U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [6U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[7U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [5U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[6U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [4U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[5U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [3U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[4U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [2U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[3U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [1U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[2U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][3U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][4U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][5U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data
            [0U][6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[1U][6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j = 0xdeU;
        while (VL_LTS_III(1,32,32, 0U, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
                = ((0xdeU >= (0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                                       - (IData)(1U))))
                    ? __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state
                   [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                              - (IData)(1U)))] : 0U);
            if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
            }
            if ((0xdeU >= (0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                                    - (IData)(1U))))) {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][0U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][1U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][2U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][3U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][4U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][5U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
                    [(0xffU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                               - (IData)(1U)))][6U];
            } else {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U] = 0U;
            }
            if (VL_LIKELY((0xdeU >= (0xffU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][0U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][1U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][2U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][3U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[3U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][4U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[4U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][5U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[5U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[(0xffU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j)][6U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[6U];
            }
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__j 
                   - (IData)(1U));
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data[0U][6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][3U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][4U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][5U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__lfsr_mask_data[0U][6U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U];
        VL_SHIFTR_WWI(223,223,32, __Vtemp19810, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask, 1U);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[0U] 
            = __Vtemp19810[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[1U] 
            = __Vtemp19810[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[2U] 
            = __Vtemp19810[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[3U] 
            = __Vtemp19810[3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[4U] 
            = __Vtemp19810[4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[5U] 
            = __Vtemp19810[5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_mask[6U] 
            = (0x7fffffffU & __Vtemp19810[6U]);
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_state
        [0xdeU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][0U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][1U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][3U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][4U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][5U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__output_mask_data
        [0xdeU][6U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[0U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
            << 0x1fU) | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__state_val);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[1U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[0U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[2U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[1U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[3U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[2U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[4U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[3U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[5U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[4U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[6U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[5U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[7U] 
        = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__data_val[6U] 
           >> 1U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[0U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[1U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[2U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[3U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[4U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[4U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[5U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[5U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[6U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[6U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask[7U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__915__Vfuncout[7U];
    vlSelf->debug_extra_padding_ff = vlSelf->ascon_top__DOT__extra_padding_ff;
    vlSelf->debug_bitcounter = vlSelf->ascon_top__DOT__bit_counter;
    vlSelf->debug_roundcounter = vlSelf->ascon_top__DOT__round_counter;
    vlSelf->debug_round_state_0 = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelf->debug_round_state_1 = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelf->debug_round_state_2 = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelf->debug_round_state_3 = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelf->debug_round_state_4 = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelf->debug_state = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
                    }
                } else {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
        } else if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits 
            = ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                ? 1U : 4U);
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
    }
    vlSelf->read_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->read_data = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    vlSelf->read_data = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__reg_key2_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__reg_key2_load = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__reg_key1_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__reg_key1_load = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
        }
    }
    vlSelf->done = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->done = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                }
            }
        }
    }
    vlSelf->ready_for_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                                   & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                            vlSelf->ready_for_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                               & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                        vlSelf->ready_for_data = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ciphertext_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ciphertext_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    } else if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ready_tag = 0U;
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round = 0xcU;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U)))) {
                            vlSelf->ready_tag = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__write_en = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__write_en = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            } else {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            }
        } else {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    }
    vlSelf->ascon_top__DOT__shift_enable_sipo = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
    }
    vlSelf->ascon_top__DOT__last_cycle_sipo = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((2U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                            vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((0U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                        vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            if ((2U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__shift_en = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_en = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__shift_en = 1U;
    }
    vlSelf->ascon_top__DOT__last_cycle = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__last_cycle = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__last_cycle = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__last_cycle = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__last_cycle = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_xor_signal = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_xor_signal = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_absorb_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_init_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_init_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__shift_type = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_type = 1U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_type = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__sel_padding = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_masked_round = 1U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__sel_masked_round = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_masked_round = 0U;
            }
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound8 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
                   >> 0x20U));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i))))) {
            __Vtemp19845[0U] = 0U;
            __Vtemp19845[1U] = 0U;
            __Vtemp19845[2U] = 0U;
            __Vtemp19845[3U] = 0U;
            __Vtemp19845[4U] = 0U;
            __Vtemp19845[5U] = 0U;
            __Vtemp19845[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i)) 
                      & (__Vtemp19845[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i))))) {
            __Vtemp19879[0U] = 0U;
            __Vtemp19879[1U] = 0U;
            __Vtemp19879[2U] = 0U;
            __Vtemp19879[3U] = 0U;
            __Vtemp19879[4U] = 0U;
            __Vtemp19879[5U] = 0U;
            __Vtemp19879[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i)) 
                      & (__Vtemp19879[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i))))) {
            __Vtemp19913[0U] = 0U;
            __Vtemp19913[1U] = 0U;
            __Vtemp19913[2U] = 0U;
            __Vtemp19913[3U] = 0U;
            __Vtemp19913[4U] = 0U;
            __Vtemp19913[5U] = 0U;
            __Vtemp19913[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i)) 
                      & (__Vtemp19913[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i))))) {
            __Vtemp19947[0U] = 0U;
            __Vtemp19947[1U] = 0U;
            __Vtemp19947[2U] = 0U;
            __Vtemp19947[3U] = 0U;
            __Vtemp19947[4U] = 0U;
            __Vtemp19947[5U] = 0U;
            __Vtemp19947[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i)) 
                      & (__Vtemp19947[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i))))) {
            __Vtemp19981[0U] = 0U;
            __Vtemp19981[1U] = 0U;
            __Vtemp19981[2U] = 0U;
            __Vtemp19981[3U] = 0U;
            __Vtemp19981[4U] = 0U;
            __Vtemp19981[5U] = 0U;
            __Vtemp19981[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i)) 
                      & (__Vtemp19981[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i))))) {
            __Vtemp20015[0U] = 0U;
            __Vtemp20015[1U] = 0U;
            __Vtemp20015[2U] = 0U;
            __Vtemp20015[3U] = 0U;
            __Vtemp20015[4U] = 0U;
            __Vtemp20015[5U] = 0U;
            __Vtemp20015[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i)) 
                      & (__Vtemp20015[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i))))) {
            __Vtemp20049[0U] = 0U;
            __Vtemp20049[1U] = 0U;
            __Vtemp20049[2U] = 0U;
            __Vtemp20049[3U] = 0U;
            __Vtemp20049[4U] = 0U;
            __Vtemp20049[5U] = 0U;
            __Vtemp20049[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i)) 
                      & (__Vtemp20049[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i))))) {
            __Vtemp20083[0U] = 0U;
            __Vtemp20083[1U] = 0U;
            __Vtemp20083[2U] = 0U;
            __Vtemp20083[3U] = 0U;
            __Vtemp20083[4U] = 0U;
            __Vtemp20083[5U] = 0U;
            __Vtemp20083[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i)) 
                      & (__Vtemp20083[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i))))) {
            __Vtemp20117[0U] = 0U;
            __Vtemp20117[1U] = 0U;
            __Vtemp20117[2U] = 0U;
            __Vtemp20117[3U] = 0U;
            __Vtemp20117[4U] = 0U;
            __Vtemp20117[5U] = 0U;
            __Vtemp20117[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i)) 
                      & (__Vtemp20117[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i))))) {
            __Vtemp20151[0U] = 0U;
            __Vtemp20151[1U] = 0U;
            __Vtemp20151[2U] = 0U;
            __Vtemp20151[3U] = 0U;
            __Vtemp20151[4U] = 0U;
            __Vtemp20151[5U] = 0U;
            __Vtemp20151[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i)) 
                      & (__Vtemp20151[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i))))) {
            __Vtemp20185[0U] = 0U;
            __Vtemp20185[1U] = 0U;
            __Vtemp20185[2U] = 0U;
            __Vtemp20185[3U] = 0U;
            __Vtemp20185[4U] = 0U;
            __Vtemp20185[5U] = 0U;
            __Vtemp20185[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i)) 
                      & (__Vtemp20185[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i))))) {
            __Vtemp20219[0U] = 0U;
            __Vtemp20219[1U] = 0U;
            __Vtemp20219[2U] = 0U;
            __Vtemp20219[3U] = 0U;
            __Vtemp20219[4U] = 0U;
            __Vtemp20219[5U] = 0U;
            __Vtemp20219[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i)) 
                      & (__Vtemp20219[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i))))) {
            __Vtemp20253[0U] = 0U;
            __Vtemp20253[1U] = 0U;
            __Vtemp20253[2U] = 0U;
            __Vtemp20253[3U] = 0U;
            __Vtemp20253[4U] = 0U;
            __Vtemp20253[5U] = 0U;
            __Vtemp20253[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i)) 
                      & (__Vtemp20253[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i))))) {
            __Vtemp20287[0U] = 0U;
            __Vtemp20287[1U] = 0U;
            __Vtemp20287[2U] = 0U;
            __Vtemp20287[3U] = 0U;
            __Vtemp20287[4U] = 0U;
            __Vtemp20287[5U] = 0U;
            __Vtemp20287[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i)) 
                      & (__Vtemp20287[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i))))) {
            __Vtemp20321[0U] = 0U;
            __Vtemp20321[1U] = 0U;
            __Vtemp20321[2U] = 0U;
            __Vtemp20321[3U] = 0U;
            __Vtemp20321[4U] = 0U;
            __Vtemp20321[5U] = 0U;
            __Vtemp20321[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i)) 
                      & (__Vtemp20321[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i))))) {
            __Vtemp20355[0U] = 0U;
            __Vtemp20355[1U] = 0U;
            __Vtemp20355[2U] = 0U;
            __Vtemp20355[3U] = 0U;
            __Vtemp20355[4U] = 0U;
            __Vtemp20355[5U] = 0U;
            __Vtemp20355[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i)) 
                      & (__Vtemp20355[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i))))) {
            __Vtemp20389[0U] = 0U;
            __Vtemp20389[1U] = 0U;
            __Vtemp20389[2U] = 0U;
            __Vtemp20389[3U] = 0U;
            __Vtemp20389[4U] = 0U;
            __Vtemp20389[5U] = 0U;
            __Vtemp20389[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i)) 
                      & (__Vtemp20389[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i))))) {
            __Vtemp20423[0U] = 0U;
            __Vtemp20423[1U] = 0U;
            __Vtemp20423[2U] = 0U;
            __Vtemp20423[3U] = 0U;
            __Vtemp20423[4U] = 0U;
            __Vtemp20423[5U] = 0U;
            __Vtemp20423[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i)) 
                      & (__Vtemp20423[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i))))) {
            __Vtemp20457[0U] = 0U;
            __Vtemp20457[1U] = 0U;
            __Vtemp20457[2U] = 0U;
            __Vtemp20457[3U] = 0U;
            __Vtemp20457[4U] = 0U;
            __Vtemp20457[5U] = 0U;
            __Vtemp20457[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i)) 
                      & (__Vtemp20457[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i))))) {
            __Vtemp20491[0U] = 0U;
            __Vtemp20491[1U] = 0U;
            __Vtemp20491[2U] = 0U;
            __Vtemp20491[3U] = 0U;
            __Vtemp20491[4U] = 0U;
            __Vtemp20491[5U] = 0U;
            __Vtemp20491[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i)) 
                      & (__Vtemp20491[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i))))) {
            __Vtemp20525[0U] = 0U;
            __Vtemp20525[1U] = 0U;
            __Vtemp20525[2U] = 0U;
            __Vtemp20525[3U] = 0U;
            __Vtemp20525[4U] = 0U;
            __Vtemp20525[5U] = 0U;
            __Vtemp20525[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i)) 
                      & (__Vtemp20525[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i))))) {
            __Vtemp20559[0U] = 0U;
            __Vtemp20559[1U] = 0U;
            __Vtemp20559[2U] = 0U;
            __Vtemp20559[3U] = 0U;
            __Vtemp20559[4U] = 0U;
            __Vtemp20559[5U] = 0U;
            __Vtemp20559[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i)) 
                      & (__Vtemp20559[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i))))) {
            __Vtemp20593[0U] = 0U;
            __Vtemp20593[1U] = 0U;
            __Vtemp20593[2U] = 0U;
            __Vtemp20593[3U] = 0U;
            __Vtemp20593[4U] = 0U;
            __Vtemp20593[5U] = 0U;
            __Vtemp20593[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i)) 
                      & (__Vtemp20593[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i))))) {
            __Vtemp20627[0U] = 0U;
            __Vtemp20627[1U] = 0U;
            __Vtemp20627[2U] = 0U;
            __Vtemp20627[3U] = 0U;
            __Vtemp20627[4U] = 0U;
            __Vtemp20627[5U] = 0U;
            __Vtemp20627[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i)) 
                      & (__Vtemp20627[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i))))) {
            __Vtemp20661[0U] = 0U;
            __Vtemp20661[1U] = 0U;
            __Vtemp20661[2U] = 0U;
            __Vtemp20661[3U] = 0U;
            __Vtemp20661[4U] = 0U;
            __Vtemp20661[5U] = 0U;
            __Vtemp20661[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i)) 
                      & (__Vtemp20661[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i))))) {
            __Vtemp20695[0U] = 0U;
            __Vtemp20695[1U] = 0U;
            __Vtemp20695[2U] = 0U;
            __Vtemp20695[3U] = 0U;
            __Vtemp20695[4U] = 0U;
            __Vtemp20695[5U] = 0U;
            __Vtemp20695[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i)) 
                      & (__Vtemp20695[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i))))) {
            __Vtemp20729[0U] = 0U;
            __Vtemp20729[1U] = 0U;
            __Vtemp20729[2U] = 0U;
            __Vtemp20729[3U] = 0U;
            __Vtemp20729[4U] = 0U;
            __Vtemp20729[5U] = 0U;
            __Vtemp20729[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i)) 
                      & (__Vtemp20729[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i))))) {
            __Vtemp20763[0U] = 0U;
            __Vtemp20763[1U] = 0U;
            __Vtemp20763[2U] = 0U;
            __Vtemp20763[3U] = 0U;
            __Vtemp20763[4U] = 0U;
            __Vtemp20763[5U] = 0U;
            __Vtemp20763[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i)) 
                      & (__Vtemp20763[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i))))) {
            __Vtemp20797[0U] = 0U;
            __Vtemp20797[1U] = 0U;
            __Vtemp20797[2U] = 0U;
            __Vtemp20797[3U] = 0U;
            __Vtemp20797[4U] = 0U;
            __Vtemp20797[5U] = 0U;
            __Vtemp20797[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i)) 
                      & (__Vtemp20797[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i))))) {
            __Vtemp20831[0U] = 0U;
            __Vtemp20831[1U] = 0U;
            __Vtemp20831[2U] = 0U;
            __Vtemp20831[3U] = 0U;
            __Vtemp20831[4U] = 0U;
            __Vtemp20831[5U] = 0U;
            __Vtemp20831[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i)) 
                      & (__Vtemp20831[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i))))) {
            __Vtemp20865[0U] = 0U;
            __Vtemp20865[1U] = 0U;
            __Vtemp20865[2U] = 0U;
            __Vtemp20865[3U] = 0U;
            __Vtemp20865[4U] = 0U;
            __Vtemp20865[5U] = 0U;
            __Vtemp20865[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i)) 
                      & (__Vtemp20865[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((0x80000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((0x100000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((0x200000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((0x400000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((0x800000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((0x1000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((0x2000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((0x4000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((0x8000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((0x10000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((0x20000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((0x40000000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xdfU, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i)) {
        if (((0xfdU >= (0xffU & ((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i))) 
             & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask[
                (7U & (((IData)(0x1fU) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i) 
                       >> 5U))] >> (0x1fU & ((IData)(0x1fU) 
                                             + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i))))) {
            __Vtemp20899[0U] = 0U;
            __Vtemp20899[1U] = 0U;
            __Vtemp20899[2U] = 0U;
            __Vtemp20899[3U] = 0U;
            __Vtemp20899[4U] = 0U;
            __Vtemp20899[5U] = 0U;
            __Vtemp20899[6U] = 0U;
            vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
                = ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                   ^ ((0xdeU >= (0xffU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i)) 
                      & (__Vtemp20899[(7U & (vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i 
                                             >> 5U))] 
                         >> (0x1fU & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i))));
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i);
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg = 0U;
    if ((1U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((2U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((4U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((8U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((0x10U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((0x20U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((0x40U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((0x80U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((0x100U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((0x200U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((0x400U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((0x800U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((0x1000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((0x2000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((0x4000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((0x8000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((0x10000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((0x20000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((0x40000U & vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask[0U])) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
}
