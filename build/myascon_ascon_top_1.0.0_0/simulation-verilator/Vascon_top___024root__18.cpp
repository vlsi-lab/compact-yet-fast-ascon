// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___combo__TOP__60(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___combo__TOP__60\n"); );
    // Variables
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    // Body
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U][0U]))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U][0U]))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [0U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U][0U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][0U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [0U][1U] 
                                           << 0xaU) 
                                          | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [0U][0U] 
                                             >> 0x16U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [0U][1U] 
                                             << 0xaU) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U][0U] 
                                               >> 0x16U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [0U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U][2U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][3U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][2U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U][1U] >> 0xcU))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [0U][2U] 
                                             << 0x14U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U][1U] 
                                               >> 0xcU))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [0U][5U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U][4U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][5U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][4U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                          [0U][2U] 
                                          >> 2U)))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                            [0U][2U] 
                                            >> 2U)))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [0U][7U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U][6U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][7U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][6U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [0U][3U] 
                                           << 8U) | 
                                          (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [0U][2U] 
                                           >> 0x18U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [0U][3U] 
                                             << 8U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U][2U] 
                                               >> 0x18U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [0U][9U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U][8U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][9U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][8U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
    }
}

void Vascon_top___024root___sequent__TOP__39(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__40(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__41(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__42(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__43(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__44(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__45(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__46(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__47(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__48(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__49(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__50(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__51(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__52(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__53(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__54(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__55(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__23(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__24(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__25(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__26(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__27(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__28(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__29(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__30(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__31(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__32(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__33(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__34(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__35(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__36(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__37(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__38(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__39(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__40(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__41(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__42(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__43(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__44(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top___024root___sequent__TOP__56(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__45(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__46(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__47(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__48(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__49(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__50(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__51(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__52(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__53(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__54(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__55(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__56(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__57(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__58(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__59(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__60(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__61(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__62(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__63(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__64(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__65(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__66(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top___024root___combo__TOP__57(Vascon_top___024root* vlSelf);
void Vascon_top___024root___multiclk__TOP__58(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__67(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__68(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__69(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__70(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__71(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__72(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__73(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__74(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__75(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__76(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__77(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__78(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__79(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__80(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__81(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__82(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__83(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__84(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__85(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__86(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__87(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__88(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top___024root___sequent__TOP__59(Vascon_top___024root* vlSelf);

void Vascon_top___024root___eval(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Vascon_top___024root___sequent__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vascon_top___024root___sequent__TOP__40(vlSelf);
        Vascon_top___024root___sequent__TOP__41(vlSelf);
        Vascon_top___024root___sequent__TOP__42(vlSelf);
        Vascon_top___024root___sequent__TOP__43(vlSelf);
        Vascon_top___024root___sequent__TOP__44(vlSelf);
        Vascon_top___024root___sequent__TOP__45(vlSelf);
        Vascon_top___024root___sequent__TOP__46(vlSelf);
        Vascon_top___024root___sequent__TOP__47(vlSelf);
        Vascon_top___024root___sequent__TOP__48(vlSelf);
        Vascon_top___024root___sequent__TOP__49(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n_lfsr)) & (IData)(vlSelf->__Vclklast__TOP__reset_n_lfsr)))) {
        Vascon_top___024root___sequent__TOP__50(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vascon_top___024root___sequent__TOP__51(vlSelf);
        Vascon_top___024root___sequent__TOP__52(vlSelf);
        Vascon_top___024root___sequent__TOP__53(vlSelf);
        Vascon_top___024root___sequent__TOP__54(vlSelf);
        Vascon_top___024root___sequent__TOP__55(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__23((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__24((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__25((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__26((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__27((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__28((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__29((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__30((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__31((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__32((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__33((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__34((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__35((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__36((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__37((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__38((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__39((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__40((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__41((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__42((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__43((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__44((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
        Vascon_top___024root___sequent__TOP__56(vlSelf);
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__45((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__46((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__47((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__48((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__49((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__50((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__51((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__52((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__53((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__54((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__55((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__56((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__57((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__58((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__59((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__60((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__61((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__62((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__63((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__64((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__65((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__66((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
    }
    Vascon_top___024root___combo__TOP__57(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n))) 
         | ((~ (IData)(vlSelf->reset_n_lfsr)) & (IData)(vlSelf->__Vclklast__TOP__reset_n_lfsr)))) {
        Vascon_top___024root___multiclk__TOP__58(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__67((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__68((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__69((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__70((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__71((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__72((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__73((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__74((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__75((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__76((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__77((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__78((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__79((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__80((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__81((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__82((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__83((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__84((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__85((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__86((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__87((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__88((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
        Vascon_top___024root___sequent__TOP__59(vlSelf);
    }
    Vascon_top___024root___combo__TOP__60(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
    vlSelf->__Vclklast__TOP__reset_n_lfsr = vlSelf->reset_n_lfsr;
}

QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf);

VL_INLINE_OPT QData Vascon_top___024root___change_request(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request\n"); );
    // Body
    return (Vascon_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->reset_n_lfsr & 0xfeU))) {
        Verilated::overWidthError("reset_n_lfsr");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->load_data & 0xfeU))) {
        Verilated::overWidthError("load_data");}
    if (VL_UNLIKELY((vlSelf->valid_data_in & 0xfeU))) {
        Verilated::overWidthError("valid_data_in");}
    if (VL_UNLIKELY((vlSelf->last_block & 0xfeU))) {
        Verilated::overWidthError("last_block");}
    if (VL_UNLIKELY((vlSelf->valid_bytes & 0xe0U))) {
        Verilated::overWidthError("valid_bytes");}
    if (VL_UNLIKELY((vlSelf->EOT & 0xfeU))) {
        Verilated::overWidthError("EOT");}
}
#endif  // VL_DEBUG
