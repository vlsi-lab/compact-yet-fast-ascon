// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__56(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__56\n"); );
    // Variables
    SData/*14:0*/ ascon_top__DOT____Vlvbound1;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v0;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v1;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v2;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v3;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v4;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v5;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v6;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v7;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v8;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v9;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v10;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v11;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v12;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v13;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v14;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v15;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v16;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v17;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v18;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v19;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v20;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v21;
    // Body
    vlSelf->ascon_top__DOT__sbox_output[0U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[1U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[2U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[3U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[4U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[5U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[6U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[7U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[8U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[9U] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                        [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xaU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xbU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xcU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xdU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xeU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0xfU] = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                  [4U] 
                                                  << 0xcU) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                        [2U] 
                                                        << 6U) 
                                                       | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                           [1U] 
                                                           << 3U) 
                                                          | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                          [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x10U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x11U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x12U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x13U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x14U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__sbox_output[0x15U] = ((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                      [3U] 
                                                      << 9U) 
                                                     | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                         [2U] 
                                                         << 6U) 
                                                        | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                            [1U] 
                                                            << 3U) 
                                                           | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                           [0U]))));
    vlSelf->ascon_top__DOT__unnamedblk2__DOT__p = 0x16U;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v0 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [1U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v1 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [2U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v2 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [3U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v3 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [4U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v4 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [5U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v5 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [6U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v6 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [7U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v7 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [8U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v8 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [9U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v9 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xaU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v10 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xbU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v11 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xcU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v12 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xdU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v13 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xeU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v14 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0xfU];
    __Vdlyvval__ascon_top__DOT__sbox_input__v15 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x10U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v16 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x11U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v17 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x12U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v18 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x13U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v19 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x14U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v20 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0x15U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v21 = ascon_top__DOT____Vlvbound1;
    vlSelf->ascon_top__DOT__sbox_input[0U] = __Vdlyvval__ascon_top__DOT__sbox_input__v0;
    vlSelf->ascon_top__DOT__sbox_input[1U] = __Vdlyvval__ascon_top__DOT__sbox_input__v1;
    vlSelf->ascon_top__DOT__sbox_input[2U] = __Vdlyvval__ascon_top__DOT__sbox_input__v2;
    vlSelf->ascon_top__DOT__sbox_input[3U] = __Vdlyvval__ascon_top__DOT__sbox_input__v3;
    vlSelf->ascon_top__DOT__sbox_input[4U] = __Vdlyvval__ascon_top__DOT__sbox_input__v4;
    vlSelf->ascon_top__DOT__sbox_input[5U] = __Vdlyvval__ascon_top__DOT__sbox_input__v5;
    vlSelf->ascon_top__DOT__sbox_input[6U] = __Vdlyvval__ascon_top__DOT__sbox_input__v6;
    vlSelf->ascon_top__DOT__sbox_input[7U] = __Vdlyvval__ascon_top__DOT__sbox_input__v7;
    vlSelf->ascon_top__DOT__sbox_input[8U] = __Vdlyvval__ascon_top__DOT__sbox_input__v8;
    vlSelf->ascon_top__DOT__sbox_input[9U] = __Vdlyvval__ascon_top__DOT__sbox_input__v9;
    vlSelf->ascon_top__DOT__sbox_input[0xaU] = __Vdlyvval__ascon_top__DOT__sbox_input__v10;
    vlSelf->ascon_top__DOT__sbox_input[0xbU] = __Vdlyvval__ascon_top__DOT__sbox_input__v11;
    vlSelf->ascon_top__DOT__sbox_input[0xcU] = __Vdlyvval__ascon_top__DOT__sbox_input__v12;
    vlSelf->ascon_top__DOT__sbox_input[0xdU] = __Vdlyvval__ascon_top__DOT__sbox_input__v13;
    vlSelf->ascon_top__DOT__sbox_input[0xeU] = __Vdlyvval__ascon_top__DOT__sbox_input__v14;
    vlSelf->ascon_top__DOT__sbox_input[0xfU] = __Vdlyvval__ascon_top__DOT__sbox_input__v15;
    vlSelf->ascon_top__DOT__sbox_input[0x10U] = __Vdlyvval__ascon_top__DOT__sbox_input__v16;
    vlSelf->ascon_top__DOT__sbox_input[0x11U] = __Vdlyvval__ascon_top__DOT__sbox_input__v17;
    vlSelf->ascon_top__DOT__sbox_input[0x12U] = __Vdlyvval__ascon_top__DOT__sbox_input__v18;
    vlSelf->ascon_top__DOT__sbox_input[0x13U] = __Vdlyvval__ascon_top__DOT__sbox_input__v19;
    vlSelf->ascon_top__DOT__sbox_input[0x14U] = __Vdlyvval__ascon_top__DOT__sbox_input__v20;
    vlSelf->ascon_top__DOT__sbox_input[0x15U] = __Vdlyvval__ascon_top__DOT__sbox_input__v21;
}

VL_INLINE_OPT void Vascon_top___024root___combo__TOP__57(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___combo__TOP__57\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__x;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__x;
    // Body
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
    vlSelf->ascon_top__DOT__state_reg_in_absorb[0U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[0U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[3U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[1U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[2U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[0U]))));
    vlSelf->ciphertext[0U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [0U]);
    vlSelf->ciphertext[1U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [0U] >> 0x20U));
    vlSelf->ciphertext[2U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [1U]);
    vlSelf->ciphertext[3U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [1U] >> 0x20U));
    if (vlSelf->ascon_top__DOT__sel_absorb_data) {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [0U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [0U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [0U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [1U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [1U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [1U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [2U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [2U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [3U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [3U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [4U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [4U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [4U] 
                                                      >> 0x20U)));
    } else {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->initialVector) : (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->ascon_top__DOT__linear_diffusion_out[0U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->initialVector >> 0x20U))
                : (IData)(((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                           >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key1) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[2U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key1 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key2) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[4U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key2 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce1) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                                      ? 
                                                     (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                      [3U] 
                                                      ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                                      : 
                                                     vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                     [3U])));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce1 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [3U]) >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce2) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                                      ? 
                                                     (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                        ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                        : 0x8000000000000000ULL))
                                                      : 
                                                     vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                     [4U])));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce2 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                         ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                         : 0x8000000000000000ULL))
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [4U]) >> 0x20U)));
    }
}

VL_INLINE_OPT void Vascon_top___024root___multiclk__TOP__58(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___multiclk__TOP__58\n"); );
    // Variables
    VlWide<4>/*109:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound1;
    VlWide<4>/*127:0*/ __Vtemp47923;
    VlWide<4>/*127:0*/ __Vtemp47930;
    VlWide<3>/*95:0*/ __Vtemp47963;
    VlWide<3>/*95:0*/ __Vtemp47974;
    VlWide<3>/*95:0*/ __Vtemp47985;
    // Body
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (IData)((((QData)((IData)((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                    << 0x16U) | (QData)((IData)((0x3fffffU 
                                                 & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U] 
        = ((vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
            << 0xcU) | (IData)(((((QData)((IData)((0x3fffffU 
                                                   & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                  << 0x16U) | (QData)((IData)(
                                                              (0x3fffffU 
                                                               & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))) 
                                >> 0x20U)));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U] 
        = ((vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
            << 0x18U) | ((0xfffffcU & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                       << 2U)) | (3U 
                                                  & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                     >> 0x14U))));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U] 
        = (0x3fffU & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                      >> 8U));
    ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
        = vlSelf->ascon_top__DOT__lfsr_out[0U];
    ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
        = vlSelf->ascon_top__DOT__lfsr_out[1U];
    ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
        = vlSelf->ascon_top__DOT__lfsr_out[2U];
    ascon_top__DOT__share_creator__DOT____Vlvbound1[3U] 
        = (0x3fffU & vlSelf->ascon_top__DOT__lfsr_out[3U]);
    vlSelf->ascon_top__DOT__shares_out[3U] = ((0x3fffU 
                                               & vlSelf->ascon_top__DOT__shares_out[3U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
                                                 << 0xeU));
    vlSelf->ascon_top__DOT__shares_out[4U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
                                               >> 0x12U) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
                                                 << 0xeU));
    vlSelf->ascon_top__DOT__shares_out[5U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
                                               >> 0x12U) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
                                                 << 0xeU));
    vlSelf->ascon_top__DOT__shares_out[6U] = ((0xf0000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[6U]) 
                                              | ((ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
                                                  >> 0x12U) 
                                                 | (ascon_top__DOT__share_creator__DOT____Vlvbound1[3U] 
                                                    << 0xeU)));
    __Vtemp47923[1U] = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U] 
                        ^ vlSelf->ascon_top__DOT__lfsr_out[1U]);
    __Vtemp47923[2U] = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U] 
                        ^ vlSelf->ascon_top__DOT__lfsr_out[2U]);
    __Vtemp47923[3U] = (0x3fffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U] 
                                   ^ vlSelf->ascon_top__DOT__lfsr_out[3U]));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ vlSelf->ascon_top__DOT__lfsr_out[0U]);
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp47923[1U];
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp47923[2U];
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp47923[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
        = ((vlSelf->ascon_top__DOT__lfsr_out[4U] << 0x12U) 
           | (vlSelf->ascon_top__DOT__lfsr_out[3U] 
              >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
        = ((vlSelf->ascon_top__DOT__lfsr_out[5U] << 0x12U) 
           | (vlSelf->ascon_top__DOT__lfsr_out[4U] 
              >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
        = ((vlSelf->ascon_top__DOT__lfsr_out[6U] << 0x12U) 
           | (vlSelf->ascon_top__DOT__lfsr_out[5U] 
              >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound1[3U] 
        = (0x3fffU & (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                      >> 0xeU));
    vlSelf->ascon_top__DOT__shares_out[6U] = ((0xfffffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[6U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
                                                 << 0x1cU));
    vlSelf->ascon_top__DOT__shares_out[7U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound1[0U] 
                                               >> 4U) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
                                                 << 0x1cU));
    vlSelf->ascon_top__DOT__shares_out[8U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound1[1U] 
                                               >> 4U) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
                                                 << 0x1cU));
    vlSelf->ascon_top__DOT__shares_out[9U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound1[2U] 
                                               >> 4U) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1[3U] 
                                                 << 0x1cU));
    vlSelf->ascon_top__DOT__shares_out[0xaU] = (0x3ffU 
                                                & (ascon_top__DOT__share_creator__DOT____Vlvbound1[3U] 
                                                   >> 4U));
    __Vtemp47930[1U] = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U] 
                        ^ ((vlSelf->ascon_top__DOT__lfsr_out[5U] 
                            << 0x12U) | (vlSelf->ascon_top__DOT__lfsr_out[4U] 
                                         >> 0xeU)));
    __Vtemp47930[2U] = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U] 
                        ^ ((vlSelf->ascon_top__DOT__lfsr_out[6U] 
                            << 0x12U) | (vlSelf->ascon_top__DOT__lfsr_out[5U] 
                                         >> 0xeU)));
    __Vtemp47930[3U] = (0x3fffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U] 
                                   ^ (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                                      >> 0xeU)));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ ((vlSelf->ascon_top__DOT__lfsr_out[4U] 
               << 0x12U) | (vlSelf->ascon_top__DOT__lfsr_out[3U] 
                            >> 0xeU)));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp47930[1U];
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp47930[2U];
    vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp47930[3U];
    vlSelf->ascon_top__DOT__shares_out[0U] = vlSelf->ascon_top__DOT__share_creator__DOT__temp[0U];
    vlSelf->ascon_top__DOT__shares_out[1U] = vlSelf->ascon_top__DOT__share_creator__DOT__temp[1U];
    vlSelf->ascon_top__DOT__shares_out[2U] = vlSelf->ascon_top__DOT__share_creator__DOT__temp[2U];
    vlSelf->ascon_top__DOT__shares_out[3U] = ((0xffffc000U 
                                               & vlSelf->ascon_top__DOT__shares_out[3U]) 
                                              | vlSelf->ascon_top__DOT__share_creator__DOT__temp[3U]);
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__affine_layer_in[0U][0U] 
            = vlSelf->ascon_top__DOT__shares_out[0U];
        vlSelf->ascon_top__DOT__affine_layer_in[0U][1U] 
            = vlSelf->ascon_top__DOT__shares_out[1U];
        vlSelf->ascon_top__DOT__affine_layer_in[0U][2U] 
            = vlSelf->ascon_top__DOT__shares_out[2U];
        vlSelf->ascon_top__DOT__affine_layer_in[0U][3U] 
            = (0x3fffU & vlSelf->ascon_top__DOT__shares_out[3U]);
        vlSelf->ascon_top__DOT__affine_layer_in[1U][0U] 
            = ((vlSelf->ascon_top__DOT__shares_out[4U] 
                << 0x12U) | (vlSelf->ascon_top__DOT__shares_out[3U] 
                             >> 0xeU));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][1U] 
            = ((vlSelf->ascon_top__DOT__shares_out[5U] 
                << 0x12U) | (vlSelf->ascon_top__DOT__shares_out[4U] 
                             >> 0xeU));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][2U] 
            = ((vlSelf->ascon_top__DOT__shares_out[6U] 
                << 0x12U) | (vlSelf->ascon_top__DOT__shares_out[5U] 
                             >> 0xeU));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][3U] 
            = (0x3fffU & ((vlSelf->ascon_top__DOT__shares_out[7U] 
                           << 0x12U) | (vlSelf->ascon_top__DOT__shares_out[6U] 
                                        >> 0xeU)));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][0U] 
            = ((vlSelf->ascon_top__DOT__shares_out[7U] 
                << 4U) | (vlSelf->ascon_top__DOT__shares_out[6U] 
                          >> 0x1cU));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][1U] 
            = ((vlSelf->ascon_top__DOT__shares_out[8U] 
                << 4U) | (vlSelf->ascon_top__DOT__shares_out[7U] 
                          >> 0x1cU));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][2U] 
            = ((vlSelf->ascon_top__DOT__shares_out[9U] 
                << 4U) | (vlSelf->ascon_top__DOT__shares_out[8U] 
                          >> 0x1cU));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][3U] 
            = (0x3fffU & ((vlSelf->ascon_top__DOT__shares_out[0xaU] 
                           << 4U) | (vlSelf->ascon_top__DOT__shares_out[9U] 
                                     >> 0x1cU)));
    } else {
        vlSelf->ascon_top__DOT__affine_layer_in[0U][0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))));
        vlSelf->ascon_top__DOT__affine_layer_in[0U][1U] 
            = ((vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (0x3fffffU 
                                                       & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))) 
                                    >> 0x20U)));
        vlSelf->ascon_top__DOT__affine_layer_in[0U][2U] 
            = ((vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                << 0x18U) | ((0xfffffcU & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                           << 2U)) 
                             | (3U & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                      >> 0x14U))));
        vlSelf->ascon_top__DOT__affine_layer_in[0U][3U] 
            = (0x3fffU & (0x3fffU & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                     >> 8U)));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                             << 0xaU) 
                                            | (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                               >> 0x16U))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                         << 0xaU) 
                                                        | (vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                           >> 0x16U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][1U] 
            = ((0xfffff000U & ((vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                << 0x16U) | (0x3ff000U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                >> 0xaU)))) 
               | (IData)(((((QData)((IData)((0x3fffffU 
                                             & ((vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                 << 0xaU) 
                                                | (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                   >> 0x16U))))) 
                            << 0x16U) | (QData)((IData)(
                                                        (0x3fffffU 
                                                         & ((vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                             << 0xaU) 
                                                            | (vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                               >> 0x16U)))))) 
                          >> 0x20U)));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][2U] 
            = ((0xff000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                               << 2U)) | ((0xfffffcU 
                                           & ((vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                               << 0xcU) 
                                              | (0xffcU 
                                                 & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                                    >> 0x14U)))) 
                                          | (3U & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                   >> 0xaU))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U][3U] 
            = (0x3fffU & (0x3fffU & ((0xfffffcU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                                   << 2U)) 
                                     | (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                        >> 0x1eU))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__mux_1st_x1[2U] 
                                             << 0x14U) 
                                            | (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                               >> 0xcU))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelf->ascon_top__DOT__mux_1st_x0[2U] 
                                                         << 0x14U) 
                                                        | (vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                           >> 0xcU)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][1U] 
            = ((0xfffff000U & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
               | (IData)(((((QData)((IData)((0x3fffffU 
                                             & ((vlSelf->ascon_top__DOT__mux_1st_x1[2U] 
                                                 << 0x14U) 
                                                | (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                   >> 0xcU))))) 
                            << 0x16U) | (QData)((IData)(
                                                        (0x3fffffU 
                                                         & ((vlSelf->ascon_top__DOT__mux_1st_x0[2U] 
                                                             << 0x14U) 
                                                            | (vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                               >> 0xcU)))))) 
                          >> 0x20U)));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][2U] 
            = ((0xff000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                               << 0xcU)) | ((0xfffffcU 
                                             & ((vlSelf->ascon_top__DOT__mux_1st_x3[2U] 
                                                 << 0x16U) 
                                                | (0x3ffffcU 
                                                   & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                                      >> 0xaU)))) 
                                            | (3U & 
                                               vlSelf->ascon_top__DOT__mux_1st_x2[2U])));
        vlSelf->ascon_top__DOT__affine_layer_in[2U][3U] 
            = (0x3fffU & (0x3fffU & ((0xfff000U & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x4[2U] 
                                                   << 0xcU)) 
                                     | (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                        >> 0x14U))));
    }
    __Vtemp47963[1U] = ((0xfffff000U & ((0xfffff000U 
                                         & vlSelf->ascon_top__DOT__affine_layer_in
                                         [0U][1U]) 
                                        ^ ((vlSelf->ascon_top__DOT__affine_layer_in
                                            [0U][1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [0U][0U] 
                                                 >> 0xaU))))) 
                        | (IData)(((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelf->ascon_top__DOT__affine_layer_in
                                                          [0U][1U] 
                                                          << 0xaU) 
                                                         | (vlSelf->ascon_top__DOT__affine_layer_in
                                                            [0U][0U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & (vlSelf->ascon_top__DOT__affine_layer_in
                                                                     [0U][0U] 
                                                                     ^ 
                                                                     ((vlSelf->ascon_top__DOT__affine_layer_in
                                                                       [0U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer_in
                                                                         [0U][2U] 
                                                                         >> 0x18U))))))) 
                                   >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer_out[0U][0U] 
        = (IData)((((QData)((IData)((0x3fffffU & ((
                                                   vlSelf->ascon_top__DOT__affine_layer_in
                                                   [0U][1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->ascon_top__DOT__affine_layer_in
                                                     [0U][0U] 
                                                     >> 0x16U))))) 
                    << 0x16U) | (QData)((IData)((0x3fffffU 
                                                 & (vlSelf->ascon_top__DOT__affine_layer_in
                                                    [0U][0U] 
                                                    ^ 
                                                    ((vlSelf->ascon_top__DOT__affine_layer_in
                                                      [0U][3U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_top__DOT__affine_layer_in
                                                        [0U][2U] 
                                                        >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer_out[0U][1U] 
        = __Vtemp47963[1U];
    vlSelf->ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xff000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                            [0U][2U]) ^ (0xff000000U 
                                         & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [0U][2U] 
                                            << 0x16U)))) 
           | ((0xfffffcU & vlSelf->ascon_top__DOT__affine_layer_in
               [0U][2U]) | (3U & ((0xfffU & vlSelf->ascon_top__DOT__affine_layer_in
                                   [0U][2U]) ^ (0xfffU 
                                                & (vlSelf->ascon_top__DOT__affine_layer_in
                                                   [0U][1U] 
                                                   >> 0xaU))))));
    vlSelf->ascon_top__DOT__affine_layer_out[0U][3U] 
        = (0x3fffU & ((0xffffffU & vlSelf->ascon_top__DOT__affine_layer_in
                       [0U][3U]) ^ ((0xc00000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [0U][2U] 
                                                  << 0x16U)) 
                                    | (vlSelf->ascon_top__DOT__affine_layer_in
                                       [0U][2U] >> 0xaU))));
    __Vtemp47974[1U] = ((0xfffff000U & ((0xfffff000U 
                                         & vlSelf->ascon_top__DOT__affine_layer_in
                                         [1U][1U]) 
                                        ^ ((vlSelf->ascon_top__DOT__affine_layer_in
                                            [1U][1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [1U][0U] 
                                                 >> 0xaU))))) 
                        | (IData)(((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelf->ascon_top__DOT__affine_layer_in
                                                          [1U][1U] 
                                                          << 0xaU) 
                                                         | (vlSelf->ascon_top__DOT__affine_layer_in
                                                            [1U][0U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & (vlSelf->ascon_top__DOT__affine_layer_in
                                                                     [1U][0U] 
                                                                     ^ 
                                                                     ((vlSelf->ascon_top__DOT__affine_layer_in
                                                                       [1U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer_in
                                                                         [1U][2U] 
                                                                         >> 0x18U))))))) 
                                   >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer_out[1U][0U] 
        = (IData)((((QData)((IData)((0x3fffffU & ((
                                                   vlSelf->ascon_top__DOT__affine_layer_in
                                                   [1U][1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->ascon_top__DOT__affine_layer_in
                                                     [1U][0U] 
                                                     >> 0x16U))))) 
                    << 0x16U) | (QData)((IData)((0x3fffffU 
                                                 & (vlSelf->ascon_top__DOT__affine_layer_in
                                                    [1U][0U] 
                                                    ^ 
                                                    ((vlSelf->ascon_top__DOT__affine_layer_in
                                                      [1U][3U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_top__DOT__affine_layer_in
                                                        [1U][2U] 
                                                        >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer_out[1U][1U] 
        = __Vtemp47974[1U];
    vlSelf->ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xff000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                            [1U][2U]) ^ (0xff000000U 
                                         & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [1U][2U] 
                                            << 0x16U)))) 
           | ((0xfffffcU & vlSelf->ascon_top__DOT__affine_layer_in
               [1U][2U]) | (3U & ((0xfffU & vlSelf->ascon_top__DOT__affine_layer_in
                                   [1U][2U]) ^ (0xfffU 
                                                & (vlSelf->ascon_top__DOT__affine_layer_in
                                                   [1U][1U] 
                                                   >> 0xaU))))));
    vlSelf->ascon_top__DOT__affine_layer_out[1U][3U] 
        = (0x3fffU & ((0xffffffU & vlSelf->ascon_top__DOT__affine_layer_in
                       [1U][3U]) ^ ((0xc00000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [1U][2U] 
                                                  << 0x16U)) 
                                    | (vlSelf->ascon_top__DOT__affine_layer_in
                                       [1U][2U] >> 0xaU))));
    __Vtemp47985[1U] = ((0xfffff000U & ((0xfffff000U 
                                         & vlSelf->ascon_top__DOT__affine_layer_in
                                         [2U][1U]) 
                                        ^ ((vlSelf->ascon_top__DOT__affine_layer_in
                                            [2U][1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [2U][0U] 
                                                 >> 0xaU))))) 
                        | (IData)(((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelf->ascon_top__DOT__affine_layer_in
                                                          [2U][1U] 
                                                          << 0xaU) 
                                                         | (vlSelf->ascon_top__DOT__affine_layer_in
                                                            [2U][0U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & (vlSelf->ascon_top__DOT__affine_layer_in
                                                                     [2U][0U] 
                                                                     ^ 
                                                                     ((vlSelf->ascon_top__DOT__affine_layer_in
                                                                       [2U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer_in
                                                                         [2U][2U] 
                                                                         >> 0x18U))))))) 
                                   >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer_out[2U][0U] 
        = (IData)((((QData)((IData)((0x3fffffU & ((
                                                   vlSelf->ascon_top__DOT__affine_layer_in
                                                   [2U][1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->ascon_top__DOT__affine_layer_in
                                                     [2U][0U] 
                                                     >> 0x16U))))) 
                    << 0x16U) | (QData)((IData)((0x3fffffU 
                                                 & (vlSelf->ascon_top__DOT__affine_layer_in
                                                    [2U][0U] 
                                                    ^ 
                                                    ((vlSelf->ascon_top__DOT__affine_layer_in
                                                      [2U][3U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_top__DOT__affine_layer_in
                                                        [2U][2U] 
                                                        >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer_out[2U][1U] 
        = __Vtemp47985[1U];
    vlSelf->ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xff000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                            [2U][2U]) ^ (0xff000000U 
                                         & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [2U][2U] 
                                            << 0x16U)))) 
           | ((0xfffffcU & vlSelf->ascon_top__DOT__affine_layer_in
               [2U][2U]) | (3U & ((0xfffU & vlSelf->ascon_top__DOT__affine_layer_in
                                   [2U][2U]) ^ (0xfffU 
                                                & (vlSelf->ascon_top__DOT__affine_layer_in
                                                   [2U][1U] 
                                                   >> 0xaU))))));
    vlSelf->ascon_top__DOT__affine_layer_out[2U][3U] 
        = (0x3fffU & ((0xffffffU & vlSelf->ascon_top__DOT__affine_layer_in
                       [2U][3U]) ^ ((0xc00000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [2U][2U] 
                                                  << 0x16U)) 
                                    | (vlSelf->ascon_top__DOT__affine_layer_in
                                       [2U][2U] >> 0xaU))));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (1U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [0U][0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (2U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [1U][0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (4U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [2U][0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x18U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x19U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x18U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[6U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [6U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x1aU)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x200U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [0U][2U]));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x19U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x18U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[7U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [7U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x1bU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][3U] 
                                                         << 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x1aU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x400U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [1U][2U]));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][3U] 
                                                         << 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x19U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][2U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[8U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [8U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][3U] 
                                                         << 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][0U] 
                                                         >> 0x1cU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][1U] 
                                                         >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][2U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U][3U] 
                                                         << 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][0U] 
                                                         >> 0x1bU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][1U] 
                                                         >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][2U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U][3U] 
                                                         << 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][0U] 
                                                         >> 0x1aU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][1U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x800U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [2U][2U]));
    vlSelf->ascon_top__DOT__next_sbox_input[9U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [9U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U][3U] 
                                                         << 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][1U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][1U] << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xaU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xaU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][1U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][1U] << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xbU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xbU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][1U] << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][1U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xcU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xcU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (8U & vlSelf->ascon_top__DOT__affine_layer_out
                     [0U][1U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][1U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xdU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xdU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][1U] >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x10U & vlSelf->ascon_top__DOT__affine_layer_out
                     [1U][1U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][1U] << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xeU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xeU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][0U] >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [0U][1U] >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [0U][2U] >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [0U][3U] << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [1U][0U] >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][1U] >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [1U][2U] >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [1U][3U] << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                           [2U][0U] >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x20U & vlSelf->ascon_top__DOT__affine_layer_out
                     [2U][1U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][1U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                               [2U][2U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0xfU] = 
        ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
          [0xfU]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                [2U][3U] << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xfU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x18U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x10U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x16U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x19U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x18U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x11U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x17U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x1000U & vlSelf->ascon_top__DOT__affine_layer_out
                        [0U][3U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x12U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x15U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xeU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [0U][3U] >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x14U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x2000U & vlSelf->ascon_top__DOT__affine_layer_out
                        [1U][3U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x13U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 1U)));
}

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__59(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__59\n"); );
    // Variables
    VlWide<4>/*109:0*/ ascon_top__DOT____Vlvbound322;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    // Body
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[1U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[2U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[3U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[4U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[5U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[6U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[7U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[8U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[9U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xaU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xbU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xcU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xdU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xeU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0xfU] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x10U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x11U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x12U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x13U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x14U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0x15U] 
        = ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
            [4U] << 0xcU) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                [0U]))));
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__mux_sbox_out[0x15U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x15U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x14U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x14U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x13U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x13U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x12U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x12U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x11U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x11U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x10U] 
            = vlSelf->ascon_top__DOT__sbox_output[0x10U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xfU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xfU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xeU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xeU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xdU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xdU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xcU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xcU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xbU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xbU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xaU] 
            = vlSelf->ascon_top__DOT__sbox_output[0xaU];
        vlSelf->ascon_top__DOT__mux_sbox_out[9U] = 
            vlSelf->ascon_top__DOT__sbox_output[9U];
        vlSelf->ascon_top__DOT__mux_sbox_out[8U] = 
            vlSelf->ascon_top__DOT__sbox_output[8U];
        vlSelf->ascon_top__DOT__mux_sbox_out[7U] = 
            vlSelf->ascon_top__DOT__sbox_output[7U];
        vlSelf->ascon_top__DOT__mux_sbox_out[6U] = 
            vlSelf->ascon_top__DOT__sbox_output[6U];
        vlSelf->ascon_top__DOT__mux_sbox_out[5U] = 
            vlSelf->ascon_top__DOT__sbox_output[5U];
        vlSelf->ascon_top__DOT__mux_sbox_out[4U] = 
            vlSelf->ascon_top__DOT__sbox_output[4U];
        vlSelf->ascon_top__DOT__mux_sbox_out[3U] = 
            vlSelf->ascon_top__DOT__sbox_output[3U];
        vlSelf->ascon_top__DOT__mux_sbox_out[2U] = 
            vlSelf->ascon_top__DOT__sbox_output[2U];
        vlSelf->ascon_top__DOT__mux_sbox_out[1U] = 
            vlSelf->ascon_top__DOT__sbox_output[1U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output[0U];
    } else {
        vlSelf->ascon_top__DOT__mux_sbox_out[0x15U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x15U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x14U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x14U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x13U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x13U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x12U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x12U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x11U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x11U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0x10U] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0x10U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xfU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xfU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xeU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xeU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xdU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xdU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xcU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xcU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xbU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xbU];
        vlSelf->ascon_top__DOT__mux_sbox_out[0xaU] 
            = vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0xaU];
        vlSelf->ascon_top__DOT__mux_sbox_out[9U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [9U];
        vlSelf->ascon_top__DOT__mux_sbox_out[8U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [8U];
        vlSelf->ascon_top__DOT__mux_sbox_out[7U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [7U];
        vlSelf->ascon_top__DOT__mux_sbox_out[6U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [6U];
        vlSelf->ascon_top__DOT__mux_sbox_out[5U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [5U];
        vlSelf->ascon_top__DOT__mux_sbox_out[4U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [4U];
        vlSelf->ascon_top__DOT__mux_sbox_out[3U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [3U];
        vlSelf->ascon_top__DOT__mux_sbox_out[2U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [2U];
        vlSelf->ascon_top__DOT__mux_sbox_out[1U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [1U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0U];
    }
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (1U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [1U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [1U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [4U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [5U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [6U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [6U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [7U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x200U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [7U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [8U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [8U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [9U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [9U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (8U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0xdU]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xeU] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xfU] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3f7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3effU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3dffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3bffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x37ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x2fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x1000U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0x14U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x1fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0x15U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (2U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [1U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [1U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [4U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [5U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [6U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [6U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [7U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [7U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [8U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x400U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [8U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [9U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [9U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xdU] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0xeU]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xfU] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3f7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3effU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3dffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3bffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x37ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x2fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0x14U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x1fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x2000U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0x15U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0U] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [1U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [1U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (4U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [2U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [4U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [5U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [6U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [6U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [7U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [7U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [8U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [8U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [9U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x800U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [9U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0xdU] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20U & vlSelf->ascon_top__DOT__mux_sbox_out
                         [0xfU]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3f7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3effU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3dffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3bffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x37ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x2fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0x14U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x1fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [0x15U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U][0U] 
        = (IData)((0xfffffffffffULL & ((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                         [0U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [0U][0U]))) 
                                       ^ (((QData)((IData)(
                                                           (0x3fffffU 
                                                            & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [0U][0U]))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            (0x3fffffU 
                                                             & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                 [0U][3U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                   [0U][2U] 
                                                                   >> 0x18U)))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U][1U] 
        = (((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                 [0U][2U] << 0x14U) | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [0U][1U] >> 0xcU))) 
            << 0xcU) | (IData)(((0xfffffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [0U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                [0U][0U]))) 
                                  ^ (((QData)((IData)(
                                                      (0x3fffffU 
                                                       & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [0U][0U]))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                       [0U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                         [0U][2U] 
                                                                         >> 0x18U)))))))) 
                                >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U][2U] 
        = ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | ((0xfffffcU & ((0xfffffffcU 
                                        & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                        [0U][2U]) ^ 
                                       ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [0U][2U] << 0x16U) 
                                        | (0x3ffffcU 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                              [0U][1U] 
                                              >> 0xaU))))) 
                         | (3U & ((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [0U][2U] << 0x14U) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [0U][1U] >> 0xcU))) 
                                  >> 0x14U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U][3U] 
        = (0x3fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
           [0U][3U]);
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U][0U] 
        = (IData)((0xfffffffffffULL & ((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                         [1U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [1U][0U]))) 
                                       ^ (((QData)((IData)(
                                                           (0x3fffffU 
                                                            & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [1U][0U]))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            (0x3fffffU 
                                                             & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                 [1U][3U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                   [1U][2U] 
                                                                   >> 0x18U)))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U][1U] 
        = (((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                 [1U][2U] << 0x14U) | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [1U][1U] >> 0xcU))) 
            << 0xcU) | (IData)(((0xfffffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [1U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                [1U][0U]))) 
                                  ^ (((QData)((IData)(
                                                      (0x3fffffU 
                                                       & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [1U][0U]))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                       [1U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                         [1U][2U] 
                                                                         >> 0x18U)))))))) 
                                >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U][2U] 
        = ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | ((0xfffffcU & ((0xfffffffcU 
                                        & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                        [1U][2U]) ^ 
                                       ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [1U][2U] << 0x16U) 
                                        | (0x3ffffcU 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                              [1U][1U] 
                                              >> 0xaU))))) 
                         | (3U & ((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [1U][2U] << 0x14U) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [1U][1U] >> 0xcU))) 
                                  >> 0x14U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U][3U] 
        = (0x3fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
           [1U][3U]);
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U][0U] 
        = (IData)((0xfffffffffffULL & ((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                         [2U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [2U][0U]))) 
                                       ^ (((QData)((IData)(
                                                           (0x3fffffU 
                                                            & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [2U][0U]))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            (0x3fffffU 
                                                             & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                 [2U][3U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                   [2U][2U] 
                                                                   >> 0x18U)))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U][1U] 
        = (((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                 [2U][2U] << 0x14U) | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [2U][1U] >> 0xcU))) 
            << 0xcU) | (IData)(((0xfffffffffffULL & 
                                 ((((QData)((IData)(
                                                    vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [2U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                [2U][0U]))) 
                                  ^ (((QData)((IData)(
                                                      (0x3fffffU 
                                                       & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [2U][0U]))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                       [2U][3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                                         [2U][2U] 
                                                                         >> 0x18U)))))))) 
                                >> 0x20U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U][2U] 
        = ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | ((0xfffffcU & ((0xfffffffcU 
                                        & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                        [2U][2U]) ^ 
                                       ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [2U][2U] << 0x16U) 
                                        | (0x3ffffcU 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                              [2U][1U] 
                                              >> 0xaU))))) 
                         | (3U & ((~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [2U][2U] << 0x14U) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [2U][1U] >> 0xcU))) 
                                  >> 0x14U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U][3U] 
        = (0x3fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
           [2U][3U]);
    ascon_top__DOT____Vlvbound322[0U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U][0U];
    ascon_top__DOT____Vlvbound322[1U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U][1U];
    ascon_top__DOT____Vlvbound322[2U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U][2U];
    ascon_top__DOT____Vlvbound322[3U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U][3U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U][0U] 
        = ascon_top__DOT____Vlvbound322[0U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U][1U] 
        = ascon_top__DOT____Vlvbound322[1U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U][2U] 
        = ascon_top__DOT____Vlvbound322[2U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U][3U] 
        = ascon_top__DOT____Vlvbound322[3U];
    ascon_top__DOT____Vlvbound322[0U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U][0U];
    ascon_top__DOT____Vlvbound322[1U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U][1U];
    ascon_top__DOT____Vlvbound322[2U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U][2U];
    ascon_top__DOT____Vlvbound322[3U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U][3U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U][0U] 
        = ascon_top__DOT____Vlvbound322[0U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U][1U] 
        = ascon_top__DOT____Vlvbound322[1U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U][2U] 
        = ascon_top__DOT____Vlvbound322[2U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U][3U] 
        = ascon_top__DOT____Vlvbound322[3U];
    ascon_top__DOT____Vlvbound322[0U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U][0U];
    ascon_top__DOT____Vlvbound322[1U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U][1U];
    ascon_top__DOT____Vlvbound322[2U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U][2U];
    ascon_top__DOT____Vlvbound322[3U] = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U][3U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U][0U] 
        = ascon_top__DOT____Vlvbound322[0U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U][1U] 
        = ascon_top__DOT____Vlvbound322[1U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U][2U] 
        = ascon_top__DOT____Vlvbound322[2U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U][3U] 
        = ascon_top__DOT____Vlvbound322[3U];
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][0U] 
        = ((0xffc00000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][0U]) | (0x3fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [0U][0U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][0U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][0U]) | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U][0U] << 0x16U));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][1U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][1U]) | (0xfffU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [1U][0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][1U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][1U]) | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [2U][0U] << 0xcU));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][2U] 
        = ((0xffc00000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][2U]) | (0x3fffffU & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                       [0U][1U] << 0xaU) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U][0U] >> 0x16U))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][2U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][2U]) | (0xffc00000U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U][0U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][3U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][3U]) | (0xfffU & vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U][1U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][3U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][3U]) | (0xfffff000U & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U][1U] << 0x16U) 
                                        | (0x3ff000U 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U][0U] 
                                              >> 0xaU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][4U] 
        = ((0xffc00000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][4U]) | (0x3fffffU & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                       [0U][2U] << 0x14U) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U][1U] >> 0xcU))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][4U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][4U]) | (0xffc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [1U][1U] << 0xaU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][5U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][5U]) | (0xfffU & ((0x3ffc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                                 [1U][2U] 
                                                 << 0xaU)) 
                                   | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                      [1U][1U] >> 0x16U))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][5U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][5U]) | (0xfffff000U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [2U][1U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][6U] 
        = ((0xffc00000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][6U]) | (0x3fffffU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                      [0U][2U] >> 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][6U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][6U]) | (0xffc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [1U][2U] << 0x14U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][7U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][7U]) | (0xfffU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [1U][2U] >> 0xcU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][7U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][7U]) | (0xfffff000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [2U][2U] << 0xaU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][8U] 
        = ((0xffc00000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][8U]) | (0x3fffffU & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                       [0U][3U] << 8U) 
                                      | (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U][2U] >> 0x18U))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][8U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][8U]) | (0xffc00000U & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [1U][3U] << 0x1eU) 
                                        | (0x3fc00000U 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [1U][2U] 
                                              >> 2U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][9U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][9U]) | (0xfffU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [1U][3U] >> 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U][9U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][9U]) | (0xfffff000U & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U][3U] << 0x14U) 
                                        | (0xff000U 
                                           & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U][2U] 
                                              >> 0xcU)))));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U][0U]))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U][0U]))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [1U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U][0U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [1U][1U] 
                                           << 0xaU) 
                                          | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [1U][0U] 
                                             >> 0x16U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [1U][1U] 
                                             << 0xaU) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U][0U] 
                                               >> 0x16U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [1U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U][2U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U][1U] >> 0xcU))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [1U][2U] 
                                             << 0x14U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U][1U] 
                                               >> 0xcU))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [1U][5U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U][4U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                          [1U][2U] 
                                          >> 2U)))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                            [1U][2U] 
                                            >> 2U)))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [1U][7U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U][6U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [1U][3U] 
                                           << 8U) | 
                                          (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [1U][2U] 
                                           >> 0x18U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [1U][3U] 
                                             << 8U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U][2U] 
                                               >> 0x18U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [1U][9U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U][8U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U][0U]))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U][0U]))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [0U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [2U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U][0U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [2U][1U] 
                                           << 0xaU) 
                                          | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [2U][0U] 
                                             >> 0x16U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [2U][1U] 
                                             << 0xaU) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U][0U] 
                                               >> 0x16U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [2U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U][2U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U][1U] >> 0xcU))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [2U][2U] 
                                             << 0x14U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U][1U] 
                                               >> 0xcU))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [2U][5U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U][4U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                          [2U][2U] 
                                          >> 2U)))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                            [2U][2U] 
                                            >> 2U)))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [2U][7U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U][6U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [2U][3U] 
                                           << 8U) | 
                                          (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                           [2U][2U] 
                                           >> 0x18U))))) 
                        << 0x2cU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x14U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                             [2U][3U] 
                                             << 8U) 
                                            | (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U][2U] 
                                               >> 0x18U))))) 
                        << 0x2aU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 0x16U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                    [2U][9U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U][8U])));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        }
    }
}
