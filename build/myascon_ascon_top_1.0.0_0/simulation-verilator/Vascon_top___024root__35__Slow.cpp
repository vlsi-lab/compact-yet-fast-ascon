// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__37(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__37\n"); );
    // Body
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

void Vascon_top___024root___settle__TOP__38(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__38\n"); );
    // Variables
    VlWide<4>/*109:0*/ ascon_top__DOT____Vlvbound322;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
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

void Vascon_top___024root___initial__TOP__1(Vascon_top___024root* vlSelf) VL_ATTR_COLD;

void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_initial\n"); );
    // Body
    Vascon_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
    vlSelf->__Vclklast__TOP__reset_n_lfsr = vlSelf->reset_n_lfsr;
}

void Vascon_top___024root___settle__TOP__2(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__3(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__4(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__5(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__6(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__7(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__8(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__9(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__10(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__11(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__12(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__13(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__14(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__15(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__16(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__17(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__18(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__19(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__20(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__21(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__22(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__23(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__24(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__25(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__26(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__27(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__28(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__29(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__30(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__31(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__32(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__33(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__34(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__35(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__36(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__2(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__3(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__4(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__5(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__6(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__7(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__8(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__9(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__10(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__11(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__12(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__13(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__14(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__15(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__16(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__17(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__18(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__19(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__20(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__21(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;
void Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__22(Vascon_top_ascon_sbox_d2* vlSelf) VL_ATTR_COLD;

void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_settle\n"); );
    // Body
    Vascon_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vascon_top___024root___settle__TOP__3(vlSelf);
    Vascon_top___024root___settle__TOP__4(vlSelf);
    Vascon_top___024root___settle__TOP__5(vlSelf);
    Vascon_top___024root___settle__TOP__6(vlSelf);
    Vascon_top___024root___settle__TOP__7(vlSelf);
    Vascon_top___024root___settle__TOP__8(vlSelf);
    Vascon_top___024root___settle__TOP__9(vlSelf);
    Vascon_top___024root___settle__TOP__10(vlSelf);
    Vascon_top___024root___settle__TOP__11(vlSelf);
    Vascon_top___024root___settle__TOP__12(vlSelf);
    Vascon_top___024root___settle__TOP__13(vlSelf);
    Vascon_top___024root___settle__TOP__14(vlSelf);
    Vascon_top___024root___settle__TOP__15(vlSelf);
    Vascon_top___024root___settle__TOP__16(vlSelf);
    Vascon_top___024root___settle__TOP__17(vlSelf);
    Vascon_top___024root___settle__TOP__18(vlSelf);
    Vascon_top___024root___settle__TOP__19(vlSelf);
    Vascon_top___024root___settle__TOP__20(vlSelf);
    Vascon_top___024root___settle__TOP__21(vlSelf);
    Vascon_top___024root___settle__TOP__22(vlSelf);
    Vascon_top___024root___settle__TOP__23(vlSelf);
    Vascon_top___024root___settle__TOP__24(vlSelf);
    Vascon_top___024root___settle__TOP__25(vlSelf);
    Vascon_top___024root___settle__TOP__26(vlSelf);
    Vascon_top___024root___settle__TOP__27(vlSelf);
    Vascon_top___024root___settle__TOP__28(vlSelf);
    Vascon_top___024root___settle__TOP__29(vlSelf);
    Vascon_top___024root___settle__TOP__30(vlSelf);
    Vascon_top___024root___settle__TOP__31(vlSelf);
    Vascon_top___024root___settle__TOP__32(vlSelf);
    Vascon_top___024root___settle__TOP__33(vlSelf);
    Vascon_top___024root___settle__TOP__34(vlSelf);
    Vascon_top___024root___settle__TOP__35(vlSelf);
    Vascon_top___024root___settle__TOP__36(vlSelf);
    Vascon_top___024root___settle__TOP__37(vlSelf);
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__2((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__3((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__4((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__5((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__6((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__7((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__8((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__9((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__10((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__11((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__12((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__13((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__14((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__15((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__16((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__17((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__18((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__19((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__20((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__21((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
    Vascon_top_ascon_sbox_d2___settle__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__22((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
    Vascon_top___024root___settle__TOP__38(vlSelf);
}

void Vascon_top___024root___final(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___final\n"); );
}

void Vascon_top___024root___ctor_var_reset(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->reset_n_lfsr = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->key1 = VL_RAND_RESET_Q(64);
    vlSelf->key2 = VL_RAND_RESET_Q(64);
    vlSelf->load_data = VL_RAND_RESET_I(1);
    vlSelf->nonce1 = VL_RAND_RESET_Q(64);
    vlSelf->nonce2 = VL_RAND_RESET_Q(64);
    vlSelf->initialVector = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->data_in);
    vlSelf->valid_data_in = VL_RAND_RESET_I(1);
    vlSelf->last_block = VL_RAND_RESET_I(1);
    vlSelf->valid_bytes = VL_RAND_RESET_I(5);
    vlSelf->EOT = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->state_reg_out);
    vlSelf->ciphertext_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ciphertext);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ready_tag = VL_RAND_RESET_I(1);
    vlSelf->tag1 = VL_RAND_RESET_Q(64);
    vlSelf->tag2 = VL_RAND_RESET_Q(64);
    vlSelf->ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->read_data = VL_RAND_RESET_I(1);
    vlSelf->debug_extra_padding_ff = VL_RAND_RESET_I(1);
    vlSelf->debug_bitcounter = VL_RAND_RESET_I(3);
    vlSelf->debug_roundcounter = VL_RAND_RESET_I(4);
    vlSelf->debug_state = VL_RAND_RESET_I(5);
    vlSelf->debug_state_0 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_1 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_2 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_4 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_0 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_1 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_2 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_4 = VL_RAND_RESET_Q(64);
    vlSelf->debug_sbox_nomasked_0 = VL_RAND_RESET_Q(64);
    vlSelf->debug_sbox_nomasked_1 = VL_RAND_RESET_Q(64);
    vlSelf->debug_sbox_nomasked_2 = VL_RAND_RESET_Q(64);
    vlSelf->debug_sbox_nomasked_3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_sbox_nomasked_4 = VL_RAND_RESET_Q(64);
    vlSelf->debug_linear_diffusion_state3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_linear_diffusion_state4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(223, vlSelf->ascon_top__DOT__lfsr_out);
    vlSelf->ascon_top__DOT__lfsr_state_in = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__lfsr_state_out = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__extra_padding_ff = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_en = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_type = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__last_cycle = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__reg_key1_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__reg_key2_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_init_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_masked_round = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_padding = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_xor_signal = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_absorb_data = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__round_counter = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__shift_enable_sipo = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__last_cycle_sipo = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_in_shares[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_out_shares[__Vi0]);
    }
    VL_RAND_RESET_W(66, vlSelf->ascon_top__DOT__mux_1st_x0);
    VL_RAND_RESET_W(66, vlSelf->ascon_top__DOT__mux_1st_x1);
    VL_RAND_RESET_W(66, vlSelf->ascon_top__DOT__mux_1st_x2);
    VL_RAND_RESET_W(66, vlSelf->ascon_top__DOT__mux_1st_x3);
    VL_RAND_RESET_W(66, vlSelf->ascon_top__DOT__mux_1st_x4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ascon_top__DOT__rc_block[__Vi0] = VL_RAND_RESET_I(22);
    }
    VL_RAND_RESET_W(330, vlSelf->ascon_top__DOT__shares_out);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__affine_layer_in[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__affine_layer_out[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->ascon_top__DOT__next_sbox_input[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_input[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output_unmasked[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<22; ++__Vi0) {
        vlSelf->ascon_top__DOT__mux_sbox_out[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__affine_layer2nd_in[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__affine_layer2nd_out[__Vi0]);
    }
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__recombine_shares_sbox);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg_in_absorb[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__linear_diffusion_out);
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__data_in_padded);
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__reverse_reg_data_out);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__linear_diffusion_debug[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__recombine_shares);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1);
    vlSelf->ascon_top__DOT__mux_logic__BRA__0__KET____DOT__unnamedblk1__DOT__rc_block_temp = VL_RAND_RESET_I(22);
    vlSelf->ascon_top__DOT__mux_logic__BRA__1__KET____DOT__unnamedblk1__DOT__rc_block_temp = VL_RAND_RESET_I(22);
    vlSelf->ascon_top__DOT__mux_logic__BRA__2__KET____DOT__unnamedblk1__DOT__rc_block_temp = VL_RAND_RESET_I(22);
    vlSelf->ascon_top__DOT__unnamedblk2__DOT__p = 0;
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits_sbox = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT____Vlvbound323 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound324 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound325 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(254, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4 = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(223, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = VL_RAND_RESET_I(3);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(110, vlSelf->ascon_top__DOT__share_creator__DOT__temp);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound6 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound6 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__N = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__in = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__N = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__51__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__52__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__53__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__54__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__55__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__56__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__57__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__58__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__59__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__60__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__61__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__62__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__63__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__64__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__65__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__66__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__67__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__68__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__69__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__70__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__71__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__72__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__73__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__74__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__75__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__76__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__77__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__78__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__79__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__80__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__81__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__82__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__83__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__84__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__85__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__86__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__87__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__88__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__89__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__90__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__91__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__92__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__93__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__94__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__95__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__96__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__97__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__98__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__99__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__100__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__101__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__101__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__102__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__103__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__104__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__105__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__106__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__107__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__108__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__108__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__109__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__109__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__110__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__110__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__111__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__111__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__112__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__112__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__113__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__113__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__114__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__114__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__115__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__115__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__116__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__116__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__117__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__117__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__118__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__118__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__119__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__119__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__120__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__120__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__121__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__121__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__122__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__122__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__123__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__123__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__124__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__124__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__125__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__125__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__126__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__126__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__127__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__127__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__128__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__128__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__129__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__129__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__130__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__130__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__131__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__131__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__132__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__132__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__133__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__133__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__134__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__134__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__135__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__135__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__136__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__136__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__137__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__137__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__138__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__138__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__139__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__139__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__140__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__140__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__141__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__141__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__142__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__142__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__143__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__143__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__144__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__144__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__145__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__145__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__146__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__146__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__147__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__147__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__148__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__148__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__149__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__149__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__150__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__150__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__151__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__151__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__152__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__152__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__153__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__153__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__154__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__154__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__155__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__155__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__156__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__156__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__157__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__157__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__158__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__158__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__159__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__159__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__160__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__160__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__161__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__161__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__162__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__162__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__163__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__163__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__164__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__164__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__165__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__165__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__166__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__166__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__167__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__167__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__168__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__168__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__168__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__169__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__169__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__169__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__170__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__170__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__171__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__171__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__172__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__172__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__173__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__173__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__174__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__174__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__175__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__175__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__176__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__176__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__177__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__177__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__178__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__178__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__179__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__179__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__180__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__180__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__181__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__181__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__182__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__182__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__183__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__183__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__184__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__184__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__185__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__185__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__186__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__186__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__187__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__187__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__188__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__188__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__189__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__189__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__190__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__190__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__191__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__191__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__192__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__192__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__193__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__193__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__194__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__194__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__195__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__195__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__196__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__196__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__197__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__197__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__198__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__198__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__199__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__199__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__200__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__200__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__201__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__201__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__202__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__202__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__203__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__203__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__204__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__204__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__205__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__205__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__206__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__206__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__207__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__207__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__208__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__208__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__209__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__209__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__210__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__210__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__211__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__211__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__212__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__212__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__213__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__213__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__214__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__214__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__215__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__215__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__216__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__216__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__217__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__217__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__218__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__218__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__219__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__219__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__220__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__220__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__221__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__221__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__222__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__222__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__223__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__223__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__224__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__224__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__225__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__225__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__226__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__226__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__227__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__227__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__228__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__228__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__228__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__229__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__229__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__229__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__230__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__230__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__231__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__231__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__232__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__232__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__233__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__233__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__234__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__234__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__235__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__235__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__236__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__236__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__237__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__237__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__238__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__238__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__239__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__239__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__240__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__240__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__241__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__241__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__242__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__242__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__243__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__243__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__244__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__244__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__245__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__245__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__246__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__246__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__247__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__247__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__248__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__248__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__249__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__249__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__250__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__250__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__251__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__251__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__252__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__252__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__253__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__253__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__254__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__254__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__255__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__255__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__256__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__256__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__257__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__257__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__258__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__258__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__259__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__259__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__260__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__260__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__261__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__261__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__262__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__262__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__263__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__263__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__264__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__264__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__265__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__265__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__266__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__266__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__267__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__267__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__268__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__268__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__269__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__269__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__270__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__270__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__271__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__271__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__272__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__272__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__273__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__273__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__274__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__274__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__275__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__275__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__276__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__276__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__277__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__277__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__278__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__278__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__279__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__279__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__280__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__280__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__281__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__281__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__282__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__282__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__283__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__283__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__284__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__284__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__285__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__285__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__286__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__286__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__287__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__287__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__288__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__288__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__288__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__289__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__289__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__289__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__290__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__290__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__291__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__291__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__292__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__292__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__293__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__293__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__294__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__294__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__295__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__295__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__296__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__296__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__297__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__297__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__298__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__298__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__299__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__299__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__300__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__300__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__301__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__301__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__302__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__302__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__303__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__303__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__304__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__304__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__305__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__305__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__306__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__306__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__307__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__307__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__308__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__308__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__309__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__309__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__310__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__310__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__311__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__311__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__312__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__312__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__313__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__313__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__314__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__314__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__315__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__315__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__316__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__316__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__317__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__317__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__318__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__318__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__319__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__319__unnamedblk8__DOT__i = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__322__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__322__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__323__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__323__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__324__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__324__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__325__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__325__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__326__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__326__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__327__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__327__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__328__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__328__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__329__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__329__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__330__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__330__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__331__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__331__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__332__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__332__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__333__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__333__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__334__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__334__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__335__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__335__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__336__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__336__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__337__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__337__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__338__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__338__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__339__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__339__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__340__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__340__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__341__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__341__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__342__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__342__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__343__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__343__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__344__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__344__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__345__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__345__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__346__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__346__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__347__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__347__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__348__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__348__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__349__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__349__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__350__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__350__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__350__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__351__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__351__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__351__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__352__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__352__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__353__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__353__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__354__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__354__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__355__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__355__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__356__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__356__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__357__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__357__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__358__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__358__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__359__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__359__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__360__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__360__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__361__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__361__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__362__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__362__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__363__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__363__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__364__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__364__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__365__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__365__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__366__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__366__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__367__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__367__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__368__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__368__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__369__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__369__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__370__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__370__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__371__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__371__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__372__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__372__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__373__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__373__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__374__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__374__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__375__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__375__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__376__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__376__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__377__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__377__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__378__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__378__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__379__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__379__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__380__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__380__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__381__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__381__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__382__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__382__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__383__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__383__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__384__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__384__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__385__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__385__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__386__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__386__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__387__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__387__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__388__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__388__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__389__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__389__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__390__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__390__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__391__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__391__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__392__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__392__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__393__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__393__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__394__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__394__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__395__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__395__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__396__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__396__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__397__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__397__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__398__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__398__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__399__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__399__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__400__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__400__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__401__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__401__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__402__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__402__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__403__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__403__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__404__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__404__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__405__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__405__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__406__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__406__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__407__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__407__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__408__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__408__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__409__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__409__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__410__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__410__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__410__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__411__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__411__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__411__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__412__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__412__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__413__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__413__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__414__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__414__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__415__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__415__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__416__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__416__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__417__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__417__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__418__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__418__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__419__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__419__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__420__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__420__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__421__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__421__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__422__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__422__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__423__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__423__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__424__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__424__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__425__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__425__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__426__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__426__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__427__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__427__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__428__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__428__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__429__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__429__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__430__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__430__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__431__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__431__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__432__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__432__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__433__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__433__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__434__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__434__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__435__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__435__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__436__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__436__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__437__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__437__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__438__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__438__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__439__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__439__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__440__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__440__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__441__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__441__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__442__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__442__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__443__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__443__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__444__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__444__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__445__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__445__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__446__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__446__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__447__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__447__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__448__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__448__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__449__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__449__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__450__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__450__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__451__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__451__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__452__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__452__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__453__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__453__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__454__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__454__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__455__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__455__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__456__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__456__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__457__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__457__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__458__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__458__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__459__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__459__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__460__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__460__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__461__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__461__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__462__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__462__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__463__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__463__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__464__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__464__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__465__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__465__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__466__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__466__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__467__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__467__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__468__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__468__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__469__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__469__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__470__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__470__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__470__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__471__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__471__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__471__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__472__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__472__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__473__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__473__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__474__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__474__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__475__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__475__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__476__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__476__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__477__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__477__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__478__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__478__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__479__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__479__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__480__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__480__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__481__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__481__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__482__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__482__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__483__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__483__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__484__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__484__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__485__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__485__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__486__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__486__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__487__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__487__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__488__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__488__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__489__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__489__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__490__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__490__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__491__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__491__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__492__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__492__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__493__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__493__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__494__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__494__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__495__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__495__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__496__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__496__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__497__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__497__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__498__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__498__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__499__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__499__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__500__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__500__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__501__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__501__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__502__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__502__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__503__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__503__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__504__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__504__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__505__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__505__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__506__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__506__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__507__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__507__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__508__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__508__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__509__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__509__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__510__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__510__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__511__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__511__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__512__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__512__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__513__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__513__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__514__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__514__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__515__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__515__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__516__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__516__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__517__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__517__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__518__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__518__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__519__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__519__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__520__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__520__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__521__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__521__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__522__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__522__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__523__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__523__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__524__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__524__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__525__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__525__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__526__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__526__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__527__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__527__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__528__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__528__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__529__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__529__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__530__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__530__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__530__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__531__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__531__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__531__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__532__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__532__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__533__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__533__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__534__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__534__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__535__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__535__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__536__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__536__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__537__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__537__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__538__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__538__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__539__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__539__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__540__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__540__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__541__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__541__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__542__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__542__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__543__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__543__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__544__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__544__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__545__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__545__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__546__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__546__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__547__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__547__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__548__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__548__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__549__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__549__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__550__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__550__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__551__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__551__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__552__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__552__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__553__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__553__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__554__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__554__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__555__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__555__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__556__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__556__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__557__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__557__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__558__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__558__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__559__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__559__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__560__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__560__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__561__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__561__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__562__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__562__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__563__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__563__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__564__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__564__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__565__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__565__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__566__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__566__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__567__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__567__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__568__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__568__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__569__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__569__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__570__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__570__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__571__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__571__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__572__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__572__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__573__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__573__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__574__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__574__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__575__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__575__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__576__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__576__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__577__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__577__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__578__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__578__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__579__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__579__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__580__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__580__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__581__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__581__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__582__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__582__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__583__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__583__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__584__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__584__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__585__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__585__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__586__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__586__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__587__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__587__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__588__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__588__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__589__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__589__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__590__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__590__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__590__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__591__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__591__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__591__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__592__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__592__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__593__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__593__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__594__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__594__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__595__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__595__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__596__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__596__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__597__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__597__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__598__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__598__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__717__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__717__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__717__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__717__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__731__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__731__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__731__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__731__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__745__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__745__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__745__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__745__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__759__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__759__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__759__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__759__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__773__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__773__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__773__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__773__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__787__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__787__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__787__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__787__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__801__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__801__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__801__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__801__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__815__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__815__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__815__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__815__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__829__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__829__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__829__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__829__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__843__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__843__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__843__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__843__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__857__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__857__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__857__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__857__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__871__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__871__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__871__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__871__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__885__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__885__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__885__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__885__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__899__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__899__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__899__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__899__data_val);
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<223; ++__Vi0) {
        VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(223, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__913__data_val);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
