// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


void Vascon_top___024root__traceInitSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vascon_top___024root__traceInitTop(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vascon_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vascon_top___024root__traceInitSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5087,"clk", false,-1);
        tracep->declBit(c+5088,"reset_n", false,-1);
        tracep->declBit(c+5089,"reset_n_lfsr", false,-1);
        tracep->declBit(c+5090,"start", false,-1);
        tracep->declQuad(c+5091,"key1", false,-1, 63,0);
        tracep->declQuad(c+5093,"key2", false,-1, 63,0);
        tracep->declBit(c+5095,"load_data", false,-1);
        tracep->declQuad(c+5096,"nonce1", false,-1, 63,0);
        tracep->declQuad(c+5098,"nonce2", false,-1, 63,0);
        tracep->declQuad(c+5100,"initialVector", false,-1, 63,0);
        tracep->declArray(c+5102,"data_in", false,-1, 127,0);
        tracep->declBit(c+5106,"valid_data_in", false,-1);
        tracep->declBit(c+5107,"last_block", false,-1);
        tracep->declBus(c+5108,"valid_bytes", false,-1, 4,0);
        tracep->declBit(c+5109,"EOT", false,-1);
        tracep->declArray(c+5110,"state_reg_out", false,-1, 319,0);
        tracep->declBit(c+5120,"ciphertext_valid", false,-1);
        tracep->declArray(c+5121,"ciphertext", false,-1, 127,0);
        tracep->declBit(c+5125,"done", false,-1);
        tracep->declBit(c+5126,"ready_tag", false,-1);
        tracep->declQuad(c+5127,"tag1", false,-1, 63,0);
        tracep->declQuad(c+5129,"tag2", false,-1, 63,0);
        tracep->declBit(c+5131,"ready_for_data", false,-1);
        tracep->declBit(c+5132,"read_data", false,-1);
        tracep->declBit(c+5133,"debug_extra_padding_ff", false,-1);
        tracep->declBus(c+5134,"debug_bitcounter", false,-1, 2,0);
        tracep->declBus(c+5135,"debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+5136,"debug_state", false,-1, 4,0);
        tracep->declQuad(c+5137,"debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+5139,"debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+5141,"debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+5143,"debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+5145,"debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+5147,"debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+5149,"debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+5151,"debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+5153,"debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+5155,"debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+5157,"debug_sbox_nomasked_0", false,-1, 63,0);
        tracep->declQuad(c+5159,"debug_sbox_nomasked_1", false,-1, 63,0);
        tracep->declQuad(c+5161,"debug_sbox_nomasked_2", false,-1, 63,0);
        tracep->declQuad(c+5163,"debug_sbox_nomasked_3", false,-1, 63,0);
        tracep->declQuad(c+5165,"debug_sbox_nomasked_4", false,-1, 63,0);
        tracep->declQuad(c+5167,"debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+5169,"debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top clk", false,-1);
        tracep->declBit(c+5088,"ascon_top reset_n", false,-1);
        tracep->declBit(c+5089,"ascon_top reset_n_lfsr", false,-1);
        tracep->declBit(c+5090,"ascon_top start", false,-1);
        tracep->declQuad(c+5091,"ascon_top key1", false,-1, 63,0);
        tracep->declQuad(c+5093,"ascon_top key2", false,-1, 63,0);
        tracep->declBit(c+5095,"ascon_top load_data", false,-1);
        tracep->declQuad(c+5096,"ascon_top nonce1", false,-1, 63,0);
        tracep->declQuad(c+5098,"ascon_top nonce2", false,-1, 63,0);
        tracep->declQuad(c+5100,"ascon_top initialVector", false,-1, 63,0);
        tracep->declArray(c+5102,"ascon_top data_in", false,-1, 127,0);
        tracep->declBit(c+5106,"ascon_top valid_data_in", false,-1);
        tracep->declBit(c+5107,"ascon_top last_block", false,-1);
        tracep->declBus(c+5108,"ascon_top valid_bytes", false,-1, 4,0);
        tracep->declBit(c+5109,"ascon_top EOT", false,-1);
        tracep->declArray(c+5110,"ascon_top state_reg_out", false,-1, 319,0);
        tracep->declBit(c+5120,"ascon_top ciphertext_valid", false,-1);
        tracep->declArray(c+5121,"ascon_top ciphertext", false,-1, 127,0);
        tracep->declBit(c+5125,"ascon_top done", false,-1);
        tracep->declBit(c+5126,"ascon_top ready_tag", false,-1);
        tracep->declQuad(c+5127,"ascon_top tag1", false,-1, 63,0);
        tracep->declQuad(c+5129,"ascon_top tag2", false,-1, 63,0);
        tracep->declBit(c+5131,"ascon_top ready_for_data", false,-1);
        tracep->declBit(c+5132,"ascon_top read_data", false,-1);
        tracep->declBit(c+5133,"ascon_top debug_extra_padding_ff", false,-1);
        tracep->declBus(c+5134,"ascon_top debug_bitcounter", false,-1, 2,0);
        tracep->declBus(c+5135,"ascon_top debug_roundcounter", false,-1, 3,0);
        tracep->declBus(c+5136,"ascon_top debug_state", false,-1, 4,0);
        tracep->declQuad(c+5137,"ascon_top debug_state_0", false,-1, 63,0);
        tracep->declQuad(c+5139,"ascon_top debug_state_1", false,-1, 63,0);
        tracep->declQuad(c+5141,"ascon_top debug_state_2", false,-1, 63,0);
        tracep->declQuad(c+5143,"ascon_top debug_state_3", false,-1, 63,0);
        tracep->declQuad(c+5145,"ascon_top debug_state_4", false,-1, 63,0);
        tracep->declQuad(c+5147,"ascon_top debug_round_state_0", false,-1, 63,0);
        tracep->declQuad(c+5149,"ascon_top debug_round_state_1", false,-1, 63,0);
        tracep->declQuad(c+5151,"ascon_top debug_round_state_2", false,-1, 63,0);
        tracep->declQuad(c+5153,"ascon_top debug_round_state_3", false,-1, 63,0);
        tracep->declQuad(c+5155,"ascon_top debug_round_state_4", false,-1, 63,0);
        tracep->declQuad(c+5157,"ascon_top debug_sbox_nomasked_0", false,-1, 63,0);
        tracep->declQuad(c+5159,"ascon_top debug_sbox_nomasked_1", false,-1, 63,0);
        tracep->declQuad(c+5161,"ascon_top debug_sbox_nomasked_2", false,-1, 63,0);
        tracep->declQuad(c+5163,"ascon_top debug_sbox_nomasked_3", false,-1, 63,0);
        tracep->declQuad(c+5165,"ascon_top debug_sbox_nomasked_4", false,-1, 63,0);
        tracep->declQuad(c+5167,"ascon_top debug_linear_diffusion_state3", false,-1, 63,0);
        tracep->declQuad(c+5169,"ascon_top debug_linear_diffusion_state4", false,-1, 63,0);
        tracep->declArray(c+3003,"ascon_top lfsr_out", false,-1, 222,0);
        tracep->declBus(c+3010,"ascon_top lfsr_state_in", false,-1, 30,0);
        tracep->declBus(c+3011,"ascon_top lfsr_state_out", false,-1, 30,0);
        tracep->declArray(c+3012,"ascon_top random_masks", false,-1, 219,0);
        tracep->declBus(c+3019,"ascon_top random_masks_sbox", false,-1, 2,0);
        tracep->declBit(c+2043,"ascon_top extra_padding_ff", false,-1);
        tracep->declBit(c+2044,"ascon_top shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top shift_type", false,-1);
        tracep->declBit(c+4211,"ascon_top write_en", false,-1);
        tracep->declBit(c+2046,"ascon_top last_cycle", false,-1);
        tracep->declBit(c+2047,"ascon_top reg_key1_load", false,-1);
        tracep->declBit(c+2048,"ascon_top reg_key2_load", false,-1);
        tracep->declBit(c+2049,"ascon_top sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+4212,"ascon_top sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+4213,"ascon_top sel_init_load", false,-1);
        tracep->declBit(c+2050,"ascon_top sel_masked_round", false,-1);
        tracep->declBit(c+4214,"ascon_top sel_padding", false,-1);
        tracep->declBit(c+2051,"ascon_top sel_xor_signal", false,-1);
        tracep->declBit(c+4215,"ascon_top sel_absorb_data", false,-1);
        tracep->declBus(c+2052,"ascon_top round_counter", false,-1, 3,0);
        tracep->declBus(c+2053,"ascon_top bit_counter", false,-1, 2,0);
        tracep->declBit(c+2054,"ascon_top shift_enable_sipo", false,-1);
        tracep->declBit(c+2055,"ascon_top last_cycle_sipo", false,-1);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4216+i*10,"ascon_top state_reg_in_shares", true,(i+0), 319,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+2056+i*10,"ascon_top state_reg_out_shiftdplus1_shares", true,(i+0), 319,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4362+i*10,"ascon_top state_reg_in_shiftdplus1_shares", true,(i+0), 319,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4392+i*4,"ascon_top state_reg_in_shift1_shares", true,(i+0), 109,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+2086+i*10,"ascon_top state_reg_out_shares", true,(i+0), 319,0);}}
        tracep->declQuad(c+2116,"ascon_top reg_key1_out", false,-1, 63,0);
        tracep->declQuad(c+2118,"ascon_top reg_key2_out", false,-1, 63,0);
        tracep->declQuad(c+2120,"ascon_top round_x0_debug", false,-1, 63,0);
        tracep->declQuad(c+2122,"ascon_top round_x1_debug", false,-1, 63,0);
        tracep->declQuad(c+2124,"ascon_top round_x2_debug", false,-1, 63,0);
        tracep->declQuad(c+2126,"ascon_top round_x3_debug", false,-1, 63,0);
        tracep->declQuad(c+2128,"ascon_top round_x4_debug", false,-1, 63,0);
        tracep->declQuad(c+2130,"ascon_top state_reg_out_x0", false,-1, 63,0);
        tracep->declQuad(c+2132,"ascon_top state_reg_out_x1", false,-1, 63,0);
        tracep->declQuad(c+2134,"ascon_top state_reg_out_x2", false,-1, 63,0);
        tracep->declQuad(c+2136,"ascon_top state_reg_out_x3", false,-1, 63,0);
        tracep->declQuad(c+2138,"ascon_top state_reg_out_x4", false,-1, 63,0);
        tracep->declArray(c+2140,"ascon_top mux_1st_x0", false,-1, 65,0);
        tracep->declArray(c+2143,"ascon_top mux_1st_x1", false,-1, 65,0);
        tracep->declArray(c+2146,"ascon_top mux_1st_x2", false,-1, 65,0);
        tracep->declArray(c+2149,"ascon_top mux_1st_x3", false,-1, 65,0);
        tracep->declArray(c+2152,"ascon_top mux_1st_x4", false,-1, 65,0);
        tracep->declQuad(c+2155,"ascon_top round_constant_full", false,-1, 63,0);
        tracep->declBus(c+5203,"ascon_top RC_PADDED_WIDTH", false,-1, 31,0);
        tracep->declArray(c+2157,"ascon_top round_constant_padded", false,-1, 65,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+2160+i*1,"ascon_top rc_block", true,(i+0), 21,0);}}
        tracep->declArray(c+4301,"ascon_top shares_out", false,-1, 329,0);
        tracep->declArray(c+2163,"ascon_top shares_in", false,-1, 109,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4312+i*4,"ascon_top affine_layer_in", true,(i+0), 109,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4324+i*4,"ascon_top affine_layer_out", true,(i+0), 109,0);}}
        {int i; for (i=0; i<22; i++) {
                tracep->declBus(c+4336+i*1,"ascon_top next_sbox_input", true,(i+0), 14,0);}}
        {int i; for (i=0; i<22; i++) {
                tracep->declBus(c+3528+i*1,"ascon_top sbox_input", true,(i+0), 14,0);}}
        {int i; for (i=0; i<22; i++) {
                tracep->declBus(c+3550+i*1,"ascon_top sbox_output", true,(i+0), 14,0);}}
        {int i; for (i=0; i<22; i++) {
                tracep->declBus(c+4404+i*1,"ascon_top sbox_output_unmasked", true,(i+0), 14,0);}}
        {int i; for (i=0; i<22; i++) {
                tracep->declBus(c+4426+i*1,"ascon_top mux_sbox_out", true,(i+0), 14,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4448+i*4,"ascon_top affine_layer2nd_in", true,(i+0), 109,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+4460+i*4,"ascon_top affine_layer2nd_out", true,(i+0), 109,0);}}
        tracep->declArray(c+2167,"ascon_top recombine_shares_sbox", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+2981+i*2,"ascon_top state_reg_in_absorb", true,(i+0), 63,0);}}
        tracep->declArray(c+5171,"ascon_top init_data", false,-1, 319,0);
        tracep->declArray(c+2177,"ascon_top linear_diffusion_out", false,-1, 319,0);
        tracep->declArray(c+4246,"ascon_top data_in_padded", false,-1, 127,0);
        tracep->declArray(c+4250,"ascon_top reverse_reg_data_out", false,-1, 127,0);
        tracep->declArray(c+2991,"ascon_top input_state", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1+i*1,"ascon_top rotations_a", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+6+i*1,"ascon_top rotations_b", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+2187+i*2,"ascon_top linear_diffusion_debug", true,(i+0), 63,0);}}
        tracep->declArray(c+2197,"ascon_top recombine_shares", false,-1, 319,0);
        tracep->declQuad(c+3001,"ascon_top mux_linear_diffusion_out_x4", false,-1, 63,0);
        tracep->declQuad(c+2207,"ascon_top mux_linear_diffusion_out_x3", false,-1, 63,0);
        tracep->declQuad(c+2209,"ascon_top xor_signal", false,-1, 63,0);
        tracep->declBit(c+5204,"ascon_top gen_state_regs[0] write_en_i", false,-1);
        tracep->declBit(c+5205,"ascon_top gen_state_regs[1] write_en_i", false,-1);
        tracep->declBit(c+5205,"ascon_top gen_state_regs[2] write_en_i", false,-1);
        tracep->declBus(c+5206,"ascon_top mux_logic[0] BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+5207,"ascon_top mux_logic[0] BIT_COUNTER_MAX", false,-1, 2,0);
        tracep->declBus(c+2211,"ascon_top mux_logic[0] unnamedblk1 rc_block_temp", false,-1, 21,0);
        tracep->declBus(c+5206,"ascon_top mux_logic[1] BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+5207,"ascon_top mux_logic[1] BIT_COUNTER_MAX", false,-1, 2,0);
        tracep->declBus(c+2212,"ascon_top mux_logic[1] unnamedblk1 rc_block_temp", false,-1, 21,0);
        tracep->declBus(c+5206,"ascon_top mux_logic[2] BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+5207,"ascon_top mux_logic[2] BIT_COUNTER_MAX", false,-1, 2,0);
        tracep->declBus(c+2213,"ascon_top mux_logic[2] unnamedblk1 rc_block_temp", false,-1, 21,0);
        tracep->declBus(c+5208,"ascon_top mux_logic[2] gen_padded gen_last LAST_PAR_USED", false,-1, 31,0);
        tracep->declBus(c+3572,"ascon_top unnamedblk2 p", false,-1, 31,0);
        tracep->declBus(c+5181,"ascon_top gen_cog gen_sbox[0] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5182,"ascon_top gen_cog gen_sbox[1] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5183,"ascon_top gen_cog gen_sbox[2] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5184,"ascon_top gen_cog gen_sbox[3] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5185,"ascon_top gen_cog gen_sbox[4] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5186,"ascon_top gen_cog gen_sbox[5] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5187,"ascon_top gen_cog gen_sbox[6] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5188,"ascon_top gen_cog gen_sbox[7] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5189,"ascon_top gen_cog gen_sbox[8] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5190,"ascon_top gen_cog gen_sbox[9] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5191,"ascon_top gen_cog gen_sbox[10] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5192,"ascon_top gen_cog gen_sbox[11] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5193,"ascon_top gen_cog gen_sbox[12] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5194,"ascon_top gen_cog gen_sbox[13] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5195,"ascon_top gen_cog gen_sbox[14] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5196,"ascon_top gen_cog gen_sbox[15] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5197,"ascon_top gen_cog gen_sbox[16] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5198,"ascon_top gen_cog gen_sbox[17] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5199,"ascon_top gen_cog gen_sbox[18] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5200,"ascon_top gen_cog gen_sbox[19] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5201,"ascon_top gen_cog gen_sbox[20] fresh_r", false,-1, 2,0);
        tracep->declBus(c+5202,"ascon_top gen_cog gen_sbox[21] fresh_r", false,-1, 2,0);
        tracep->declBus(c+4472,"ascon_top affine_layer[0] affine_layer2nd_in_temp", false,-1, 21,0);
        tracep->declBus(c+4473,"ascon_top affine_layer[1] affine_layer2nd_in_temp", false,-1, 21,0);
        tracep->declBus(c+4474,"ascon_top affine_layer[2] affine_layer2nd_in_temp", false,-1, 21,0);
        tracep->declBus(c+2214,"ascon_top recombine[0] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[0] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2215,"ascon_top recombine[1] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[1] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2216,"ascon_top recombine[2] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[2] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2217,"ascon_top recombine[3] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[3] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2218,"ascon_top recombine[4] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[4] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2219,"ascon_top recombine[5] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[5] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2220,"ascon_top recombine[6] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[6] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2221,"ascon_top recombine[7] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[7] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2222,"ascon_top recombine[8] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[8] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2223,"ascon_top recombine[9] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[9] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2224,"ascon_top recombine[10] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[10] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2225,"ascon_top recombine[11] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[11] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2226,"ascon_top recombine[12] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[12] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2227,"ascon_top recombine[13] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[13] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2228,"ascon_top recombine[14] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[14] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2229,"ascon_top recombine[15] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[15] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2230,"ascon_top recombine[16] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[16] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2231,"ascon_top recombine[17] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[17] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2232,"ascon_top recombine[18] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[18] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2233,"ascon_top recombine[19] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[19] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2234,"ascon_top recombine[20] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[20] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2235,"ascon_top recombine[21] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[21] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2236,"ascon_top recombine[22] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[22] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2237,"ascon_top recombine[23] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[23] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2238,"ascon_top recombine[24] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[24] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2239,"ascon_top recombine[25] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[25] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2240,"ascon_top recombine[26] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[26] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2241,"ascon_top recombine[27] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[27] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2242,"ascon_top recombine[28] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[28] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2243,"ascon_top recombine[29] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[29] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2244,"ascon_top recombine[30] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[30] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2245,"ascon_top recombine[31] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[31] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2246,"ascon_top recombine[32] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[32] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2247,"ascon_top recombine[33] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[33] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2248,"ascon_top recombine[34] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[34] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2249,"ascon_top recombine[35] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[35] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2250,"ascon_top recombine[36] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[36] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2251,"ascon_top recombine[37] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[37] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2252,"ascon_top recombine[38] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[38] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2253,"ascon_top recombine[39] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[39] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2254,"ascon_top recombine[40] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[40] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2255,"ascon_top recombine[41] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[41] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2256,"ascon_top recombine[42] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[42] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2257,"ascon_top recombine[43] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[43] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2258,"ascon_top recombine[44] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[44] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2259,"ascon_top recombine[45] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[45] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2260,"ascon_top recombine[46] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[46] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2261,"ascon_top recombine[47] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[47] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2262,"ascon_top recombine[48] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[48] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2263,"ascon_top recombine[49] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[49] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2264,"ascon_top recombine[50] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[50] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2265,"ascon_top recombine[51] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[51] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2266,"ascon_top recombine[52] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[52] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2267,"ascon_top recombine[53] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[53] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2268,"ascon_top recombine[54] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[54] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2269,"ascon_top recombine[55] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[55] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2270,"ascon_top recombine[56] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[56] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2271,"ascon_top recombine[57] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[57] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2272,"ascon_top recombine[58] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[58] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2273,"ascon_top recombine[59] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[59] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2274,"ascon_top recombine[60] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[60] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2275,"ascon_top recombine[61] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[61] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2276,"ascon_top recombine[62] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[62] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2277,"ascon_top recombine[63] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[63] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2278,"ascon_top recombine[64] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[64] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2279,"ascon_top recombine[65] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[65] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2280,"ascon_top recombine[66] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[66] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2281,"ascon_top recombine[67] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[67] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2282,"ascon_top recombine[68] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[68] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2283,"ascon_top recombine[69] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[69] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2284,"ascon_top recombine[70] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[70] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2285,"ascon_top recombine[71] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[71] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2286,"ascon_top recombine[72] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[72] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2287,"ascon_top recombine[73] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[73] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2288,"ascon_top recombine[74] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[74] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2289,"ascon_top recombine[75] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[75] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2290,"ascon_top recombine[76] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[76] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2291,"ascon_top recombine[77] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[77] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2292,"ascon_top recombine[78] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[78] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2293,"ascon_top recombine[79] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[79] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2294,"ascon_top recombine[80] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[80] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2295,"ascon_top recombine[81] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[81] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2296,"ascon_top recombine[82] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[82] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2297,"ascon_top recombine[83] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[83] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2298,"ascon_top recombine[84] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[84] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2299,"ascon_top recombine[85] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[85] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2300,"ascon_top recombine[86] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[86] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2301,"ascon_top recombine[87] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[87] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2302,"ascon_top recombine[88] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[88] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2303,"ascon_top recombine[89] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[89] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2304,"ascon_top recombine[90] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[90] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2305,"ascon_top recombine[91] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[91] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2306,"ascon_top recombine[92] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[92] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2307,"ascon_top recombine[93] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[93] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2308,"ascon_top recombine[94] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[94] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2309,"ascon_top recombine[95] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[95] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2310,"ascon_top recombine[96] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[96] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2311,"ascon_top recombine[97] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[97] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2312,"ascon_top recombine[98] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[98] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2313,"ascon_top recombine[99] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[99] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2314,"ascon_top recombine[100] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[100] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2315,"ascon_top recombine[101] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[101] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2316,"ascon_top recombine[102] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[102] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2317,"ascon_top recombine[103] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[103] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2318,"ascon_top recombine[104] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[104] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2319,"ascon_top recombine[105] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[105] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2320,"ascon_top recombine[106] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[106] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2321,"ascon_top recombine[107] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[107] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2322,"ascon_top recombine[108] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[108] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2323,"ascon_top recombine[109] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[109] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2324,"ascon_top recombine[110] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[110] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2325,"ascon_top recombine[111] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[111] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2326,"ascon_top recombine[112] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[112] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2327,"ascon_top recombine[113] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[113] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2328,"ascon_top recombine[114] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[114] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2329,"ascon_top recombine[115] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[115] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2330,"ascon_top recombine[116] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[116] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2331,"ascon_top recombine[117] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[117] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2332,"ascon_top recombine[118] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[118] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2333,"ascon_top recombine[119] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[119] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2334,"ascon_top recombine[120] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[120] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2335,"ascon_top recombine[121] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[121] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2336,"ascon_top recombine[122] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[122] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2337,"ascon_top recombine[123] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[123] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2338,"ascon_top recombine[124] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[124] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2339,"ascon_top recombine[125] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[125] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2340,"ascon_top recombine[126] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[126] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2341,"ascon_top recombine[127] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[127] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2342,"ascon_top recombine[128] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[128] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2343,"ascon_top recombine[129] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[129] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2344,"ascon_top recombine[130] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[130] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2345,"ascon_top recombine[131] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[131] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2346,"ascon_top recombine[132] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[132] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2347,"ascon_top recombine[133] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[133] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2348,"ascon_top recombine[134] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[134] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2349,"ascon_top recombine[135] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[135] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2350,"ascon_top recombine[136] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[136] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2351,"ascon_top recombine[137] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[137] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2352,"ascon_top recombine[138] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[138] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2353,"ascon_top recombine[139] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[139] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2354,"ascon_top recombine[140] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[140] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2355,"ascon_top recombine[141] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[141] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2356,"ascon_top recombine[142] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[142] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2357,"ascon_top recombine[143] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[143] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2358,"ascon_top recombine[144] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[144] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2359,"ascon_top recombine[145] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[145] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2360,"ascon_top recombine[146] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[146] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2361,"ascon_top recombine[147] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[147] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2362,"ascon_top recombine[148] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[148] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2363,"ascon_top recombine[149] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[149] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2364,"ascon_top recombine[150] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[150] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2365,"ascon_top recombine[151] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[151] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2366,"ascon_top recombine[152] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[152] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2367,"ascon_top recombine[153] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[153] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2368,"ascon_top recombine[154] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[154] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2369,"ascon_top recombine[155] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[155] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2370,"ascon_top recombine[156] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[156] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2371,"ascon_top recombine[157] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[157] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2372,"ascon_top recombine[158] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[158] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2373,"ascon_top recombine[159] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[159] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2374,"ascon_top recombine[160] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[160] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2375,"ascon_top recombine[161] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[161] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2376,"ascon_top recombine[162] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[162] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2377,"ascon_top recombine[163] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[163] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2378,"ascon_top recombine[164] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[164] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2379,"ascon_top recombine[165] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[165] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2380,"ascon_top recombine[166] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[166] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2381,"ascon_top recombine[167] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[167] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2382,"ascon_top recombine[168] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[168] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2383,"ascon_top recombine[169] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[169] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2384,"ascon_top recombine[170] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[170] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2385,"ascon_top recombine[171] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[171] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2386,"ascon_top recombine[172] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[172] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2387,"ascon_top recombine[173] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[173] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2388,"ascon_top recombine[174] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[174] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2389,"ascon_top recombine[175] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[175] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2390,"ascon_top recombine[176] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[176] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2391,"ascon_top recombine[177] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[177] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2392,"ascon_top recombine[178] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[178] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2393,"ascon_top recombine[179] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[179] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2394,"ascon_top recombine[180] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[180] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2395,"ascon_top recombine[181] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[181] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2396,"ascon_top recombine[182] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[182] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2397,"ascon_top recombine[183] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[183] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2398,"ascon_top recombine[184] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[184] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2399,"ascon_top recombine[185] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[185] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2400,"ascon_top recombine[186] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[186] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2401,"ascon_top recombine[187] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[187] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2402,"ascon_top recombine[188] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[188] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2403,"ascon_top recombine[189] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[189] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2404,"ascon_top recombine[190] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[190] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2405,"ascon_top recombine[191] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[191] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2406,"ascon_top recombine[192] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[192] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2407,"ascon_top recombine[193] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[193] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2408,"ascon_top recombine[194] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[194] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2409,"ascon_top recombine[195] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[195] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2410,"ascon_top recombine[196] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[196] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2411,"ascon_top recombine[197] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[197] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2412,"ascon_top recombine[198] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[198] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2413,"ascon_top recombine[199] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[199] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2414,"ascon_top recombine[200] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[200] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2415,"ascon_top recombine[201] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[201] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2416,"ascon_top recombine[202] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[202] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2417,"ascon_top recombine[203] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[203] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2418,"ascon_top recombine[204] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[204] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2419,"ascon_top recombine[205] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[205] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2420,"ascon_top recombine[206] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[206] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2421,"ascon_top recombine[207] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[207] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2422,"ascon_top recombine[208] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[208] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2423,"ascon_top recombine[209] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[209] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2424,"ascon_top recombine[210] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[210] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2425,"ascon_top recombine[211] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[211] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2426,"ascon_top recombine[212] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[212] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2427,"ascon_top recombine[213] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[213] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2428,"ascon_top recombine[214] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[214] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2429,"ascon_top recombine[215] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[215] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2430,"ascon_top recombine[216] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[216] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2431,"ascon_top recombine[217] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[217] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2432,"ascon_top recombine[218] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[218] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2433,"ascon_top recombine[219] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[219] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2434,"ascon_top recombine[220] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[220] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2435,"ascon_top recombine[221] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[221] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2436,"ascon_top recombine[222] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[222] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2437,"ascon_top recombine[223] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[223] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2438,"ascon_top recombine[224] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[224] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2439,"ascon_top recombine[225] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[225] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2440,"ascon_top recombine[226] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[226] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2441,"ascon_top recombine[227] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[227] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2442,"ascon_top recombine[228] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[228] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2443,"ascon_top recombine[229] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[229] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2444,"ascon_top recombine[230] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[230] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2445,"ascon_top recombine[231] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[231] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2446,"ascon_top recombine[232] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[232] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2447,"ascon_top recombine[233] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[233] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2448,"ascon_top recombine[234] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[234] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2449,"ascon_top recombine[235] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[235] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2450,"ascon_top recombine[236] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[236] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2451,"ascon_top recombine[237] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[237] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2452,"ascon_top recombine[238] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[238] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2453,"ascon_top recombine[239] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[239] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2454,"ascon_top recombine[240] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[240] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2455,"ascon_top recombine[241] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[241] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2456,"ascon_top recombine[242] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[242] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2457,"ascon_top recombine[243] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[243] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2458,"ascon_top recombine[244] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[244] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2459,"ascon_top recombine[245] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[245] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2460,"ascon_top recombine[246] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[246] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2461,"ascon_top recombine[247] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[247] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2462,"ascon_top recombine[248] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[248] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2463,"ascon_top recombine[249] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[249] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2464,"ascon_top recombine[250] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[250] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2465,"ascon_top recombine[251] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[251] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2466,"ascon_top recombine[252] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[252] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2467,"ascon_top recombine[253] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[253] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2468,"ascon_top recombine[254] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[254] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2469,"ascon_top recombine[255] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[255] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2470,"ascon_top recombine[256] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[256] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2471,"ascon_top recombine[257] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[257] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2472,"ascon_top recombine[258] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[258] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2473,"ascon_top recombine[259] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[259] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2474,"ascon_top recombine[260] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[260] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2475,"ascon_top recombine[261] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[261] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2476,"ascon_top recombine[262] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[262] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2477,"ascon_top recombine[263] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[263] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2478,"ascon_top recombine[264] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[264] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2479,"ascon_top recombine[265] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[265] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2480,"ascon_top recombine[266] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[266] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2481,"ascon_top recombine[267] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[267] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2482,"ascon_top recombine[268] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[268] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2483,"ascon_top recombine[269] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[269] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2484,"ascon_top recombine[270] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[270] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2485,"ascon_top recombine[271] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[271] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2486,"ascon_top recombine[272] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[272] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2487,"ascon_top recombine[273] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[273] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2488,"ascon_top recombine[274] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[274] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2489,"ascon_top recombine[275] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[275] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2490,"ascon_top recombine[276] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[276] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2491,"ascon_top recombine[277] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[277] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2492,"ascon_top recombine[278] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[278] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2493,"ascon_top recombine[279] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[279] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2494,"ascon_top recombine[280] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[280] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2495,"ascon_top recombine[281] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[281] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2496,"ascon_top recombine[282] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[282] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2497,"ascon_top recombine[283] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[283] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2498,"ascon_top recombine[284] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[284] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2499,"ascon_top recombine[285] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[285] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2500,"ascon_top recombine[286] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[286] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2501,"ascon_top recombine[287] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[287] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2502,"ascon_top recombine[288] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[288] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2503,"ascon_top recombine[289] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[289] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2504,"ascon_top recombine[290] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[290] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2505,"ascon_top recombine[291] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[291] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2506,"ascon_top recombine[292] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[292] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2507,"ascon_top recombine[293] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[293] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2508,"ascon_top recombine[294] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[294] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2509,"ascon_top recombine[295] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[295] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2510,"ascon_top recombine[296] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[296] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2511,"ascon_top recombine[297] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[297] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2512,"ascon_top recombine[298] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[298] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2513,"ascon_top recombine[299] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[299] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2514,"ascon_top recombine[300] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[300] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2515,"ascon_top recombine[301] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[301] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2516,"ascon_top recombine[302] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[302] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2517,"ascon_top recombine[303] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[303] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2518,"ascon_top recombine[304] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[304] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2519,"ascon_top recombine[305] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[305] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2520,"ascon_top recombine[306] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[306] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2521,"ascon_top recombine[307] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[307] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2522,"ascon_top recombine[308] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[308] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2523,"ascon_top recombine[309] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[309] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2524,"ascon_top recombine[310] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[310] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2525,"ascon_top recombine[311] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[311] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2526,"ascon_top recombine[312] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[312] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2527,"ascon_top recombine[313] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[313] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2528,"ascon_top recombine[314] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[314] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2529,"ascon_top recombine[315] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[315] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2530,"ascon_top recombine[316] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[316] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2531,"ascon_top recombine[317] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[317] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2532,"ascon_top recombine[318] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[318] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+2533,"ascon_top recombine[319] temp_bits_sbox", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[319] unnamedblk3 st_reg_sbox", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top unnamedblk4 st", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_top gen_truncate pack_affine_trunc[0] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_top gen_truncate pack_affine_trunc[1] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_top gen_truncate pack_affine_trunc[2] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_top gen_truncate pack_affine_trunc[3] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[0] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[1] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_top gen_truncate pack_affine_trunc[4] pack_affine_trunc_int[2] active_bits USED_BITS", false,-1, 31,0);
        tracep->declBus(c+4254,"ascon_top unnamedblk5 i", false,-1, 31,0);
        tracep->declBus(c+2534,"ascon_top recombine[0] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[0] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2535,"ascon_top recombine[1] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[1] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2536,"ascon_top recombine[2] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[2] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2537,"ascon_top recombine[3] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[3] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2538,"ascon_top recombine[4] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[4] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2539,"ascon_top recombine[5] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[5] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2540,"ascon_top recombine[6] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[6] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2541,"ascon_top recombine[7] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[7] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2542,"ascon_top recombine[8] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[8] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2543,"ascon_top recombine[9] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[9] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2544,"ascon_top recombine[10] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[10] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2545,"ascon_top recombine[11] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[11] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2546,"ascon_top recombine[12] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[12] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2547,"ascon_top recombine[13] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[13] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2548,"ascon_top recombine[14] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[14] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2549,"ascon_top recombine[15] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[15] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2550,"ascon_top recombine[16] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[16] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2551,"ascon_top recombine[17] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[17] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2552,"ascon_top recombine[18] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[18] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2553,"ascon_top recombine[19] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[19] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2554,"ascon_top recombine[20] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[20] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2555,"ascon_top recombine[21] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[21] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2556,"ascon_top recombine[22] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[22] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2557,"ascon_top recombine[23] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[23] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2558,"ascon_top recombine[24] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[24] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2559,"ascon_top recombine[25] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[25] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2560,"ascon_top recombine[26] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[26] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2561,"ascon_top recombine[27] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[27] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2562,"ascon_top recombine[28] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[28] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2563,"ascon_top recombine[29] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[29] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2564,"ascon_top recombine[30] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[30] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2565,"ascon_top recombine[31] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[31] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2566,"ascon_top recombine[32] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[32] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2567,"ascon_top recombine[33] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[33] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2568,"ascon_top recombine[34] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[34] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2569,"ascon_top recombine[35] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[35] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2570,"ascon_top recombine[36] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[36] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2571,"ascon_top recombine[37] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[37] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2572,"ascon_top recombine[38] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[38] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2573,"ascon_top recombine[39] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[39] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2574,"ascon_top recombine[40] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[40] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2575,"ascon_top recombine[41] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[41] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2576,"ascon_top recombine[42] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[42] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2577,"ascon_top recombine[43] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[43] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2578,"ascon_top recombine[44] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[44] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2579,"ascon_top recombine[45] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[45] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2580,"ascon_top recombine[46] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[46] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2581,"ascon_top recombine[47] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[47] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2582,"ascon_top recombine[48] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[48] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2583,"ascon_top recombine[49] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[49] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2584,"ascon_top recombine[50] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[50] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2585,"ascon_top recombine[51] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[51] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2586,"ascon_top recombine[52] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[52] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2587,"ascon_top recombine[53] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[53] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2588,"ascon_top recombine[54] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[54] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2589,"ascon_top recombine[55] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[55] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2590,"ascon_top recombine[56] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[56] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2591,"ascon_top recombine[57] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[57] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2592,"ascon_top recombine[58] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[58] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2593,"ascon_top recombine[59] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[59] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2594,"ascon_top recombine[60] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[60] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2595,"ascon_top recombine[61] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[61] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2596,"ascon_top recombine[62] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[62] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2597,"ascon_top recombine[63] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[63] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2598,"ascon_top recombine[64] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[64] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2599,"ascon_top recombine[65] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[65] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2600,"ascon_top recombine[66] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[66] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2601,"ascon_top recombine[67] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[67] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2602,"ascon_top recombine[68] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[68] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2603,"ascon_top recombine[69] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[69] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2604,"ascon_top recombine[70] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[70] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2605,"ascon_top recombine[71] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[71] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2606,"ascon_top recombine[72] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[72] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2607,"ascon_top recombine[73] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[73] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2608,"ascon_top recombine[74] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[74] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2609,"ascon_top recombine[75] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[75] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2610,"ascon_top recombine[76] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[76] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2611,"ascon_top recombine[77] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[77] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2612,"ascon_top recombine[78] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[78] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2613,"ascon_top recombine[79] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[79] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2614,"ascon_top recombine[80] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[80] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2615,"ascon_top recombine[81] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[81] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2616,"ascon_top recombine[82] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[82] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2617,"ascon_top recombine[83] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[83] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2618,"ascon_top recombine[84] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[84] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2619,"ascon_top recombine[85] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[85] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2620,"ascon_top recombine[86] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[86] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2621,"ascon_top recombine[87] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[87] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2622,"ascon_top recombine[88] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[88] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2623,"ascon_top recombine[89] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[89] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2624,"ascon_top recombine[90] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[90] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2625,"ascon_top recombine[91] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[91] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2626,"ascon_top recombine[92] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[92] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2627,"ascon_top recombine[93] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[93] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2628,"ascon_top recombine[94] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[94] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2629,"ascon_top recombine[95] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[95] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2630,"ascon_top recombine[96] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[96] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2631,"ascon_top recombine[97] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[97] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2632,"ascon_top recombine[98] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[98] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2633,"ascon_top recombine[99] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[99] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2634,"ascon_top recombine[100] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[100] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2635,"ascon_top recombine[101] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[101] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2636,"ascon_top recombine[102] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[102] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2637,"ascon_top recombine[103] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[103] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2638,"ascon_top recombine[104] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[104] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2639,"ascon_top recombine[105] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[105] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2640,"ascon_top recombine[106] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[106] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2641,"ascon_top recombine[107] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[107] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2642,"ascon_top recombine[108] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[108] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2643,"ascon_top recombine[109] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[109] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2644,"ascon_top recombine[110] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[110] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2645,"ascon_top recombine[111] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[111] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2646,"ascon_top recombine[112] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[112] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2647,"ascon_top recombine[113] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[113] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2648,"ascon_top recombine[114] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[114] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2649,"ascon_top recombine[115] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[115] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2650,"ascon_top recombine[116] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[116] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2651,"ascon_top recombine[117] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[117] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2652,"ascon_top recombine[118] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[118] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2653,"ascon_top recombine[119] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[119] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2654,"ascon_top recombine[120] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[120] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2655,"ascon_top recombine[121] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[121] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2656,"ascon_top recombine[122] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[122] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2657,"ascon_top recombine[123] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[123] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2658,"ascon_top recombine[124] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[124] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2659,"ascon_top recombine[125] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[125] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2660,"ascon_top recombine[126] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[126] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2661,"ascon_top recombine[127] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[127] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2662,"ascon_top recombine[128] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[128] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2663,"ascon_top recombine[129] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[129] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2664,"ascon_top recombine[130] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[130] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2665,"ascon_top recombine[131] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[131] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2666,"ascon_top recombine[132] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[132] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2667,"ascon_top recombine[133] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[133] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2668,"ascon_top recombine[134] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[134] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2669,"ascon_top recombine[135] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[135] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2670,"ascon_top recombine[136] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[136] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2671,"ascon_top recombine[137] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[137] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2672,"ascon_top recombine[138] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[138] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2673,"ascon_top recombine[139] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[139] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2674,"ascon_top recombine[140] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[140] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2675,"ascon_top recombine[141] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[141] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2676,"ascon_top recombine[142] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[142] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2677,"ascon_top recombine[143] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[143] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2678,"ascon_top recombine[144] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[144] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2679,"ascon_top recombine[145] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[145] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2680,"ascon_top recombine[146] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[146] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2681,"ascon_top recombine[147] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[147] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2682,"ascon_top recombine[148] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[148] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2683,"ascon_top recombine[149] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[149] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2684,"ascon_top recombine[150] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[150] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2685,"ascon_top recombine[151] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[151] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2686,"ascon_top recombine[152] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[152] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2687,"ascon_top recombine[153] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[153] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2688,"ascon_top recombine[154] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[154] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2689,"ascon_top recombine[155] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[155] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2690,"ascon_top recombine[156] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[156] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2691,"ascon_top recombine[157] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[157] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2692,"ascon_top recombine[158] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[158] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2693,"ascon_top recombine[159] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[159] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2694,"ascon_top recombine[160] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[160] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2695,"ascon_top recombine[161] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[161] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2696,"ascon_top recombine[162] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[162] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2697,"ascon_top recombine[163] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[163] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2698,"ascon_top recombine[164] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[164] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2699,"ascon_top recombine[165] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[165] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2700,"ascon_top recombine[166] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[166] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2701,"ascon_top recombine[167] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[167] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2702,"ascon_top recombine[168] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[168] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2703,"ascon_top recombine[169] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[169] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2704,"ascon_top recombine[170] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[170] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2705,"ascon_top recombine[171] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[171] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2706,"ascon_top recombine[172] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[172] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2707,"ascon_top recombine[173] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[173] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2708,"ascon_top recombine[174] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[174] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2709,"ascon_top recombine[175] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[175] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2710,"ascon_top recombine[176] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[176] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2711,"ascon_top recombine[177] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[177] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2712,"ascon_top recombine[178] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[178] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2713,"ascon_top recombine[179] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[179] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2714,"ascon_top recombine[180] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[180] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2715,"ascon_top recombine[181] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[181] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2716,"ascon_top recombine[182] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[182] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2717,"ascon_top recombine[183] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[183] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2718,"ascon_top recombine[184] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[184] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2719,"ascon_top recombine[185] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[185] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2720,"ascon_top recombine[186] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[186] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2721,"ascon_top recombine[187] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[187] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2722,"ascon_top recombine[188] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[188] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2723,"ascon_top recombine[189] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[189] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2724,"ascon_top recombine[190] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[190] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2725,"ascon_top recombine[191] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[191] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2726,"ascon_top recombine[192] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[192] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2727,"ascon_top recombine[193] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[193] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2728,"ascon_top recombine[194] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[194] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2729,"ascon_top recombine[195] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[195] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2730,"ascon_top recombine[196] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[196] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2731,"ascon_top recombine[197] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[197] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2732,"ascon_top recombine[198] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[198] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2733,"ascon_top recombine[199] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[199] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2734,"ascon_top recombine[200] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[200] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2735,"ascon_top recombine[201] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[201] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2736,"ascon_top recombine[202] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[202] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2737,"ascon_top recombine[203] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[203] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2738,"ascon_top recombine[204] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[204] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2739,"ascon_top recombine[205] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[205] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2740,"ascon_top recombine[206] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[206] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2741,"ascon_top recombine[207] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[207] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2742,"ascon_top recombine[208] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[208] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2743,"ascon_top recombine[209] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[209] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2744,"ascon_top recombine[210] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[210] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2745,"ascon_top recombine[211] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[211] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2746,"ascon_top recombine[212] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[212] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2747,"ascon_top recombine[213] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[213] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2748,"ascon_top recombine[214] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[214] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2749,"ascon_top recombine[215] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[215] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2750,"ascon_top recombine[216] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[216] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2751,"ascon_top recombine[217] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[217] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2752,"ascon_top recombine[218] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[218] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2753,"ascon_top recombine[219] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[219] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2754,"ascon_top recombine[220] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[220] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2755,"ascon_top recombine[221] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[221] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2756,"ascon_top recombine[222] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[222] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2757,"ascon_top recombine[223] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[223] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2758,"ascon_top recombine[224] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[224] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2759,"ascon_top recombine[225] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[225] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2760,"ascon_top recombine[226] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[226] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2761,"ascon_top recombine[227] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[227] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2762,"ascon_top recombine[228] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[228] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2763,"ascon_top recombine[229] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[229] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2764,"ascon_top recombine[230] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[230] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2765,"ascon_top recombine[231] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[231] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2766,"ascon_top recombine[232] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[232] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2767,"ascon_top recombine[233] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[233] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2768,"ascon_top recombine[234] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[234] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2769,"ascon_top recombine[235] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[235] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2770,"ascon_top recombine[236] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[236] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2771,"ascon_top recombine[237] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[237] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2772,"ascon_top recombine[238] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[238] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2773,"ascon_top recombine[239] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[239] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2774,"ascon_top recombine[240] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[240] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2775,"ascon_top recombine[241] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[241] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2776,"ascon_top recombine[242] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[242] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2777,"ascon_top recombine[243] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[243] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2778,"ascon_top recombine[244] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[244] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2779,"ascon_top recombine[245] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[245] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2780,"ascon_top recombine[246] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[246] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2781,"ascon_top recombine[247] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[247] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2782,"ascon_top recombine[248] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[248] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2783,"ascon_top recombine[249] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[249] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2784,"ascon_top recombine[250] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[250] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2785,"ascon_top recombine[251] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[251] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2786,"ascon_top recombine[252] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[252] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2787,"ascon_top recombine[253] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[253] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2788,"ascon_top recombine[254] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[254] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2789,"ascon_top recombine[255] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[255] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2790,"ascon_top recombine[256] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[256] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2791,"ascon_top recombine[257] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[257] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2792,"ascon_top recombine[258] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[258] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2793,"ascon_top recombine[259] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[259] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2794,"ascon_top recombine[260] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[260] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2795,"ascon_top recombine[261] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[261] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2796,"ascon_top recombine[262] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[262] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2797,"ascon_top recombine[263] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[263] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2798,"ascon_top recombine[264] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[264] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2799,"ascon_top recombine[265] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[265] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2800,"ascon_top recombine[266] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[266] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2801,"ascon_top recombine[267] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[267] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2802,"ascon_top recombine[268] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[268] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2803,"ascon_top recombine[269] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[269] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2804,"ascon_top recombine[270] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[270] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2805,"ascon_top recombine[271] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[271] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2806,"ascon_top recombine[272] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[272] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2807,"ascon_top recombine[273] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[273] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2808,"ascon_top recombine[274] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[274] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2809,"ascon_top recombine[275] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[275] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2810,"ascon_top recombine[276] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[276] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2811,"ascon_top recombine[277] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[277] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2812,"ascon_top recombine[278] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[278] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2813,"ascon_top recombine[279] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[279] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2814,"ascon_top recombine[280] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[280] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2815,"ascon_top recombine[281] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[281] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2816,"ascon_top recombine[282] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[282] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2817,"ascon_top recombine[283] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[283] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2818,"ascon_top recombine[284] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[284] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2819,"ascon_top recombine[285] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[285] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2820,"ascon_top recombine[286] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[286] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2821,"ascon_top recombine[287] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[287] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2822,"ascon_top recombine[288] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[288] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2823,"ascon_top recombine[289] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[289] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2824,"ascon_top recombine[290] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[290] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2825,"ascon_top recombine[291] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[291] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2826,"ascon_top recombine[292] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[292] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2827,"ascon_top recombine[293] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[293] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2828,"ascon_top recombine[294] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[294] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2829,"ascon_top recombine[295] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[295] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2830,"ascon_top recombine[296] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[296] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2831,"ascon_top recombine[297] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[297] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2832,"ascon_top recombine[298] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[298] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2833,"ascon_top recombine[299] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[299] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2834,"ascon_top recombine[300] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[300] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2835,"ascon_top recombine[301] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[301] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2836,"ascon_top recombine[302] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[302] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2837,"ascon_top recombine[303] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[303] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2838,"ascon_top recombine[304] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[304] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2839,"ascon_top recombine[305] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[305] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2840,"ascon_top recombine[306] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[306] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2841,"ascon_top recombine[307] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[307] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2842,"ascon_top recombine[308] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[308] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2843,"ascon_top recombine[309] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[309] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2844,"ascon_top recombine[310] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[310] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2845,"ascon_top recombine[311] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[311] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2846,"ascon_top recombine[312] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[312] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2847,"ascon_top recombine[313] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[313] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2848,"ascon_top recombine[314] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[314] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2849,"ascon_top recombine[315] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[315] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2850,"ascon_top recombine[316] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[316] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2851,"ascon_top recombine[317] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[317] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2852,"ascon_top recombine[318] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[318] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declBus(c+2853,"ascon_top recombine[319] temp_bits", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top recombine[319] unnamedblk9 st_reg", false,-1, 31,0);
        tracep->declArray(c+5211,"ascon_top lfst_inst data_in", false,-1, 222,0);
        tracep->declBus(c+3010,"ascon_top lfst_inst state_in", false,-1, 30,0);
        tracep->declArray(c+3003,"ascon_top lfst_inst data_out", false,-1, 222,0);
        tracep->declBus(c+3011,"ascon_top lfst_inst state_out", false,-1, 30,0);
        tracep->declBus(c+5218,"ascon_top lfst_inst STYLE_INT", false,-1, 31,0);
        tracep->declArray(c+11,"ascon_top lfst_inst genblk1 lfsr_state[0] mask", false,-1, 253,0);
        tracep->declBit(c+3020,"ascon_top lfst_inst genblk1 lfsr_state[0] state_reg", false,-1);
        tracep->declBus(c+3021,"ascon_top lfst_inst genblk1 lfsr_state[0] i", false,-1, 31,0);
        tracep->declArray(c+19,"ascon_top lfst_inst genblk1 lfsr_state[1] mask", false,-1, 253,0);
        tracep->declBit(c+3022,"ascon_top lfst_inst genblk1 lfsr_state[1] state_reg", false,-1);
        tracep->declBus(c+3023,"ascon_top lfst_inst genblk1 lfsr_state[1] i", false,-1, 31,0);
        tracep->declArray(c+27,"ascon_top lfst_inst genblk1 lfsr_state[2] mask", false,-1, 253,0);
        tracep->declBit(c+3024,"ascon_top lfst_inst genblk1 lfsr_state[2] state_reg", false,-1);
        tracep->declBus(c+3025,"ascon_top lfst_inst genblk1 lfsr_state[2] i", false,-1, 31,0);
        tracep->declArray(c+35,"ascon_top lfst_inst genblk1 lfsr_state[3] mask", false,-1, 253,0);
        tracep->declBit(c+3026,"ascon_top lfst_inst genblk1 lfsr_state[3] state_reg", false,-1);
        tracep->declBus(c+3027,"ascon_top lfst_inst genblk1 lfsr_state[3] i", false,-1, 31,0);
        tracep->declArray(c+43,"ascon_top lfst_inst genblk1 lfsr_state[4] mask", false,-1, 253,0);
        tracep->declBit(c+3028,"ascon_top lfst_inst genblk1 lfsr_state[4] state_reg", false,-1);
        tracep->declBus(c+3029,"ascon_top lfst_inst genblk1 lfsr_state[4] i", false,-1, 31,0);
        tracep->declArray(c+51,"ascon_top lfst_inst genblk1 lfsr_state[5] mask", false,-1, 253,0);
        tracep->declBit(c+3030,"ascon_top lfst_inst genblk1 lfsr_state[5] state_reg", false,-1);
        tracep->declBus(c+3031,"ascon_top lfst_inst genblk1 lfsr_state[5] i", false,-1, 31,0);
        tracep->declArray(c+59,"ascon_top lfst_inst genblk1 lfsr_state[6] mask", false,-1, 253,0);
        tracep->declBit(c+3032,"ascon_top lfst_inst genblk1 lfsr_state[6] state_reg", false,-1);
        tracep->declBus(c+3033,"ascon_top lfst_inst genblk1 lfsr_state[6] i", false,-1, 31,0);
        tracep->declArray(c+67,"ascon_top lfst_inst genblk1 lfsr_state[7] mask", false,-1, 253,0);
        tracep->declBit(c+3034,"ascon_top lfst_inst genblk1 lfsr_state[7] state_reg", false,-1);
        tracep->declBus(c+3035,"ascon_top lfst_inst genblk1 lfsr_state[7] i", false,-1, 31,0);
        tracep->declArray(c+75,"ascon_top lfst_inst genblk1 lfsr_state[8] mask", false,-1, 253,0);
        tracep->declBit(c+3036,"ascon_top lfst_inst genblk1 lfsr_state[8] state_reg", false,-1);
        tracep->declBus(c+3037,"ascon_top lfst_inst genblk1 lfsr_state[8] i", false,-1, 31,0);
        tracep->declArray(c+83,"ascon_top lfst_inst genblk1 lfsr_state[9] mask", false,-1, 253,0);
        tracep->declBit(c+3038,"ascon_top lfst_inst genblk1 lfsr_state[9] state_reg", false,-1);
        tracep->declBus(c+3039,"ascon_top lfst_inst genblk1 lfsr_state[9] i", false,-1, 31,0);
        tracep->declArray(c+91,"ascon_top lfst_inst genblk1 lfsr_state[10] mask", false,-1, 253,0);
        tracep->declBit(c+3040,"ascon_top lfst_inst genblk1 lfsr_state[10] state_reg", false,-1);
        tracep->declBus(c+3041,"ascon_top lfst_inst genblk1 lfsr_state[10] i", false,-1, 31,0);
        tracep->declArray(c+99,"ascon_top lfst_inst genblk1 lfsr_state[11] mask", false,-1, 253,0);
        tracep->declBit(c+3042,"ascon_top lfst_inst genblk1 lfsr_state[11] state_reg", false,-1);
        tracep->declBus(c+3043,"ascon_top lfst_inst genblk1 lfsr_state[11] i", false,-1, 31,0);
        tracep->declArray(c+107,"ascon_top lfst_inst genblk1 lfsr_state[12] mask", false,-1, 253,0);
        tracep->declBit(c+3044,"ascon_top lfst_inst genblk1 lfsr_state[12] state_reg", false,-1);
        tracep->declBus(c+3045,"ascon_top lfst_inst genblk1 lfsr_state[12] i", false,-1, 31,0);
        tracep->declArray(c+115,"ascon_top lfst_inst genblk1 lfsr_state[13] mask", false,-1, 253,0);
        tracep->declBit(c+3046,"ascon_top lfst_inst genblk1 lfsr_state[13] state_reg", false,-1);
        tracep->declBus(c+3047,"ascon_top lfst_inst genblk1 lfsr_state[13] i", false,-1, 31,0);
        tracep->declArray(c+123,"ascon_top lfst_inst genblk1 lfsr_state[14] mask", false,-1, 253,0);
        tracep->declBit(c+3048,"ascon_top lfst_inst genblk1 lfsr_state[14] state_reg", false,-1);
        tracep->declBus(c+3049,"ascon_top lfst_inst genblk1 lfsr_state[14] i", false,-1, 31,0);
        tracep->declArray(c+131,"ascon_top lfst_inst genblk1 lfsr_state[15] mask", false,-1, 253,0);
        tracep->declBit(c+3050,"ascon_top lfst_inst genblk1 lfsr_state[15] state_reg", false,-1);
        tracep->declBus(c+3051,"ascon_top lfst_inst genblk1 lfsr_state[15] i", false,-1, 31,0);
        tracep->declArray(c+139,"ascon_top lfst_inst genblk1 lfsr_state[16] mask", false,-1, 253,0);
        tracep->declBit(c+3052,"ascon_top lfst_inst genblk1 lfsr_state[16] state_reg", false,-1);
        tracep->declBus(c+3053,"ascon_top lfst_inst genblk1 lfsr_state[16] i", false,-1, 31,0);
        tracep->declArray(c+147,"ascon_top lfst_inst genblk1 lfsr_state[17] mask", false,-1, 253,0);
        tracep->declBit(c+3054,"ascon_top lfst_inst genblk1 lfsr_state[17] state_reg", false,-1);
        tracep->declBus(c+3055,"ascon_top lfst_inst genblk1 lfsr_state[17] i", false,-1, 31,0);
        tracep->declArray(c+155,"ascon_top lfst_inst genblk1 lfsr_state[18] mask", false,-1, 253,0);
        tracep->declBit(c+3056,"ascon_top lfst_inst genblk1 lfsr_state[18] state_reg", false,-1);
        tracep->declBus(c+3057,"ascon_top lfst_inst genblk1 lfsr_state[18] i", false,-1, 31,0);
        tracep->declArray(c+163,"ascon_top lfst_inst genblk1 lfsr_state[19] mask", false,-1, 253,0);
        tracep->declBit(c+3058,"ascon_top lfst_inst genblk1 lfsr_state[19] state_reg", false,-1);
        tracep->declBus(c+3059,"ascon_top lfst_inst genblk1 lfsr_state[19] i", false,-1, 31,0);
        tracep->declArray(c+171,"ascon_top lfst_inst genblk1 lfsr_state[20] mask", false,-1, 253,0);
        tracep->declBit(c+3060,"ascon_top lfst_inst genblk1 lfsr_state[20] state_reg", false,-1);
        tracep->declBus(c+3061,"ascon_top lfst_inst genblk1 lfsr_state[20] i", false,-1, 31,0);
        tracep->declArray(c+179,"ascon_top lfst_inst genblk1 lfsr_state[21] mask", false,-1, 253,0);
        tracep->declBit(c+3062,"ascon_top lfst_inst genblk1 lfsr_state[21] state_reg", false,-1);
        tracep->declBus(c+3063,"ascon_top lfst_inst genblk1 lfsr_state[21] i", false,-1, 31,0);
        tracep->declArray(c+187,"ascon_top lfst_inst genblk1 lfsr_state[22] mask", false,-1, 253,0);
        tracep->declBit(c+3064,"ascon_top lfst_inst genblk1 lfsr_state[22] state_reg", false,-1);
        tracep->declBus(c+3065,"ascon_top lfst_inst genblk1 lfsr_state[22] i", false,-1, 31,0);
        tracep->declArray(c+195,"ascon_top lfst_inst genblk1 lfsr_state[23] mask", false,-1, 253,0);
        tracep->declBit(c+3066,"ascon_top lfst_inst genblk1 lfsr_state[23] state_reg", false,-1);
        tracep->declBus(c+3067,"ascon_top lfst_inst genblk1 lfsr_state[23] i", false,-1, 31,0);
        tracep->declArray(c+203,"ascon_top lfst_inst genblk1 lfsr_state[24] mask", false,-1, 253,0);
        tracep->declBit(c+3068,"ascon_top lfst_inst genblk1 lfsr_state[24] state_reg", false,-1);
        tracep->declBus(c+3069,"ascon_top lfst_inst genblk1 lfsr_state[24] i", false,-1, 31,0);
        tracep->declArray(c+211,"ascon_top lfst_inst genblk1 lfsr_state[25] mask", false,-1, 253,0);
        tracep->declBit(c+3070,"ascon_top lfst_inst genblk1 lfsr_state[25] state_reg", false,-1);
        tracep->declBus(c+3071,"ascon_top lfst_inst genblk1 lfsr_state[25] i", false,-1, 31,0);
        tracep->declArray(c+219,"ascon_top lfst_inst genblk1 lfsr_state[26] mask", false,-1, 253,0);
        tracep->declBit(c+3072,"ascon_top lfst_inst genblk1 lfsr_state[26] state_reg", false,-1);
        tracep->declBus(c+3073,"ascon_top lfst_inst genblk1 lfsr_state[26] i", false,-1, 31,0);
        tracep->declArray(c+227,"ascon_top lfst_inst genblk1 lfsr_state[27] mask", false,-1, 253,0);
        tracep->declBit(c+3074,"ascon_top lfst_inst genblk1 lfsr_state[27] state_reg", false,-1);
        tracep->declBus(c+3075,"ascon_top lfst_inst genblk1 lfsr_state[27] i", false,-1, 31,0);
        tracep->declArray(c+235,"ascon_top lfst_inst genblk1 lfsr_state[28] mask", false,-1, 253,0);
        tracep->declBit(c+3076,"ascon_top lfst_inst genblk1 lfsr_state[28] state_reg", false,-1);
        tracep->declBus(c+3077,"ascon_top lfst_inst genblk1 lfsr_state[28] i", false,-1, 31,0);
        tracep->declArray(c+243,"ascon_top lfst_inst genblk1 lfsr_state[29] mask", false,-1, 253,0);
        tracep->declBit(c+3078,"ascon_top lfst_inst genblk1 lfsr_state[29] state_reg", false,-1);
        tracep->declBus(c+3079,"ascon_top lfst_inst genblk1 lfsr_state[29] i", false,-1, 31,0);
        tracep->declArray(c+251,"ascon_top lfst_inst genblk1 lfsr_state[30] mask", false,-1, 253,0);
        tracep->declBit(c+3080,"ascon_top lfst_inst genblk1 lfsr_state[30] state_reg", false,-1);
        tracep->declBus(c+3081,"ascon_top lfst_inst genblk1 lfsr_state[30] i", false,-1, 31,0);
        tracep->declArray(c+259,"ascon_top lfst_inst genblk1 lfsr_data[0] mask", false,-1, 253,0);
        tracep->declBit(c+3082,"ascon_top lfst_inst genblk1 lfsr_data[0] data_reg", false,-1);
        tracep->declBus(c+3083,"ascon_top lfst_inst genblk1 lfsr_data[0] i", false,-1, 31,0);
        tracep->declArray(c+267,"ascon_top lfst_inst genblk1 lfsr_data[1] mask", false,-1, 253,0);
        tracep->declBit(c+3084,"ascon_top lfst_inst genblk1 lfsr_data[1] data_reg", false,-1);
        tracep->declBus(c+3085,"ascon_top lfst_inst genblk1 lfsr_data[1] i", false,-1, 31,0);
        tracep->declArray(c+275,"ascon_top lfst_inst genblk1 lfsr_data[2] mask", false,-1, 253,0);
        tracep->declBit(c+3086,"ascon_top lfst_inst genblk1 lfsr_data[2] data_reg", false,-1);
        tracep->declBus(c+3087,"ascon_top lfst_inst genblk1 lfsr_data[2] i", false,-1, 31,0);
        tracep->declArray(c+283,"ascon_top lfst_inst genblk1 lfsr_data[3] mask", false,-1, 253,0);
        tracep->declBit(c+3088,"ascon_top lfst_inst genblk1 lfsr_data[3] data_reg", false,-1);
        tracep->declBus(c+3089,"ascon_top lfst_inst genblk1 lfsr_data[3] i", false,-1, 31,0);
        tracep->declArray(c+291,"ascon_top lfst_inst genblk1 lfsr_data[4] mask", false,-1, 253,0);
        tracep->declBit(c+3090,"ascon_top lfst_inst genblk1 lfsr_data[4] data_reg", false,-1);
        tracep->declBus(c+3091,"ascon_top lfst_inst genblk1 lfsr_data[4] i", false,-1, 31,0);
        tracep->declArray(c+299,"ascon_top lfst_inst genblk1 lfsr_data[5] mask", false,-1, 253,0);
        tracep->declBit(c+3092,"ascon_top lfst_inst genblk1 lfsr_data[5] data_reg", false,-1);
        tracep->declBus(c+3093,"ascon_top lfst_inst genblk1 lfsr_data[5] i", false,-1, 31,0);
        tracep->declArray(c+307,"ascon_top lfst_inst genblk1 lfsr_data[6] mask", false,-1, 253,0);
        tracep->declBit(c+3094,"ascon_top lfst_inst genblk1 lfsr_data[6] data_reg", false,-1);
        tracep->declBus(c+3095,"ascon_top lfst_inst genblk1 lfsr_data[6] i", false,-1, 31,0);
        tracep->declArray(c+315,"ascon_top lfst_inst genblk1 lfsr_data[7] mask", false,-1, 253,0);
        tracep->declBit(c+3096,"ascon_top lfst_inst genblk1 lfsr_data[7] data_reg", false,-1);
        tracep->declBus(c+3097,"ascon_top lfst_inst genblk1 lfsr_data[7] i", false,-1, 31,0);
        tracep->declArray(c+323,"ascon_top lfst_inst genblk1 lfsr_data[8] mask", false,-1, 253,0);
        tracep->declBit(c+3098,"ascon_top lfst_inst genblk1 lfsr_data[8] data_reg", false,-1);
        tracep->declBus(c+3099,"ascon_top lfst_inst genblk1 lfsr_data[8] i", false,-1, 31,0);
        tracep->declArray(c+331,"ascon_top lfst_inst genblk1 lfsr_data[9] mask", false,-1, 253,0);
        tracep->declBit(c+3100,"ascon_top lfst_inst genblk1 lfsr_data[9] data_reg", false,-1);
        tracep->declBus(c+3101,"ascon_top lfst_inst genblk1 lfsr_data[9] i", false,-1, 31,0);
        tracep->declArray(c+339,"ascon_top lfst_inst genblk1 lfsr_data[10] mask", false,-1, 253,0);
        tracep->declBit(c+3102,"ascon_top lfst_inst genblk1 lfsr_data[10] data_reg", false,-1);
        tracep->declBus(c+3103,"ascon_top lfst_inst genblk1 lfsr_data[10] i", false,-1, 31,0);
        tracep->declArray(c+347,"ascon_top lfst_inst genblk1 lfsr_data[11] mask", false,-1, 253,0);
        tracep->declBit(c+3104,"ascon_top lfst_inst genblk1 lfsr_data[11] data_reg", false,-1);
        tracep->declBus(c+3105,"ascon_top lfst_inst genblk1 lfsr_data[11] i", false,-1, 31,0);
        tracep->declArray(c+355,"ascon_top lfst_inst genblk1 lfsr_data[12] mask", false,-1, 253,0);
        tracep->declBit(c+3106,"ascon_top lfst_inst genblk1 lfsr_data[12] data_reg", false,-1);
        tracep->declBus(c+3107,"ascon_top lfst_inst genblk1 lfsr_data[12] i", false,-1, 31,0);
        tracep->declArray(c+363,"ascon_top lfst_inst genblk1 lfsr_data[13] mask", false,-1, 253,0);
        tracep->declBit(c+3108,"ascon_top lfst_inst genblk1 lfsr_data[13] data_reg", false,-1);
        tracep->declBus(c+3109,"ascon_top lfst_inst genblk1 lfsr_data[13] i", false,-1, 31,0);
        tracep->declArray(c+371,"ascon_top lfst_inst genblk1 lfsr_data[14] mask", false,-1, 253,0);
        tracep->declBit(c+3110,"ascon_top lfst_inst genblk1 lfsr_data[14] data_reg", false,-1);
        tracep->declBus(c+3111,"ascon_top lfst_inst genblk1 lfsr_data[14] i", false,-1, 31,0);
        tracep->declArray(c+379,"ascon_top lfst_inst genblk1 lfsr_data[15] mask", false,-1, 253,0);
        tracep->declBit(c+3112,"ascon_top lfst_inst genblk1 lfsr_data[15] data_reg", false,-1);
        tracep->declBus(c+3113,"ascon_top lfst_inst genblk1 lfsr_data[15] i", false,-1, 31,0);
        tracep->declArray(c+387,"ascon_top lfst_inst genblk1 lfsr_data[16] mask", false,-1, 253,0);
        tracep->declBit(c+3114,"ascon_top lfst_inst genblk1 lfsr_data[16] data_reg", false,-1);
        tracep->declBus(c+3115,"ascon_top lfst_inst genblk1 lfsr_data[16] i", false,-1, 31,0);
        tracep->declArray(c+395,"ascon_top lfst_inst genblk1 lfsr_data[17] mask", false,-1, 253,0);
        tracep->declBit(c+3116,"ascon_top lfst_inst genblk1 lfsr_data[17] data_reg", false,-1);
        tracep->declBus(c+3117,"ascon_top lfst_inst genblk1 lfsr_data[17] i", false,-1, 31,0);
        tracep->declArray(c+403,"ascon_top lfst_inst genblk1 lfsr_data[18] mask", false,-1, 253,0);
        tracep->declBit(c+3118,"ascon_top lfst_inst genblk1 lfsr_data[18] data_reg", false,-1);
        tracep->declBus(c+3119,"ascon_top lfst_inst genblk1 lfsr_data[18] i", false,-1, 31,0);
        tracep->declArray(c+411,"ascon_top lfst_inst genblk1 lfsr_data[19] mask", false,-1, 253,0);
        tracep->declBit(c+3120,"ascon_top lfst_inst genblk1 lfsr_data[19] data_reg", false,-1);
        tracep->declBus(c+3121,"ascon_top lfst_inst genblk1 lfsr_data[19] i", false,-1, 31,0);
        tracep->declArray(c+419,"ascon_top lfst_inst genblk1 lfsr_data[20] mask", false,-1, 253,0);
        tracep->declBit(c+3122,"ascon_top lfst_inst genblk1 lfsr_data[20] data_reg", false,-1);
        tracep->declBus(c+3123,"ascon_top lfst_inst genblk1 lfsr_data[20] i", false,-1, 31,0);
        tracep->declArray(c+427,"ascon_top lfst_inst genblk1 lfsr_data[21] mask", false,-1, 253,0);
        tracep->declBit(c+3124,"ascon_top lfst_inst genblk1 lfsr_data[21] data_reg", false,-1);
        tracep->declBus(c+3125,"ascon_top lfst_inst genblk1 lfsr_data[21] i", false,-1, 31,0);
        tracep->declArray(c+435,"ascon_top lfst_inst genblk1 lfsr_data[22] mask", false,-1, 253,0);
        tracep->declBit(c+3126,"ascon_top lfst_inst genblk1 lfsr_data[22] data_reg", false,-1);
        tracep->declBus(c+3127,"ascon_top lfst_inst genblk1 lfsr_data[22] i", false,-1, 31,0);
        tracep->declArray(c+443,"ascon_top lfst_inst genblk1 lfsr_data[23] mask", false,-1, 253,0);
        tracep->declBit(c+3128,"ascon_top lfst_inst genblk1 lfsr_data[23] data_reg", false,-1);
        tracep->declBus(c+3129,"ascon_top lfst_inst genblk1 lfsr_data[23] i", false,-1, 31,0);
        tracep->declArray(c+451,"ascon_top lfst_inst genblk1 lfsr_data[24] mask", false,-1, 253,0);
        tracep->declBit(c+3130,"ascon_top lfst_inst genblk1 lfsr_data[24] data_reg", false,-1);
        tracep->declBus(c+3131,"ascon_top lfst_inst genblk1 lfsr_data[24] i", false,-1, 31,0);
        tracep->declArray(c+459,"ascon_top lfst_inst genblk1 lfsr_data[25] mask", false,-1, 253,0);
        tracep->declBit(c+3132,"ascon_top lfst_inst genblk1 lfsr_data[25] data_reg", false,-1);
        tracep->declBus(c+3133,"ascon_top lfst_inst genblk1 lfsr_data[25] i", false,-1, 31,0);
        tracep->declArray(c+467,"ascon_top lfst_inst genblk1 lfsr_data[26] mask", false,-1, 253,0);
        tracep->declBit(c+3134,"ascon_top lfst_inst genblk1 lfsr_data[26] data_reg", false,-1);
        tracep->declBus(c+3135,"ascon_top lfst_inst genblk1 lfsr_data[26] i", false,-1, 31,0);
        tracep->declArray(c+475,"ascon_top lfst_inst genblk1 lfsr_data[27] mask", false,-1, 253,0);
        tracep->declBit(c+3136,"ascon_top lfst_inst genblk1 lfsr_data[27] data_reg", false,-1);
        tracep->declBus(c+3137,"ascon_top lfst_inst genblk1 lfsr_data[27] i", false,-1, 31,0);
        tracep->declArray(c+483,"ascon_top lfst_inst genblk1 lfsr_data[28] mask", false,-1, 253,0);
        tracep->declBit(c+3138,"ascon_top lfst_inst genblk1 lfsr_data[28] data_reg", false,-1);
        tracep->declBus(c+3139,"ascon_top lfst_inst genblk1 lfsr_data[28] i", false,-1, 31,0);
        tracep->declArray(c+491,"ascon_top lfst_inst genblk1 lfsr_data[29] mask", false,-1, 253,0);
        tracep->declBit(c+3140,"ascon_top lfst_inst genblk1 lfsr_data[29] data_reg", false,-1);
        tracep->declBus(c+3141,"ascon_top lfst_inst genblk1 lfsr_data[29] i", false,-1, 31,0);
        tracep->declArray(c+499,"ascon_top lfst_inst genblk1 lfsr_data[30] mask", false,-1, 253,0);
        tracep->declBit(c+3142,"ascon_top lfst_inst genblk1 lfsr_data[30] data_reg", false,-1);
        tracep->declBus(c+3143,"ascon_top lfst_inst genblk1 lfsr_data[30] i", false,-1, 31,0);
        tracep->declArray(c+507,"ascon_top lfst_inst genblk1 lfsr_data[31] mask", false,-1, 253,0);
        tracep->declBit(c+3144,"ascon_top lfst_inst genblk1 lfsr_data[31] data_reg", false,-1);
        tracep->declBus(c+3145,"ascon_top lfst_inst genblk1 lfsr_data[31] i", false,-1, 31,0);
        tracep->declArray(c+515,"ascon_top lfst_inst genblk1 lfsr_data[32] mask", false,-1, 253,0);
        tracep->declBit(c+3146,"ascon_top lfst_inst genblk1 lfsr_data[32] data_reg", false,-1);
        tracep->declBus(c+3147,"ascon_top lfst_inst genblk1 lfsr_data[32] i", false,-1, 31,0);
        tracep->declArray(c+523,"ascon_top lfst_inst genblk1 lfsr_data[33] mask", false,-1, 253,0);
        tracep->declBit(c+3148,"ascon_top lfst_inst genblk1 lfsr_data[33] data_reg", false,-1);
        tracep->declBus(c+3149,"ascon_top lfst_inst genblk1 lfsr_data[33] i", false,-1, 31,0);
        tracep->declArray(c+531,"ascon_top lfst_inst genblk1 lfsr_data[34] mask", false,-1, 253,0);
        tracep->declBit(c+3150,"ascon_top lfst_inst genblk1 lfsr_data[34] data_reg", false,-1);
        tracep->declBus(c+3151,"ascon_top lfst_inst genblk1 lfsr_data[34] i", false,-1, 31,0);
        tracep->declArray(c+539,"ascon_top lfst_inst genblk1 lfsr_data[35] mask", false,-1, 253,0);
        tracep->declBit(c+3152,"ascon_top lfst_inst genblk1 lfsr_data[35] data_reg", false,-1);
        tracep->declBus(c+3153,"ascon_top lfst_inst genblk1 lfsr_data[35] i", false,-1, 31,0);
        tracep->declArray(c+547,"ascon_top lfst_inst genblk1 lfsr_data[36] mask", false,-1, 253,0);
        tracep->declBit(c+3154,"ascon_top lfst_inst genblk1 lfsr_data[36] data_reg", false,-1);
        tracep->declBus(c+3155,"ascon_top lfst_inst genblk1 lfsr_data[36] i", false,-1, 31,0);
        tracep->declArray(c+555,"ascon_top lfst_inst genblk1 lfsr_data[37] mask", false,-1, 253,0);
        tracep->declBit(c+3156,"ascon_top lfst_inst genblk1 lfsr_data[37] data_reg", false,-1);
        tracep->declBus(c+3157,"ascon_top lfst_inst genblk1 lfsr_data[37] i", false,-1, 31,0);
        tracep->declArray(c+563,"ascon_top lfst_inst genblk1 lfsr_data[38] mask", false,-1, 253,0);
        tracep->declBit(c+3158,"ascon_top lfst_inst genblk1 lfsr_data[38] data_reg", false,-1);
        tracep->declBus(c+3159,"ascon_top lfst_inst genblk1 lfsr_data[38] i", false,-1, 31,0);
        tracep->declArray(c+571,"ascon_top lfst_inst genblk1 lfsr_data[39] mask", false,-1, 253,0);
        tracep->declBit(c+3160,"ascon_top lfst_inst genblk1 lfsr_data[39] data_reg", false,-1);
        tracep->declBus(c+3161,"ascon_top lfst_inst genblk1 lfsr_data[39] i", false,-1, 31,0);
        tracep->declArray(c+579,"ascon_top lfst_inst genblk1 lfsr_data[40] mask", false,-1, 253,0);
        tracep->declBit(c+3162,"ascon_top lfst_inst genblk1 lfsr_data[40] data_reg", false,-1);
        tracep->declBus(c+3163,"ascon_top lfst_inst genblk1 lfsr_data[40] i", false,-1, 31,0);
        tracep->declArray(c+587,"ascon_top lfst_inst genblk1 lfsr_data[41] mask", false,-1, 253,0);
        tracep->declBit(c+3164,"ascon_top lfst_inst genblk1 lfsr_data[41] data_reg", false,-1);
        tracep->declBus(c+3165,"ascon_top lfst_inst genblk1 lfsr_data[41] i", false,-1, 31,0);
        tracep->declArray(c+595,"ascon_top lfst_inst genblk1 lfsr_data[42] mask", false,-1, 253,0);
        tracep->declBit(c+3166,"ascon_top lfst_inst genblk1 lfsr_data[42] data_reg", false,-1);
        tracep->declBus(c+3167,"ascon_top lfst_inst genblk1 lfsr_data[42] i", false,-1, 31,0);
        tracep->declArray(c+603,"ascon_top lfst_inst genblk1 lfsr_data[43] mask", false,-1, 253,0);
        tracep->declBit(c+3168,"ascon_top lfst_inst genblk1 lfsr_data[43] data_reg", false,-1);
        tracep->declBus(c+3169,"ascon_top lfst_inst genblk1 lfsr_data[43] i", false,-1, 31,0);
        tracep->declArray(c+611,"ascon_top lfst_inst genblk1 lfsr_data[44] mask", false,-1, 253,0);
        tracep->declBit(c+3170,"ascon_top lfst_inst genblk1 lfsr_data[44] data_reg", false,-1);
        tracep->declBus(c+3171,"ascon_top lfst_inst genblk1 lfsr_data[44] i", false,-1, 31,0);
        tracep->declArray(c+619,"ascon_top lfst_inst genblk1 lfsr_data[45] mask", false,-1, 253,0);
        tracep->declBit(c+3172,"ascon_top lfst_inst genblk1 lfsr_data[45] data_reg", false,-1);
        tracep->declBus(c+3173,"ascon_top lfst_inst genblk1 lfsr_data[45] i", false,-1, 31,0);
        tracep->declArray(c+627,"ascon_top lfst_inst genblk1 lfsr_data[46] mask", false,-1, 253,0);
        tracep->declBit(c+3174,"ascon_top lfst_inst genblk1 lfsr_data[46] data_reg", false,-1);
        tracep->declBus(c+3175,"ascon_top lfst_inst genblk1 lfsr_data[46] i", false,-1, 31,0);
        tracep->declArray(c+635,"ascon_top lfst_inst genblk1 lfsr_data[47] mask", false,-1, 253,0);
        tracep->declBit(c+3176,"ascon_top lfst_inst genblk1 lfsr_data[47] data_reg", false,-1);
        tracep->declBus(c+3177,"ascon_top lfst_inst genblk1 lfsr_data[47] i", false,-1, 31,0);
        tracep->declArray(c+643,"ascon_top lfst_inst genblk1 lfsr_data[48] mask", false,-1, 253,0);
        tracep->declBit(c+3178,"ascon_top lfst_inst genblk1 lfsr_data[48] data_reg", false,-1);
        tracep->declBus(c+3179,"ascon_top lfst_inst genblk1 lfsr_data[48] i", false,-1, 31,0);
        tracep->declArray(c+651,"ascon_top lfst_inst genblk1 lfsr_data[49] mask", false,-1, 253,0);
        tracep->declBit(c+3180,"ascon_top lfst_inst genblk1 lfsr_data[49] data_reg", false,-1);
        tracep->declBus(c+3181,"ascon_top lfst_inst genblk1 lfsr_data[49] i", false,-1, 31,0);
        tracep->declArray(c+659,"ascon_top lfst_inst genblk1 lfsr_data[50] mask", false,-1, 253,0);
        tracep->declBit(c+3182,"ascon_top lfst_inst genblk1 lfsr_data[50] data_reg", false,-1);
        tracep->declBus(c+3183,"ascon_top lfst_inst genblk1 lfsr_data[50] i", false,-1, 31,0);
        tracep->declArray(c+667,"ascon_top lfst_inst genblk1 lfsr_data[51] mask", false,-1, 253,0);
        tracep->declBit(c+3184,"ascon_top lfst_inst genblk1 lfsr_data[51] data_reg", false,-1);
        tracep->declBus(c+3185,"ascon_top lfst_inst genblk1 lfsr_data[51] i", false,-1, 31,0);
        tracep->declArray(c+675,"ascon_top lfst_inst genblk1 lfsr_data[52] mask", false,-1, 253,0);
        tracep->declBit(c+3186,"ascon_top lfst_inst genblk1 lfsr_data[52] data_reg", false,-1);
        tracep->declBus(c+3187,"ascon_top lfst_inst genblk1 lfsr_data[52] i", false,-1, 31,0);
        tracep->declArray(c+683,"ascon_top lfst_inst genblk1 lfsr_data[53] mask", false,-1, 253,0);
        tracep->declBit(c+3188,"ascon_top lfst_inst genblk1 lfsr_data[53] data_reg", false,-1);
        tracep->declBus(c+3189,"ascon_top lfst_inst genblk1 lfsr_data[53] i", false,-1, 31,0);
        tracep->declArray(c+691,"ascon_top lfst_inst genblk1 lfsr_data[54] mask", false,-1, 253,0);
        tracep->declBit(c+3190,"ascon_top lfst_inst genblk1 lfsr_data[54] data_reg", false,-1);
        tracep->declBus(c+3191,"ascon_top lfst_inst genblk1 lfsr_data[54] i", false,-1, 31,0);
        tracep->declArray(c+699,"ascon_top lfst_inst genblk1 lfsr_data[55] mask", false,-1, 253,0);
        tracep->declBit(c+3192,"ascon_top lfst_inst genblk1 lfsr_data[55] data_reg", false,-1);
        tracep->declBus(c+3193,"ascon_top lfst_inst genblk1 lfsr_data[55] i", false,-1, 31,0);
        tracep->declArray(c+707,"ascon_top lfst_inst genblk1 lfsr_data[56] mask", false,-1, 253,0);
        tracep->declBit(c+3194,"ascon_top lfst_inst genblk1 lfsr_data[56] data_reg", false,-1);
        tracep->declBus(c+3195,"ascon_top lfst_inst genblk1 lfsr_data[56] i", false,-1, 31,0);
        tracep->declArray(c+715,"ascon_top lfst_inst genblk1 lfsr_data[57] mask", false,-1, 253,0);
        tracep->declBit(c+3196,"ascon_top lfst_inst genblk1 lfsr_data[57] data_reg", false,-1);
        tracep->declBus(c+3197,"ascon_top lfst_inst genblk1 lfsr_data[57] i", false,-1, 31,0);
        tracep->declArray(c+723,"ascon_top lfst_inst genblk1 lfsr_data[58] mask", false,-1, 253,0);
        tracep->declBit(c+3198,"ascon_top lfst_inst genblk1 lfsr_data[58] data_reg", false,-1);
        tracep->declBus(c+3199,"ascon_top lfst_inst genblk1 lfsr_data[58] i", false,-1, 31,0);
        tracep->declArray(c+731,"ascon_top lfst_inst genblk1 lfsr_data[59] mask", false,-1, 253,0);
        tracep->declBit(c+3200,"ascon_top lfst_inst genblk1 lfsr_data[59] data_reg", false,-1);
        tracep->declBus(c+3201,"ascon_top lfst_inst genblk1 lfsr_data[59] i", false,-1, 31,0);
        tracep->declArray(c+739,"ascon_top lfst_inst genblk1 lfsr_data[60] mask", false,-1, 253,0);
        tracep->declBit(c+3202,"ascon_top lfst_inst genblk1 lfsr_data[60] data_reg", false,-1);
        tracep->declBus(c+3203,"ascon_top lfst_inst genblk1 lfsr_data[60] i", false,-1, 31,0);
        tracep->declArray(c+747,"ascon_top lfst_inst genblk1 lfsr_data[61] mask", false,-1, 253,0);
        tracep->declBit(c+3204,"ascon_top lfst_inst genblk1 lfsr_data[61] data_reg", false,-1);
        tracep->declBus(c+3205,"ascon_top lfst_inst genblk1 lfsr_data[61] i", false,-1, 31,0);
        tracep->declArray(c+755,"ascon_top lfst_inst genblk1 lfsr_data[62] mask", false,-1, 253,0);
        tracep->declBit(c+3206,"ascon_top lfst_inst genblk1 lfsr_data[62] data_reg", false,-1);
        tracep->declBus(c+3207,"ascon_top lfst_inst genblk1 lfsr_data[62] i", false,-1, 31,0);
        tracep->declArray(c+763,"ascon_top lfst_inst genblk1 lfsr_data[63] mask", false,-1, 253,0);
        tracep->declBit(c+3208,"ascon_top lfst_inst genblk1 lfsr_data[63] data_reg", false,-1);
        tracep->declBus(c+3209,"ascon_top lfst_inst genblk1 lfsr_data[63] i", false,-1, 31,0);
        tracep->declArray(c+771,"ascon_top lfst_inst genblk1 lfsr_data[64] mask", false,-1, 253,0);
        tracep->declBit(c+3210,"ascon_top lfst_inst genblk1 lfsr_data[64] data_reg", false,-1);
        tracep->declBus(c+3211,"ascon_top lfst_inst genblk1 lfsr_data[64] i", false,-1, 31,0);
        tracep->declArray(c+779,"ascon_top lfst_inst genblk1 lfsr_data[65] mask", false,-1, 253,0);
        tracep->declBit(c+3212,"ascon_top lfst_inst genblk1 lfsr_data[65] data_reg", false,-1);
        tracep->declBus(c+3213,"ascon_top lfst_inst genblk1 lfsr_data[65] i", false,-1, 31,0);
        tracep->declArray(c+787,"ascon_top lfst_inst genblk1 lfsr_data[66] mask", false,-1, 253,0);
        tracep->declBit(c+3214,"ascon_top lfst_inst genblk1 lfsr_data[66] data_reg", false,-1);
        tracep->declBus(c+3215,"ascon_top lfst_inst genblk1 lfsr_data[66] i", false,-1, 31,0);
        tracep->declArray(c+795,"ascon_top lfst_inst genblk1 lfsr_data[67] mask", false,-1, 253,0);
        tracep->declBit(c+3216,"ascon_top lfst_inst genblk1 lfsr_data[67] data_reg", false,-1);
        tracep->declBus(c+3217,"ascon_top lfst_inst genblk1 lfsr_data[67] i", false,-1, 31,0);
        tracep->declArray(c+803,"ascon_top lfst_inst genblk1 lfsr_data[68] mask", false,-1, 253,0);
        tracep->declBit(c+3218,"ascon_top lfst_inst genblk1 lfsr_data[68] data_reg", false,-1);
        tracep->declBus(c+3219,"ascon_top lfst_inst genblk1 lfsr_data[68] i", false,-1, 31,0);
        tracep->declArray(c+811,"ascon_top lfst_inst genblk1 lfsr_data[69] mask", false,-1, 253,0);
        tracep->declBit(c+3220,"ascon_top lfst_inst genblk1 lfsr_data[69] data_reg", false,-1);
        tracep->declBus(c+3221,"ascon_top lfst_inst genblk1 lfsr_data[69] i", false,-1, 31,0);
        tracep->declArray(c+819,"ascon_top lfst_inst genblk1 lfsr_data[70] mask", false,-1, 253,0);
        tracep->declBit(c+3222,"ascon_top lfst_inst genblk1 lfsr_data[70] data_reg", false,-1);
        tracep->declBus(c+3223,"ascon_top lfst_inst genblk1 lfsr_data[70] i", false,-1, 31,0);
        tracep->declArray(c+827,"ascon_top lfst_inst genblk1 lfsr_data[71] mask", false,-1, 253,0);
        tracep->declBit(c+3224,"ascon_top lfst_inst genblk1 lfsr_data[71] data_reg", false,-1);
        tracep->declBus(c+3225,"ascon_top lfst_inst genblk1 lfsr_data[71] i", false,-1, 31,0);
        tracep->declArray(c+835,"ascon_top lfst_inst genblk1 lfsr_data[72] mask", false,-1, 253,0);
        tracep->declBit(c+3226,"ascon_top lfst_inst genblk1 lfsr_data[72] data_reg", false,-1);
        tracep->declBus(c+3227,"ascon_top lfst_inst genblk1 lfsr_data[72] i", false,-1, 31,0);
        tracep->declArray(c+843,"ascon_top lfst_inst genblk1 lfsr_data[73] mask", false,-1, 253,0);
        tracep->declBit(c+3228,"ascon_top lfst_inst genblk1 lfsr_data[73] data_reg", false,-1);
        tracep->declBus(c+3229,"ascon_top lfst_inst genblk1 lfsr_data[73] i", false,-1, 31,0);
        tracep->declArray(c+851,"ascon_top lfst_inst genblk1 lfsr_data[74] mask", false,-1, 253,0);
        tracep->declBit(c+3230,"ascon_top lfst_inst genblk1 lfsr_data[74] data_reg", false,-1);
        tracep->declBus(c+3231,"ascon_top lfst_inst genblk1 lfsr_data[74] i", false,-1, 31,0);
        tracep->declArray(c+859,"ascon_top lfst_inst genblk1 lfsr_data[75] mask", false,-1, 253,0);
        tracep->declBit(c+3232,"ascon_top lfst_inst genblk1 lfsr_data[75] data_reg", false,-1);
        tracep->declBus(c+3233,"ascon_top lfst_inst genblk1 lfsr_data[75] i", false,-1, 31,0);
        tracep->declArray(c+867,"ascon_top lfst_inst genblk1 lfsr_data[76] mask", false,-1, 253,0);
        tracep->declBit(c+3234,"ascon_top lfst_inst genblk1 lfsr_data[76] data_reg", false,-1);
        tracep->declBus(c+3235,"ascon_top lfst_inst genblk1 lfsr_data[76] i", false,-1, 31,0);
        tracep->declArray(c+875,"ascon_top lfst_inst genblk1 lfsr_data[77] mask", false,-1, 253,0);
        tracep->declBit(c+3236,"ascon_top lfst_inst genblk1 lfsr_data[77] data_reg", false,-1);
        tracep->declBus(c+3237,"ascon_top lfst_inst genblk1 lfsr_data[77] i", false,-1, 31,0);
        tracep->declArray(c+883,"ascon_top lfst_inst genblk1 lfsr_data[78] mask", false,-1, 253,0);
        tracep->declBit(c+3238,"ascon_top lfst_inst genblk1 lfsr_data[78] data_reg", false,-1);
        tracep->declBus(c+3239,"ascon_top lfst_inst genblk1 lfsr_data[78] i", false,-1, 31,0);
        tracep->declArray(c+891,"ascon_top lfst_inst genblk1 lfsr_data[79] mask", false,-1, 253,0);
        tracep->declBit(c+3240,"ascon_top lfst_inst genblk1 lfsr_data[79] data_reg", false,-1);
        tracep->declBus(c+3241,"ascon_top lfst_inst genblk1 lfsr_data[79] i", false,-1, 31,0);
        tracep->declArray(c+899,"ascon_top lfst_inst genblk1 lfsr_data[80] mask", false,-1, 253,0);
        tracep->declBit(c+3242,"ascon_top lfst_inst genblk1 lfsr_data[80] data_reg", false,-1);
        tracep->declBus(c+3243,"ascon_top lfst_inst genblk1 lfsr_data[80] i", false,-1, 31,0);
        tracep->declArray(c+907,"ascon_top lfst_inst genblk1 lfsr_data[81] mask", false,-1, 253,0);
        tracep->declBit(c+3244,"ascon_top lfst_inst genblk1 lfsr_data[81] data_reg", false,-1);
        tracep->declBus(c+3245,"ascon_top lfst_inst genblk1 lfsr_data[81] i", false,-1, 31,0);
        tracep->declArray(c+915,"ascon_top lfst_inst genblk1 lfsr_data[82] mask", false,-1, 253,0);
        tracep->declBit(c+3246,"ascon_top lfst_inst genblk1 lfsr_data[82] data_reg", false,-1);
        tracep->declBus(c+3247,"ascon_top lfst_inst genblk1 lfsr_data[82] i", false,-1, 31,0);
        tracep->declArray(c+923,"ascon_top lfst_inst genblk1 lfsr_data[83] mask", false,-1, 253,0);
        tracep->declBit(c+3248,"ascon_top lfst_inst genblk1 lfsr_data[83] data_reg", false,-1);
        tracep->declBus(c+3249,"ascon_top lfst_inst genblk1 lfsr_data[83] i", false,-1, 31,0);
        tracep->declArray(c+931,"ascon_top lfst_inst genblk1 lfsr_data[84] mask", false,-1, 253,0);
        tracep->declBit(c+3250,"ascon_top lfst_inst genblk1 lfsr_data[84] data_reg", false,-1);
        tracep->declBus(c+3251,"ascon_top lfst_inst genblk1 lfsr_data[84] i", false,-1, 31,0);
        tracep->declArray(c+939,"ascon_top lfst_inst genblk1 lfsr_data[85] mask", false,-1, 253,0);
        tracep->declBit(c+3252,"ascon_top lfst_inst genblk1 lfsr_data[85] data_reg", false,-1);
        tracep->declBus(c+3253,"ascon_top lfst_inst genblk1 lfsr_data[85] i", false,-1, 31,0);
        tracep->declArray(c+947,"ascon_top lfst_inst genblk1 lfsr_data[86] mask", false,-1, 253,0);
        tracep->declBit(c+3254,"ascon_top lfst_inst genblk1 lfsr_data[86] data_reg", false,-1);
        tracep->declBus(c+3255,"ascon_top lfst_inst genblk1 lfsr_data[86] i", false,-1, 31,0);
        tracep->declArray(c+955,"ascon_top lfst_inst genblk1 lfsr_data[87] mask", false,-1, 253,0);
        tracep->declBit(c+3256,"ascon_top lfst_inst genblk1 lfsr_data[87] data_reg", false,-1);
        tracep->declBus(c+3257,"ascon_top lfst_inst genblk1 lfsr_data[87] i", false,-1, 31,0);
        tracep->declArray(c+963,"ascon_top lfst_inst genblk1 lfsr_data[88] mask", false,-1, 253,0);
        tracep->declBit(c+3258,"ascon_top lfst_inst genblk1 lfsr_data[88] data_reg", false,-1);
        tracep->declBus(c+3259,"ascon_top lfst_inst genblk1 lfsr_data[88] i", false,-1, 31,0);
        tracep->declArray(c+971,"ascon_top lfst_inst genblk1 lfsr_data[89] mask", false,-1, 253,0);
        tracep->declBit(c+3260,"ascon_top lfst_inst genblk1 lfsr_data[89] data_reg", false,-1);
        tracep->declBus(c+3261,"ascon_top lfst_inst genblk1 lfsr_data[89] i", false,-1, 31,0);
        tracep->declArray(c+979,"ascon_top lfst_inst genblk1 lfsr_data[90] mask", false,-1, 253,0);
        tracep->declBit(c+3262,"ascon_top lfst_inst genblk1 lfsr_data[90] data_reg", false,-1);
        tracep->declBus(c+3263,"ascon_top lfst_inst genblk1 lfsr_data[90] i", false,-1, 31,0);
        tracep->declArray(c+987,"ascon_top lfst_inst genblk1 lfsr_data[91] mask", false,-1, 253,0);
        tracep->declBit(c+3264,"ascon_top lfst_inst genblk1 lfsr_data[91] data_reg", false,-1);
        tracep->declBus(c+3265,"ascon_top lfst_inst genblk1 lfsr_data[91] i", false,-1, 31,0);
        tracep->declArray(c+995,"ascon_top lfst_inst genblk1 lfsr_data[92] mask", false,-1, 253,0);
        tracep->declBit(c+3266,"ascon_top lfst_inst genblk1 lfsr_data[92] data_reg", false,-1);
        tracep->declBus(c+3267,"ascon_top lfst_inst genblk1 lfsr_data[92] i", false,-1, 31,0);
        tracep->declArray(c+1003,"ascon_top lfst_inst genblk1 lfsr_data[93] mask", false,-1, 253,0);
        tracep->declBit(c+3268,"ascon_top lfst_inst genblk1 lfsr_data[93] data_reg", false,-1);
        tracep->declBus(c+3269,"ascon_top lfst_inst genblk1 lfsr_data[93] i", false,-1, 31,0);
        tracep->declArray(c+1011,"ascon_top lfst_inst genblk1 lfsr_data[94] mask", false,-1, 253,0);
        tracep->declBit(c+3270,"ascon_top lfst_inst genblk1 lfsr_data[94] data_reg", false,-1);
        tracep->declBus(c+3271,"ascon_top lfst_inst genblk1 lfsr_data[94] i", false,-1, 31,0);
        tracep->declArray(c+1019,"ascon_top lfst_inst genblk1 lfsr_data[95] mask", false,-1, 253,0);
        tracep->declBit(c+3272,"ascon_top lfst_inst genblk1 lfsr_data[95] data_reg", false,-1);
        tracep->declBus(c+3273,"ascon_top lfst_inst genblk1 lfsr_data[95] i", false,-1, 31,0);
        tracep->declArray(c+1027,"ascon_top lfst_inst genblk1 lfsr_data[96] mask", false,-1, 253,0);
        tracep->declBit(c+3274,"ascon_top lfst_inst genblk1 lfsr_data[96] data_reg", false,-1);
        tracep->declBus(c+3275,"ascon_top lfst_inst genblk1 lfsr_data[96] i", false,-1, 31,0);
        tracep->declArray(c+1035,"ascon_top lfst_inst genblk1 lfsr_data[97] mask", false,-1, 253,0);
        tracep->declBit(c+3276,"ascon_top lfst_inst genblk1 lfsr_data[97] data_reg", false,-1);
        tracep->declBus(c+3277,"ascon_top lfst_inst genblk1 lfsr_data[97] i", false,-1, 31,0);
        tracep->declArray(c+1043,"ascon_top lfst_inst genblk1 lfsr_data[98] mask", false,-1, 253,0);
        tracep->declBit(c+3278,"ascon_top lfst_inst genblk1 lfsr_data[98] data_reg", false,-1);
        tracep->declBus(c+3279,"ascon_top lfst_inst genblk1 lfsr_data[98] i", false,-1, 31,0);
        tracep->declArray(c+1051,"ascon_top lfst_inst genblk1 lfsr_data[99] mask", false,-1, 253,0);
        tracep->declBit(c+3280,"ascon_top lfst_inst genblk1 lfsr_data[99] data_reg", false,-1);
        tracep->declBus(c+3281,"ascon_top lfst_inst genblk1 lfsr_data[99] i", false,-1, 31,0);
        tracep->declArray(c+1059,"ascon_top lfst_inst genblk1 lfsr_data[100] mask", false,-1, 253,0);
        tracep->declBit(c+3282,"ascon_top lfst_inst genblk1 lfsr_data[100] data_reg", false,-1);
        tracep->declBus(c+3283,"ascon_top lfst_inst genblk1 lfsr_data[100] i", false,-1, 31,0);
        tracep->declArray(c+1067,"ascon_top lfst_inst genblk1 lfsr_data[101] mask", false,-1, 253,0);
        tracep->declBit(c+3284,"ascon_top lfst_inst genblk1 lfsr_data[101] data_reg", false,-1);
        tracep->declBus(c+3285,"ascon_top lfst_inst genblk1 lfsr_data[101] i", false,-1, 31,0);
        tracep->declArray(c+1075,"ascon_top lfst_inst genblk1 lfsr_data[102] mask", false,-1, 253,0);
        tracep->declBit(c+3286,"ascon_top lfst_inst genblk1 lfsr_data[102] data_reg", false,-1);
        tracep->declBus(c+3287,"ascon_top lfst_inst genblk1 lfsr_data[102] i", false,-1, 31,0);
        tracep->declArray(c+1083,"ascon_top lfst_inst genblk1 lfsr_data[103] mask", false,-1, 253,0);
        tracep->declBit(c+3288,"ascon_top lfst_inst genblk1 lfsr_data[103] data_reg", false,-1);
        tracep->declBus(c+3289,"ascon_top lfst_inst genblk1 lfsr_data[103] i", false,-1, 31,0);
        tracep->declArray(c+1091,"ascon_top lfst_inst genblk1 lfsr_data[104] mask", false,-1, 253,0);
        tracep->declBit(c+3290,"ascon_top lfst_inst genblk1 lfsr_data[104] data_reg", false,-1);
        tracep->declBus(c+3291,"ascon_top lfst_inst genblk1 lfsr_data[104] i", false,-1, 31,0);
        tracep->declArray(c+1099,"ascon_top lfst_inst genblk1 lfsr_data[105] mask", false,-1, 253,0);
        tracep->declBit(c+3292,"ascon_top lfst_inst genblk1 lfsr_data[105] data_reg", false,-1);
        tracep->declBus(c+3293,"ascon_top lfst_inst genblk1 lfsr_data[105] i", false,-1, 31,0);
        tracep->declArray(c+1107,"ascon_top lfst_inst genblk1 lfsr_data[106] mask", false,-1, 253,0);
        tracep->declBit(c+3294,"ascon_top lfst_inst genblk1 lfsr_data[106] data_reg", false,-1);
        tracep->declBus(c+3295,"ascon_top lfst_inst genblk1 lfsr_data[106] i", false,-1, 31,0);
        tracep->declArray(c+1115,"ascon_top lfst_inst genblk1 lfsr_data[107] mask", false,-1, 253,0);
        tracep->declBit(c+3296,"ascon_top lfst_inst genblk1 lfsr_data[107] data_reg", false,-1);
        tracep->declBus(c+3297,"ascon_top lfst_inst genblk1 lfsr_data[107] i", false,-1, 31,0);
        tracep->declArray(c+1123,"ascon_top lfst_inst genblk1 lfsr_data[108] mask", false,-1, 253,0);
        tracep->declBit(c+3298,"ascon_top lfst_inst genblk1 lfsr_data[108] data_reg", false,-1);
        tracep->declBus(c+3299,"ascon_top lfst_inst genblk1 lfsr_data[108] i", false,-1, 31,0);
        tracep->declArray(c+1131,"ascon_top lfst_inst genblk1 lfsr_data[109] mask", false,-1, 253,0);
        tracep->declBit(c+3300,"ascon_top lfst_inst genblk1 lfsr_data[109] data_reg", false,-1);
        tracep->declBus(c+3301,"ascon_top lfst_inst genblk1 lfsr_data[109] i", false,-1, 31,0);
        tracep->declArray(c+1139,"ascon_top lfst_inst genblk1 lfsr_data[110] mask", false,-1, 253,0);
        tracep->declBit(c+3302,"ascon_top lfst_inst genblk1 lfsr_data[110] data_reg", false,-1);
        tracep->declBus(c+3303,"ascon_top lfst_inst genblk1 lfsr_data[110] i", false,-1, 31,0);
        tracep->declArray(c+1147,"ascon_top lfst_inst genblk1 lfsr_data[111] mask", false,-1, 253,0);
        tracep->declBit(c+3304,"ascon_top lfst_inst genblk1 lfsr_data[111] data_reg", false,-1);
        tracep->declBus(c+3305,"ascon_top lfst_inst genblk1 lfsr_data[111] i", false,-1, 31,0);
        tracep->declArray(c+1155,"ascon_top lfst_inst genblk1 lfsr_data[112] mask", false,-1, 253,0);
        tracep->declBit(c+3306,"ascon_top lfst_inst genblk1 lfsr_data[112] data_reg", false,-1);
        tracep->declBus(c+3307,"ascon_top lfst_inst genblk1 lfsr_data[112] i", false,-1, 31,0);
        tracep->declArray(c+1163,"ascon_top lfst_inst genblk1 lfsr_data[113] mask", false,-1, 253,0);
        tracep->declBit(c+3308,"ascon_top lfst_inst genblk1 lfsr_data[113] data_reg", false,-1);
        tracep->declBus(c+3309,"ascon_top lfst_inst genblk1 lfsr_data[113] i", false,-1, 31,0);
        tracep->declArray(c+1171,"ascon_top lfst_inst genblk1 lfsr_data[114] mask", false,-1, 253,0);
        tracep->declBit(c+3310,"ascon_top lfst_inst genblk1 lfsr_data[114] data_reg", false,-1);
        tracep->declBus(c+3311,"ascon_top lfst_inst genblk1 lfsr_data[114] i", false,-1, 31,0);
        tracep->declArray(c+1179,"ascon_top lfst_inst genblk1 lfsr_data[115] mask", false,-1, 253,0);
        tracep->declBit(c+3312,"ascon_top lfst_inst genblk1 lfsr_data[115] data_reg", false,-1);
        tracep->declBus(c+3313,"ascon_top lfst_inst genblk1 lfsr_data[115] i", false,-1, 31,0);
        tracep->declArray(c+1187,"ascon_top lfst_inst genblk1 lfsr_data[116] mask", false,-1, 253,0);
        tracep->declBit(c+3314,"ascon_top lfst_inst genblk1 lfsr_data[116] data_reg", false,-1);
        tracep->declBus(c+3315,"ascon_top lfst_inst genblk1 lfsr_data[116] i", false,-1, 31,0);
        tracep->declArray(c+1195,"ascon_top lfst_inst genblk1 lfsr_data[117] mask", false,-1, 253,0);
        tracep->declBit(c+3316,"ascon_top lfst_inst genblk1 lfsr_data[117] data_reg", false,-1);
        tracep->declBus(c+3317,"ascon_top lfst_inst genblk1 lfsr_data[117] i", false,-1, 31,0);
        tracep->declArray(c+1203,"ascon_top lfst_inst genblk1 lfsr_data[118] mask", false,-1, 253,0);
        tracep->declBit(c+3318,"ascon_top lfst_inst genblk1 lfsr_data[118] data_reg", false,-1);
        tracep->declBus(c+3319,"ascon_top lfst_inst genblk1 lfsr_data[118] i", false,-1, 31,0);
        tracep->declArray(c+1211,"ascon_top lfst_inst genblk1 lfsr_data[119] mask", false,-1, 253,0);
        tracep->declBit(c+3320,"ascon_top lfst_inst genblk1 lfsr_data[119] data_reg", false,-1);
        tracep->declBus(c+3321,"ascon_top lfst_inst genblk1 lfsr_data[119] i", false,-1, 31,0);
        tracep->declArray(c+1219,"ascon_top lfst_inst genblk1 lfsr_data[120] mask", false,-1, 253,0);
        tracep->declBit(c+3322,"ascon_top lfst_inst genblk1 lfsr_data[120] data_reg", false,-1);
        tracep->declBus(c+3323,"ascon_top lfst_inst genblk1 lfsr_data[120] i", false,-1, 31,0);
        tracep->declArray(c+1227,"ascon_top lfst_inst genblk1 lfsr_data[121] mask", false,-1, 253,0);
        tracep->declBit(c+3324,"ascon_top lfst_inst genblk1 lfsr_data[121] data_reg", false,-1);
        tracep->declBus(c+3325,"ascon_top lfst_inst genblk1 lfsr_data[121] i", false,-1, 31,0);
        tracep->declArray(c+1235,"ascon_top lfst_inst genblk1 lfsr_data[122] mask", false,-1, 253,0);
        tracep->declBit(c+3326,"ascon_top lfst_inst genblk1 lfsr_data[122] data_reg", false,-1);
        tracep->declBus(c+3327,"ascon_top lfst_inst genblk1 lfsr_data[122] i", false,-1, 31,0);
        tracep->declArray(c+1243,"ascon_top lfst_inst genblk1 lfsr_data[123] mask", false,-1, 253,0);
        tracep->declBit(c+3328,"ascon_top lfst_inst genblk1 lfsr_data[123] data_reg", false,-1);
        tracep->declBus(c+3329,"ascon_top lfst_inst genblk1 lfsr_data[123] i", false,-1, 31,0);
        tracep->declArray(c+1251,"ascon_top lfst_inst genblk1 lfsr_data[124] mask", false,-1, 253,0);
        tracep->declBit(c+3330,"ascon_top lfst_inst genblk1 lfsr_data[124] data_reg", false,-1);
        tracep->declBus(c+3331,"ascon_top lfst_inst genblk1 lfsr_data[124] i", false,-1, 31,0);
        tracep->declArray(c+1259,"ascon_top lfst_inst genblk1 lfsr_data[125] mask", false,-1, 253,0);
        tracep->declBit(c+3332,"ascon_top lfst_inst genblk1 lfsr_data[125] data_reg", false,-1);
        tracep->declBus(c+3333,"ascon_top lfst_inst genblk1 lfsr_data[125] i", false,-1, 31,0);
        tracep->declArray(c+1267,"ascon_top lfst_inst genblk1 lfsr_data[126] mask", false,-1, 253,0);
        tracep->declBit(c+3334,"ascon_top lfst_inst genblk1 lfsr_data[126] data_reg", false,-1);
        tracep->declBus(c+3335,"ascon_top lfst_inst genblk1 lfsr_data[126] i", false,-1, 31,0);
        tracep->declArray(c+1275,"ascon_top lfst_inst genblk1 lfsr_data[127] mask", false,-1, 253,0);
        tracep->declBit(c+3336,"ascon_top lfst_inst genblk1 lfsr_data[127] data_reg", false,-1);
        tracep->declBus(c+3337,"ascon_top lfst_inst genblk1 lfsr_data[127] i", false,-1, 31,0);
        tracep->declArray(c+1283,"ascon_top lfst_inst genblk1 lfsr_data[128] mask", false,-1, 253,0);
        tracep->declBit(c+3338,"ascon_top lfst_inst genblk1 lfsr_data[128] data_reg", false,-1);
        tracep->declBus(c+3339,"ascon_top lfst_inst genblk1 lfsr_data[128] i", false,-1, 31,0);
        tracep->declArray(c+1291,"ascon_top lfst_inst genblk1 lfsr_data[129] mask", false,-1, 253,0);
        tracep->declBit(c+3340,"ascon_top lfst_inst genblk1 lfsr_data[129] data_reg", false,-1);
        tracep->declBus(c+3341,"ascon_top lfst_inst genblk1 lfsr_data[129] i", false,-1, 31,0);
        tracep->declArray(c+1299,"ascon_top lfst_inst genblk1 lfsr_data[130] mask", false,-1, 253,0);
        tracep->declBit(c+3342,"ascon_top lfst_inst genblk1 lfsr_data[130] data_reg", false,-1);
        tracep->declBus(c+3343,"ascon_top lfst_inst genblk1 lfsr_data[130] i", false,-1, 31,0);
        tracep->declArray(c+1307,"ascon_top lfst_inst genblk1 lfsr_data[131] mask", false,-1, 253,0);
        tracep->declBit(c+3344,"ascon_top lfst_inst genblk1 lfsr_data[131] data_reg", false,-1);
        tracep->declBus(c+3345,"ascon_top lfst_inst genblk1 lfsr_data[131] i", false,-1, 31,0);
        tracep->declArray(c+1315,"ascon_top lfst_inst genblk1 lfsr_data[132] mask", false,-1, 253,0);
        tracep->declBit(c+3346,"ascon_top lfst_inst genblk1 lfsr_data[132] data_reg", false,-1);
        tracep->declBus(c+3347,"ascon_top lfst_inst genblk1 lfsr_data[132] i", false,-1, 31,0);
        tracep->declArray(c+1323,"ascon_top lfst_inst genblk1 lfsr_data[133] mask", false,-1, 253,0);
        tracep->declBit(c+3348,"ascon_top lfst_inst genblk1 lfsr_data[133] data_reg", false,-1);
        tracep->declBus(c+3349,"ascon_top lfst_inst genblk1 lfsr_data[133] i", false,-1, 31,0);
        tracep->declArray(c+1331,"ascon_top lfst_inst genblk1 lfsr_data[134] mask", false,-1, 253,0);
        tracep->declBit(c+3350,"ascon_top lfst_inst genblk1 lfsr_data[134] data_reg", false,-1);
        tracep->declBus(c+3351,"ascon_top lfst_inst genblk1 lfsr_data[134] i", false,-1, 31,0);
        tracep->declArray(c+1339,"ascon_top lfst_inst genblk1 lfsr_data[135] mask", false,-1, 253,0);
        tracep->declBit(c+3352,"ascon_top lfst_inst genblk1 lfsr_data[135] data_reg", false,-1);
        tracep->declBus(c+3353,"ascon_top lfst_inst genblk1 lfsr_data[135] i", false,-1, 31,0);
        tracep->declArray(c+1347,"ascon_top lfst_inst genblk1 lfsr_data[136] mask", false,-1, 253,0);
        tracep->declBit(c+3354,"ascon_top lfst_inst genblk1 lfsr_data[136] data_reg", false,-1);
        tracep->declBus(c+3355,"ascon_top lfst_inst genblk1 lfsr_data[136] i", false,-1, 31,0);
        tracep->declArray(c+1355,"ascon_top lfst_inst genblk1 lfsr_data[137] mask", false,-1, 253,0);
        tracep->declBit(c+3356,"ascon_top lfst_inst genblk1 lfsr_data[137] data_reg", false,-1);
        tracep->declBus(c+3357,"ascon_top lfst_inst genblk1 lfsr_data[137] i", false,-1, 31,0);
        tracep->declArray(c+1363,"ascon_top lfst_inst genblk1 lfsr_data[138] mask", false,-1, 253,0);
        tracep->declBit(c+3358,"ascon_top lfst_inst genblk1 lfsr_data[138] data_reg", false,-1);
        tracep->declBus(c+3359,"ascon_top lfst_inst genblk1 lfsr_data[138] i", false,-1, 31,0);
        tracep->declArray(c+1371,"ascon_top lfst_inst genblk1 lfsr_data[139] mask", false,-1, 253,0);
        tracep->declBit(c+3360,"ascon_top lfst_inst genblk1 lfsr_data[139] data_reg", false,-1);
        tracep->declBus(c+3361,"ascon_top lfst_inst genblk1 lfsr_data[139] i", false,-1, 31,0);
        tracep->declArray(c+1379,"ascon_top lfst_inst genblk1 lfsr_data[140] mask", false,-1, 253,0);
        tracep->declBit(c+3362,"ascon_top lfst_inst genblk1 lfsr_data[140] data_reg", false,-1);
        tracep->declBus(c+3363,"ascon_top lfst_inst genblk1 lfsr_data[140] i", false,-1, 31,0);
        tracep->declArray(c+1387,"ascon_top lfst_inst genblk1 lfsr_data[141] mask", false,-1, 253,0);
        tracep->declBit(c+3364,"ascon_top lfst_inst genblk1 lfsr_data[141] data_reg", false,-1);
        tracep->declBus(c+3365,"ascon_top lfst_inst genblk1 lfsr_data[141] i", false,-1, 31,0);
        tracep->declArray(c+1395,"ascon_top lfst_inst genblk1 lfsr_data[142] mask", false,-1, 253,0);
        tracep->declBit(c+3366,"ascon_top lfst_inst genblk1 lfsr_data[142] data_reg", false,-1);
        tracep->declBus(c+3367,"ascon_top lfst_inst genblk1 lfsr_data[142] i", false,-1, 31,0);
        tracep->declArray(c+1403,"ascon_top lfst_inst genblk1 lfsr_data[143] mask", false,-1, 253,0);
        tracep->declBit(c+3368,"ascon_top lfst_inst genblk1 lfsr_data[143] data_reg", false,-1);
        tracep->declBus(c+3369,"ascon_top lfst_inst genblk1 lfsr_data[143] i", false,-1, 31,0);
        tracep->declArray(c+1411,"ascon_top lfst_inst genblk1 lfsr_data[144] mask", false,-1, 253,0);
        tracep->declBit(c+3370,"ascon_top lfst_inst genblk1 lfsr_data[144] data_reg", false,-1);
        tracep->declBus(c+3371,"ascon_top lfst_inst genblk1 lfsr_data[144] i", false,-1, 31,0);
        tracep->declArray(c+1419,"ascon_top lfst_inst genblk1 lfsr_data[145] mask", false,-1, 253,0);
        tracep->declBit(c+3372,"ascon_top lfst_inst genblk1 lfsr_data[145] data_reg", false,-1);
        tracep->declBus(c+3373,"ascon_top lfst_inst genblk1 lfsr_data[145] i", false,-1, 31,0);
        tracep->declArray(c+1427,"ascon_top lfst_inst genblk1 lfsr_data[146] mask", false,-1, 253,0);
        tracep->declBit(c+3374,"ascon_top lfst_inst genblk1 lfsr_data[146] data_reg", false,-1);
        tracep->declBus(c+3375,"ascon_top lfst_inst genblk1 lfsr_data[146] i", false,-1, 31,0);
        tracep->declArray(c+1435,"ascon_top lfst_inst genblk1 lfsr_data[147] mask", false,-1, 253,0);
        tracep->declBit(c+3376,"ascon_top lfst_inst genblk1 lfsr_data[147] data_reg", false,-1);
        tracep->declBus(c+3377,"ascon_top lfst_inst genblk1 lfsr_data[147] i", false,-1, 31,0);
        tracep->declArray(c+1443,"ascon_top lfst_inst genblk1 lfsr_data[148] mask", false,-1, 253,0);
        tracep->declBit(c+3378,"ascon_top lfst_inst genblk1 lfsr_data[148] data_reg", false,-1);
        tracep->declBus(c+3379,"ascon_top lfst_inst genblk1 lfsr_data[148] i", false,-1, 31,0);
        tracep->declArray(c+1451,"ascon_top lfst_inst genblk1 lfsr_data[149] mask", false,-1, 253,0);
        tracep->declBit(c+3380,"ascon_top lfst_inst genblk1 lfsr_data[149] data_reg", false,-1);
        tracep->declBus(c+3381,"ascon_top lfst_inst genblk1 lfsr_data[149] i", false,-1, 31,0);
        tracep->declArray(c+1459,"ascon_top lfst_inst genblk1 lfsr_data[150] mask", false,-1, 253,0);
        tracep->declBit(c+3382,"ascon_top lfst_inst genblk1 lfsr_data[150] data_reg", false,-1);
        tracep->declBus(c+3383,"ascon_top lfst_inst genblk1 lfsr_data[150] i", false,-1, 31,0);
        tracep->declArray(c+1467,"ascon_top lfst_inst genblk1 lfsr_data[151] mask", false,-1, 253,0);
        tracep->declBit(c+3384,"ascon_top lfst_inst genblk1 lfsr_data[151] data_reg", false,-1);
        tracep->declBus(c+3385,"ascon_top lfst_inst genblk1 lfsr_data[151] i", false,-1, 31,0);
        tracep->declArray(c+1475,"ascon_top lfst_inst genblk1 lfsr_data[152] mask", false,-1, 253,0);
        tracep->declBit(c+3386,"ascon_top lfst_inst genblk1 lfsr_data[152] data_reg", false,-1);
        tracep->declBus(c+3387,"ascon_top lfst_inst genblk1 lfsr_data[152] i", false,-1, 31,0);
        tracep->declArray(c+1483,"ascon_top lfst_inst genblk1 lfsr_data[153] mask", false,-1, 253,0);
        tracep->declBit(c+3388,"ascon_top lfst_inst genblk1 lfsr_data[153] data_reg", false,-1);
        tracep->declBus(c+3389,"ascon_top lfst_inst genblk1 lfsr_data[153] i", false,-1, 31,0);
        tracep->declArray(c+1491,"ascon_top lfst_inst genblk1 lfsr_data[154] mask", false,-1, 253,0);
        tracep->declBit(c+3390,"ascon_top lfst_inst genblk1 lfsr_data[154] data_reg", false,-1);
        tracep->declBus(c+3391,"ascon_top lfst_inst genblk1 lfsr_data[154] i", false,-1, 31,0);
        tracep->declArray(c+1499,"ascon_top lfst_inst genblk1 lfsr_data[155] mask", false,-1, 253,0);
        tracep->declBit(c+3392,"ascon_top lfst_inst genblk1 lfsr_data[155] data_reg", false,-1);
        tracep->declBus(c+3393,"ascon_top lfst_inst genblk1 lfsr_data[155] i", false,-1, 31,0);
        tracep->declArray(c+1507,"ascon_top lfst_inst genblk1 lfsr_data[156] mask", false,-1, 253,0);
        tracep->declBit(c+3394,"ascon_top lfst_inst genblk1 lfsr_data[156] data_reg", false,-1);
        tracep->declBus(c+3395,"ascon_top lfst_inst genblk1 lfsr_data[156] i", false,-1, 31,0);
        tracep->declArray(c+1515,"ascon_top lfst_inst genblk1 lfsr_data[157] mask", false,-1, 253,0);
        tracep->declBit(c+3396,"ascon_top lfst_inst genblk1 lfsr_data[157] data_reg", false,-1);
        tracep->declBus(c+3397,"ascon_top lfst_inst genblk1 lfsr_data[157] i", false,-1, 31,0);
        tracep->declArray(c+1523,"ascon_top lfst_inst genblk1 lfsr_data[158] mask", false,-1, 253,0);
        tracep->declBit(c+3398,"ascon_top lfst_inst genblk1 lfsr_data[158] data_reg", false,-1);
        tracep->declBus(c+3399,"ascon_top lfst_inst genblk1 lfsr_data[158] i", false,-1, 31,0);
        tracep->declArray(c+1531,"ascon_top lfst_inst genblk1 lfsr_data[159] mask", false,-1, 253,0);
        tracep->declBit(c+3400,"ascon_top lfst_inst genblk1 lfsr_data[159] data_reg", false,-1);
        tracep->declBus(c+3401,"ascon_top lfst_inst genblk1 lfsr_data[159] i", false,-1, 31,0);
        tracep->declArray(c+1539,"ascon_top lfst_inst genblk1 lfsr_data[160] mask", false,-1, 253,0);
        tracep->declBit(c+3402,"ascon_top lfst_inst genblk1 lfsr_data[160] data_reg", false,-1);
        tracep->declBus(c+3403,"ascon_top lfst_inst genblk1 lfsr_data[160] i", false,-1, 31,0);
        tracep->declArray(c+1547,"ascon_top lfst_inst genblk1 lfsr_data[161] mask", false,-1, 253,0);
        tracep->declBit(c+3404,"ascon_top lfst_inst genblk1 lfsr_data[161] data_reg", false,-1);
        tracep->declBus(c+3405,"ascon_top lfst_inst genblk1 lfsr_data[161] i", false,-1, 31,0);
        tracep->declArray(c+1555,"ascon_top lfst_inst genblk1 lfsr_data[162] mask", false,-1, 253,0);
        tracep->declBit(c+3406,"ascon_top lfst_inst genblk1 lfsr_data[162] data_reg", false,-1);
        tracep->declBus(c+3407,"ascon_top lfst_inst genblk1 lfsr_data[162] i", false,-1, 31,0);
        tracep->declArray(c+1563,"ascon_top lfst_inst genblk1 lfsr_data[163] mask", false,-1, 253,0);
        tracep->declBit(c+3408,"ascon_top lfst_inst genblk1 lfsr_data[163] data_reg", false,-1);
        tracep->declBus(c+3409,"ascon_top lfst_inst genblk1 lfsr_data[163] i", false,-1, 31,0);
        tracep->declArray(c+1571,"ascon_top lfst_inst genblk1 lfsr_data[164] mask", false,-1, 253,0);
        tracep->declBit(c+3410,"ascon_top lfst_inst genblk1 lfsr_data[164] data_reg", false,-1);
        tracep->declBus(c+3411,"ascon_top lfst_inst genblk1 lfsr_data[164] i", false,-1, 31,0);
        tracep->declArray(c+1579,"ascon_top lfst_inst genblk1 lfsr_data[165] mask", false,-1, 253,0);
        tracep->declBit(c+3412,"ascon_top lfst_inst genblk1 lfsr_data[165] data_reg", false,-1);
        tracep->declBus(c+3413,"ascon_top lfst_inst genblk1 lfsr_data[165] i", false,-1, 31,0);
        tracep->declArray(c+1587,"ascon_top lfst_inst genblk1 lfsr_data[166] mask", false,-1, 253,0);
        tracep->declBit(c+3414,"ascon_top lfst_inst genblk1 lfsr_data[166] data_reg", false,-1);
        tracep->declBus(c+3415,"ascon_top lfst_inst genblk1 lfsr_data[166] i", false,-1, 31,0);
        tracep->declArray(c+1595,"ascon_top lfst_inst genblk1 lfsr_data[167] mask", false,-1, 253,0);
        tracep->declBit(c+3416,"ascon_top lfst_inst genblk1 lfsr_data[167] data_reg", false,-1);
        tracep->declBus(c+3417,"ascon_top lfst_inst genblk1 lfsr_data[167] i", false,-1, 31,0);
        tracep->declArray(c+1603,"ascon_top lfst_inst genblk1 lfsr_data[168] mask", false,-1, 253,0);
        tracep->declBit(c+3418,"ascon_top lfst_inst genblk1 lfsr_data[168] data_reg", false,-1);
        tracep->declBus(c+3419,"ascon_top lfst_inst genblk1 lfsr_data[168] i", false,-1, 31,0);
        tracep->declArray(c+1611,"ascon_top lfst_inst genblk1 lfsr_data[169] mask", false,-1, 253,0);
        tracep->declBit(c+3420,"ascon_top lfst_inst genblk1 lfsr_data[169] data_reg", false,-1);
        tracep->declBus(c+3421,"ascon_top lfst_inst genblk1 lfsr_data[169] i", false,-1, 31,0);
        tracep->declArray(c+1619,"ascon_top lfst_inst genblk1 lfsr_data[170] mask", false,-1, 253,0);
        tracep->declBit(c+3422,"ascon_top lfst_inst genblk1 lfsr_data[170] data_reg", false,-1);
        tracep->declBus(c+3423,"ascon_top lfst_inst genblk1 lfsr_data[170] i", false,-1, 31,0);
        tracep->declArray(c+1627,"ascon_top lfst_inst genblk1 lfsr_data[171] mask", false,-1, 253,0);
        tracep->declBit(c+3424,"ascon_top lfst_inst genblk1 lfsr_data[171] data_reg", false,-1);
        tracep->declBus(c+3425,"ascon_top lfst_inst genblk1 lfsr_data[171] i", false,-1, 31,0);
        tracep->declArray(c+1635,"ascon_top lfst_inst genblk1 lfsr_data[172] mask", false,-1, 253,0);
        tracep->declBit(c+3426,"ascon_top lfst_inst genblk1 lfsr_data[172] data_reg", false,-1);
        tracep->declBus(c+3427,"ascon_top lfst_inst genblk1 lfsr_data[172] i", false,-1, 31,0);
        tracep->declArray(c+1643,"ascon_top lfst_inst genblk1 lfsr_data[173] mask", false,-1, 253,0);
        tracep->declBit(c+3428,"ascon_top lfst_inst genblk1 lfsr_data[173] data_reg", false,-1);
        tracep->declBus(c+3429,"ascon_top lfst_inst genblk1 lfsr_data[173] i", false,-1, 31,0);
        tracep->declArray(c+1651,"ascon_top lfst_inst genblk1 lfsr_data[174] mask", false,-1, 253,0);
        tracep->declBit(c+3430,"ascon_top lfst_inst genblk1 lfsr_data[174] data_reg", false,-1);
        tracep->declBus(c+3431,"ascon_top lfst_inst genblk1 lfsr_data[174] i", false,-1, 31,0);
        tracep->declArray(c+1659,"ascon_top lfst_inst genblk1 lfsr_data[175] mask", false,-1, 253,0);
        tracep->declBit(c+3432,"ascon_top lfst_inst genblk1 lfsr_data[175] data_reg", false,-1);
        tracep->declBus(c+3433,"ascon_top lfst_inst genblk1 lfsr_data[175] i", false,-1, 31,0);
        tracep->declArray(c+1667,"ascon_top lfst_inst genblk1 lfsr_data[176] mask", false,-1, 253,0);
        tracep->declBit(c+3434,"ascon_top lfst_inst genblk1 lfsr_data[176] data_reg", false,-1);
        tracep->declBus(c+3435,"ascon_top lfst_inst genblk1 lfsr_data[176] i", false,-1, 31,0);
        tracep->declArray(c+1675,"ascon_top lfst_inst genblk1 lfsr_data[177] mask", false,-1, 253,0);
        tracep->declBit(c+3436,"ascon_top lfst_inst genblk1 lfsr_data[177] data_reg", false,-1);
        tracep->declBus(c+3437,"ascon_top lfst_inst genblk1 lfsr_data[177] i", false,-1, 31,0);
        tracep->declArray(c+1683,"ascon_top lfst_inst genblk1 lfsr_data[178] mask", false,-1, 253,0);
        tracep->declBit(c+3438,"ascon_top lfst_inst genblk1 lfsr_data[178] data_reg", false,-1);
        tracep->declBus(c+3439,"ascon_top lfst_inst genblk1 lfsr_data[178] i", false,-1, 31,0);
        tracep->declArray(c+1691,"ascon_top lfst_inst genblk1 lfsr_data[179] mask", false,-1, 253,0);
        tracep->declBit(c+3440,"ascon_top lfst_inst genblk1 lfsr_data[179] data_reg", false,-1);
        tracep->declBus(c+3441,"ascon_top lfst_inst genblk1 lfsr_data[179] i", false,-1, 31,0);
        tracep->declArray(c+1699,"ascon_top lfst_inst genblk1 lfsr_data[180] mask", false,-1, 253,0);
        tracep->declBit(c+3442,"ascon_top lfst_inst genblk1 lfsr_data[180] data_reg", false,-1);
        tracep->declBus(c+3443,"ascon_top lfst_inst genblk1 lfsr_data[180] i", false,-1, 31,0);
        tracep->declArray(c+1707,"ascon_top lfst_inst genblk1 lfsr_data[181] mask", false,-1, 253,0);
        tracep->declBit(c+3444,"ascon_top lfst_inst genblk1 lfsr_data[181] data_reg", false,-1);
        tracep->declBus(c+3445,"ascon_top lfst_inst genblk1 lfsr_data[181] i", false,-1, 31,0);
        tracep->declArray(c+1715,"ascon_top lfst_inst genblk1 lfsr_data[182] mask", false,-1, 253,0);
        tracep->declBit(c+3446,"ascon_top lfst_inst genblk1 lfsr_data[182] data_reg", false,-1);
        tracep->declBus(c+3447,"ascon_top lfst_inst genblk1 lfsr_data[182] i", false,-1, 31,0);
        tracep->declArray(c+1723,"ascon_top lfst_inst genblk1 lfsr_data[183] mask", false,-1, 253,0);
        tracep->declBit(c+3448,"ascon_top lfst_inst genblk1 lfsr_data[183] data_reg", false,-1);
        tracep->declBus(c+3449,"ascon_top lfst_inst genblk1 lfsr_data[183] i", false,-1, 31,0);
        tracep->declArray(c+1731,"ascon_top lfst_inst genblk1 lfsr_data[184] mask", false,-1, 253,0);
        tracep->declBit(c+3450,"ascon_top lfst_inst genblk1 lfsr_data[184] data_reg", false,-1);
        tracep->declBus(c+3451,"ascon_top lfst_inst genblk1 lfsr_data[184] i", false,-1, 31,0);
        tracep->declArray(c+1739,"ascon_top lfst_inst genblk1 lfsr_data[185] mask", false,-1, 253,0);
        tracep->declBit(c+3452,"ascon_top lfst_inst genblk1 lfsr_data[185] data_reg", false,-1);
        tracep->declBus(c+3453,"ascon_top lfst_inst genblk1 lfsr_data[185] i", false,-1, 31,0);
        tracep->declArray(c+1747,"ascon_top lfst_inst genblk1 lfsr_data[186] mask", false,-1, 253,0);
        tracep->declBit(c+3454,"ascon_top lfst_inst genblk1 lfsr_data[186] data_reg", false,-1);
        tracep->declBus(c+3455,"ascon_top lfst_inst genblk1 lfsr_data[186] i", false,-1, 31,0);
        tracep->declArray(c+1755,"ascon_top lfst_inst genblk1 lfsr_data[187] mask", false,-1, 253,0);
        tracep->declBit(c+3456,"ascon_top lfst_inst genblk1 lfsr_data[187] data_reg", false,-1);
        tracep->declBus(c+3457,"ascon_top lfst_inst genblk1 lfsr_data[187] i", false,-1, 31,0);
        tracep->declArray(c+1763,"ascon_top lfst_inst genblk1 lfsr_data[188] mask", false,-1, 253,0);
        tracep->declBit(c+3458,"ascon_top lfst_inst genblk1 lfsr_data[188] data_reg", false,-1);
        tracep->declBus(c+3459,"ascon_top lfst_inst genblk1 lfsr_data[188] i", false,-1, 31,0);
        tracep->declArray(c+1771,"ascon_top lfst_inst genblk1 lfsr_data[189] mask", false,-1, 253,0);
        tracep->declBit(c+3460,"ascon_top lfst_inst genblk1 lfsr_data[189] data_reg", false,-1);
        tracep->declBus(c+3461,"ascon_top lfst_inst genblk1 lfsr_data[189] i", false,-1, 31,0);
        tracep->declArray(c+1779,"ascon_top lfst_inst genblk1 lfsr_data[190] mask", false,-1, 253,0);
        tracep->declBit(c+3462,"ascon_top lfst_inst genblk1 lfsr_data[190] data_reg", false,-1);
        tracep->declBus(c+3463,"ascon_top lfst_inst genblk1 lfsr_data[190] i", false,-1, 31,0);
        tracep->declArray(c+1787,"ascon_top lfst_inst genblk1 lfsr_data[191] mask", false,-1, 253,0);
        tracep->declBit(c+3464,"ascon_top lfst_inst genblk1 lfsr_data[191] data_reg", false,-1);
        tracep->declBus(c+3465,"ascon_top lfst_inst genblk1 lfsr_data[191] i", false,-1, 31,0);
        tracep->declArray(c+1795,"ascon_top lfst_inst genblk1 lfsr_data[192] mask", false,-1, 253,0);
        tracep->declBit(c+3466,"ascon_top lfst_inst genblk1 lfsr_data[192] data_reg", false,-1);
        tracep->declBus(c+3467,"ascon_top lfst_inst genblk1 lfsr_data[192] i", false,-1, 31,0);
        tracep->declArray(c+1803,"ascon_top lfst_inst genblk1 lfsr_data[193] mask", false,-1, 253,0);
        tracep->declBit(c+3468,"ascon_top lfst_inst genblk1 lfsr_data[193] data_reg", false,-1);
        tracep->declBus(c+3469,"ascon_top lfst_inst genblk1 lfsr_data[193] i", false,-1, 31,0);
        tracep->declArray(c+1811,"ascon_top lfst_inst genblk1 lfsr_data[194] mask", false,-1, 253,0);
        tracep->declBit(c+3470,"ascon_top lfst_inst genblk1 lfsr_data[194] data_reg", false,-1);
        tracep->declBus(c+3471,"ascon_top lfst_inst genblk1 lfsr_data[194] i", false,-1, 31,0);
        tracep->declArray(c+1819,"ascon_top lfst_inst genblk1 lfsr_data[195] mask", false,-1, 253,0);
        tracep->declBit(c+3472,"ascon_top lfst_inst genblk1 lfsr_data[195] data_reg", false,-1);
        tracep->declBus(c+3473,"ascon_top lfst_inst genblk1 lfsr_data[195] i", false,-1, 31,0);
        tracep->declArray(c+1827,"ascon_top lfst_inst genblk1 lfsr_data[196] mask", false,-1, 253,0);
        tracep->declBit(c+3474,"ascon_top lfst_inst genblk1 lfsr_data[196] data_reg", false,-1);
        tracep->declBus(c+3475,"ascon_top lfst_inst genblk1 lfsr_data[196] i", false,-1, 31,0);
        tracep->declArray(c+1835,"ascon_top lfst_inst genblk1 lfsr_data[197] mask", false,-1, 253,0);
        tracep->declBit(c+3476,"ascon_top lfst_inst genblk1 lfsr_data[197] data_reg", false,-1);
        tracep->declBus(c+3477,"ascon_top lfst_inst genblk1 lfsr_data[197] i", false,-1, 31,0);
        tracep->declArray(c+1843,"ascon_top lfst_inst genblk1 lfsr_data[198] mask", false,-1, 253,0);
        tracep->declBit(c+3478,"ascon_top lfst_inst genblk1 lfsr_data[198] data_reg", false,-1);
        tracep->declBus(c+3479,"ascon_top lfst_inst genblk1 lfsr_data[198] i", false,-1, 31,0);
        tracep->declArray(c+1851,"ascon_top lfst_inst genblk1 lfsr_data[199] mask", false,-1, 253,0);
        tracep->declBit(c+3480,"ascon_top lfst_inst genblk1 lfsr_data[199] data_reg", false,-1);
        tracep->declBus(c+3481,"ascon_top lfst_inst genblk1 lfsr_data[199] i", false,-1, 31,0);
        tracep->declArray(c+1859,"ascon_top lfst_inst genblk1 lfsr_data[200] mask", false,-1, 253,0);
        tracep->declBit(c+3482,"ascon_top lfst_inst genblk1 lfsr_data[200] data_reg", false,-1);
        tracep->declBus(c+3483,"ascon_top lfst_inst genblk1 lfsr_data[200] i", false,-1, 31,0);
        tracep->declArray(c+1867,"ascon_top lfst_inst genblk1 lfsr_data[201] mask", false,-1, 253,0);
        tracep->declBit(c+3484,"ascon_top lfst_inst genblk1 lfsr_data[201] data_reg", false,-1);
        tracep->declBus(c+3485,"ascon_top lfst_inst genblk1 lfsr_data[201] i", false,-1, 31,0);
        tracep->declArray(c+1875,"ascon_top lfst_inst genblk1 lfsr_data[202] mask", false,-1, 253,0);
        tracep->declBit(c+3486,"ascon_top lfst_inst genblk1 lfsr_data[202] data_reg", false,-1);
        tracep->declBus(c+3487,"ascon_top lfst_inst genblk1 lfsr_data[202] i", false,-1, 31,0);
        tracep->declArray(c+1883,"ascon_top lfst_inst genblk1 lfsr_data[203] mask", false,-1, 253,0);
        tracep->declBit(c+3488,"ascon_top lfst_inst genblk1 lfsr_data[203] data_reg", false,-1);
        tracep->declBus(c+3489,"ascon_top lfst_inst genblk1 lfsr_data[203] i", false,-1, 31,0);
        tracep->declArray(c+1891,"ascon_top lfst_inst genblk1 lfsr_data[204] mask", false,-1, 253,0);
        tracep->declBit(c+3490,"ascon_top lfst_inst genblk1 lfsr_data[204] data_reg", false,-1);
        tracep->declBus(c+3491,"ascon_top lfst_inst genblk1 lfsr_data[204] i", false,-1, 31,0);
        tracep->declArray(c+1899,"ascon_top lfst_inst genblk1 lfsr_data[205] mask", false,-1, 253,0);
        tracep->declBit(c+3492,"ascon_top lfst_inst genblk1 lfsr_data[205] data_reg", false,-1);
        tracep->declBus(c+3493,"ascon_top lfst_inst genblk1 lfsr_data[205] i", false,-1, 31,0);
        tracep->declArray(c+1907,"ascon_top lfst_inst genblk1 lfsr_data[206] mask", false,-1, 253,0);
        tracep->declBit(c+3494,"ascon_top lfst_inst genblk1 lfsr_data[206] data_reg", false,-1);
        tracep->declBus(c+3495,"ascon_top lfst_inst genblk1 lfsr_data[206] i", false,-1, 31,0);
        tracep->declArray(c+1915,"ascon_top lfst_inst genblk1 lfsr_data[207] mask", false,-1, 253,0);
        tracep->declBit(c+3496,"ascon_top lfst_inst genblk1 lfsr_data[207] data_reg", false,-1);
        tracep->declBus(c+3497,"ascon_top lfst_inst genblk1 lfsr_data[207] i", false,-1, 31,0);
        tracep->declArray(c+1923,"ascon_top lfst_inst genblk1 lfsr_data[208] mask", false,-1, 253,0);
        tracep->declBit(c+3498,"ascon_top lfst_inst genblk1 lfsr_data[208] data_reg", false,-1);
        tracep->declBus(c+3499,"ascon_top lfst_inst genblk1 lfsr_data[208] i", false,-1, 31,0);
        tracep->declArray(c+1931,"ascon_top lfst_inst genblk1 lfsr_data[209] mask", false,-1, 253,0);
        tracep->declBit(c+3500,"ascon_top lfst_inst genblk1 lfsr_data[209] data_reg", false,-1);
        tracep->declBus(c+3501,"ascon_top lfst_inst genblk1 lfsr_data[209] i", false,-1, 31,0);
        tracep->declArray(c+1939,"ascon_top lfst_inst genblk1 lfsr_data[210] mask", false,-1, 253,0);
        tracep->declBit(c+3502,"ascon_top lfst_inst genblk1 lfsr_data[210] data_reg", false,-1);
        tracep->declBus(c+3503,"ascon_top lfst_inst genblk1 lfsr_data[210] i", false,-1, 31,0);
        tracep->declArray(c+1947,"ascon_top lfst_inst genblk1 lfsr_data[211] mask", false,-1, 253,0);
        tracep->declBit(c+3504,"ascon_top lfst_inst genblk1 lfsr_data[211] data_reg", false,-1);
        tracep->declBus(c+3505,"ascon_top lfst_inst genblk1 lfsr_data[211] i", false,-1, 31,0);
        tracep->declArray(c+1955,"ascon_top lfst_inst genblk1 lfsr_data[212] mask", false,-1, 253,0);
        tracep->declBit(c+3506,"ascon_top lfst_inst genblk1 lfsr_data[212] data_reg", false,-1);
        tracep->declBus(c+3507,"ascon_top lfst_inst genblk1 lfsr_data[212] i", false,-1, 31,0);
        tracep->declArray(c+1963,"ascon_top lfst_inst genblk1 lfsr_data[213] mask", false,-1, 253,0);
        tracep->declBit(c+3508,"ascon_top lfst_inst genblk1 lfsr_data[213] data_reg", false,-1);
        tracep->declBus(c+3509,"ascon_top lfst_inst genblk1 lfsr_data[213] i", false,-1, 31,0);
        tracep->declArray(c+1971,"ascon_top lfst_inst genblk1 lfsr_data[214] mask", false,-1, 253,0);
        tracep->declBit(c+3510,"ascon_top lfst_inst genblk1 lfsr_data[214] data_reg", false,-1);
        tracep->declBus(c+3511,"ascon_top lfst_inst genblk1 lfsr_data[214] i", false,-1, 31,0);
        tracep->declArray(c+1979,"ascon_top lfst_inst genblk1 lfsr_data[215] mask", false,-1, 253,0);
        tracep->declBit(c+3512,"ascon_top lfst_inst genblk1 lfsr_data[215] data_reg", false,-1);
        tracep->declBus(c+3513,"ascon_top lfst_inst genblk1 lfsr_data[215] i", false,-1, 31,0);
        tracep->declArray(c+1987,"ascon_top lfst_inst genblk1 lfsr_data[216] mask", false,-1, 253,0);
        tracep->declBit(c+3514,"ascon_top lfst_inst genblk1 lfsr_data[216] data_reg", false,-1);
        tracep->declBus(c+3515,"ascon_top lfst_inst genblk1 lfsr_data[216] i", false,-1, 31,0);
        tracep->declArray(c+1995,"ascon_top lfst_inst genblk1 lfsr_data[217] mask", false,-1, 253,0);
        tracep->declBit(c+3516,"ascon_top lfst_inst genblk1 lfsr_data[217] data_reg", false,-1);
        tracep->declBus(c+3517,"ascon_top lfst_inst genblk1 lfsr_data[217] i", false,-1, 31,0);
        tracep->declArray(c+2003,"ascon_top lfst_inst genblk1 lfsr_data[218] mask", false,-1, 253,0);
        tracep->declBit(c+3518,"ascon_top lfst_inst genblk1 lfsr_data[218] data_reg", false,-1);
        tracep->declBus(c+3519,"ascon_top lfst_inst genblk1 lfsr_data[218] i", false,-1, 31,0);
        tracep->declArray(c+2011,"ascon_top lfst_inst genblk1 lfsr_data[219] mask", false,-1, 253,0);
        tracep->declBit(c+3520,"ascon_top lfst_inst genblk1 lfsr_data[219] data_reg", false,-1);
        tracep->declBus(c+3521,"ascon_top lfst_inst genblk1 lfsr_data[219] i", false,-1, 31,0);
        tracep->declArray(c+2019,"ascon_top lfst_inst genblk1 lfsr_data[220] mask", false,-1, 253,0);
        tracep->declBit(c+3522,"ascon_top lfst_inst genblk1 lfsr_data[220] data_reg", false,-1);
        tracep->declBus(c+3523,"ascon_top lfst_inst genblk1 lfsr_data[220] i", false,-1, 31,0);
        tracep->declArray(c+2027,"ascon_top lfst_inst genblk1 lfsr_data[221] mask", false,-1, 253,0);
        tracep->declBit(c+3524,"ascon_top lfst_inst genblk1 lfsr_data[221] data_reg", false,-1);
        tracep->declBus(c+3525,"ascon_top lfst_inst genblk1 lfsr_data[221] i", false,-1, 31,0);
        tracep->declArray(c+2035,"ascon_top lfst_inst genblk1 lfsr_data[222] mask", false,-1, 253,0);
        tracep->declBit(c+3526,"ascon_top lfst_inst genblk1 lfsr_data[222] data_reg", false,-1);
        tracep->declBus(c+3527,"ascon_top lfst_inst genblk1 lfsr_data[222] i", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top mealy_fsm clk", false,-1);
        tracep->declBit(c+5088,"ascon_top mealy_fsm reset_n", false,-1);
        tracep->declBit(c+5090,"ascon_top mealy_fsm start", false,-1);
        tracep->declBit(c+5095,"ascon_top mealy_fsm load_data", false,-1);
        tracep->declBit(c+5106,"ascon_top mealy_fsm valid_data_in", false,-1);
        tracep->declBit(c+5107,"ascon_top mealy_fsm last_block", false,-1);
        tracep->declBus(c+5108,"ascon_top mealy_fsm valid_bytes", false,-1, 4,0);
        tracep->declBit(c+5109,"ascon_top mealy_fsm EOT", false,-1);
        tracep->declBit(c+5125,"ascon_top mealy_fsm done", false,-1);
        tracep->declBit(c+5126,"ascon_top mealy_fsm tag_valid", false,-1);
        tracep->declBit(c+2044,"ascon_top mealy_fsm shift_en", false,-1);
        tracep->declBit(c+4211,"ascon_top mealy_fsm write_en", false,-1);
        tracep->declBit(c+2045,"ascon_top mealy_fsm shift_type", false,-1);
        tracep->declBit(c+2046,"ascon_top mealy_fsm last_cycle", false,-1);
        tracep->declBit(c+2047,"ascon_top mealy_fsm reg_key1_load", false,-1);
        tracep->declBit(c+2048,"ascon_top mealy_fsm reg_key2_load", false,-1);
        tracep->declBit(c+2049,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x3", false,-1);
        tracep->declBit(c+4212,"ascon_top mealy_fsm sel_mux_linear_diffusion_out_x4", false,-1);
        tracep->declBit(c+4213,"ascon_top mealy_fsm sel_init_load", false,-1);
        tracep->declBit(c+2050,"ascon_top mealy_fsm sel_masked_round", false,-1);
        tracep->declBit(c+4214,"ascon_top mealy_fsm sel_padding", false,-1);
        tracep->declBit(c+2051,"ascon_top mealy_fsm sel_xor_signal", false,-1);
        tracep->declBit(c+4215,"ascon_top mealy_fsm sel_absorb_data", false,-1);
        tracep->declBit(c+5120,"ascon_top mealy_fsm ciphertext_valid", false,-1);
        tracep->declBit(c+5131,"ascon_top mealy_fsm ready_for_data", false,-1);
        tracep->declBit(c+5132,"ascon_top mealy_fsm read_data", false,-1);
        tracep->declBit(c+2043,"ascon_top mealy_fsm extra_padding_ff", false,-1);
        tracep->declBus(c+2053,"ascon_top mealy_fsm bit_counter", false,-1, 2,0);
        tracep->declBus(c+2052,"ascon_top mealy_fsm round_counter", false,-1, 3,0);
        tracep->declBus(c+5136,"ascon_top mealy_fsm debug_state", false,-1, 4,0);
        tracep->declBit(c+2054,"ascon_top mealy_fsm shift_enable_sipo", false,-1);
        tracep->declBit(c+2055,"ascon_top mealy_fsm last_cycle_sipo", false,-1);
        tracep->declBit(c+2854,"ascon_top mealy_fsm rst_cnt_4", false,-1);
        tracep->declBit(c+4255,"ascon_top mealy_fsm extra_padding", false,-1);
        tracep->declBus(c+2855,"ascon_top mealy_fsm current_state", false,-1, 4,0);
        tracep->declBus(c+4256,"ascon_top mealy_fsm next_state", false,-1, 4,0);
        tracep->declBus(c+2856,"ascon_top mealy_fsm number_bits", false,-1, 2,0);
        tracep->declBus(c+2857,"ascon_top mealy_fsm number_round", false,-1, 3,0);
        tracep->declBit(c+4257,"ascon_top mealy_fsm last_block_process", false,-1);
        tracep->declBit(c+2858,"ascon_top mealy_fsm last_block_process_ff", false,-1);
        tracep->declBit(c+4258,"ascon_top mealy_fsm last_block_process_load", false,-1);
        tracep->declBit(c+4259,"ascon_top mealy_fsm extra_padding_load", false,-1);
        tracep->declBit(c+2859,"ascon_top mealy_fsm round_counter_enable", false,-1);
        tracep->declBit(c+4260,"ascon_top mealy_fsm rst_counter_round", false,-1);
        tracep->declBus(c+5219,"ascon_top mealy_fsm BYTE_W", false,-1, 31,0);
        tracep->declBus(c+5206,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+5207,"ascon_top mealy_fsm unnamedblk1 BIT_COUNTER_MAX", false,-1, 2,0);
        tracep->declBus(c+5206,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX_FULL", false,-1, 31,0);
        tracep->declBus(c+5207,"ascon_top mealy_fsm unnamedblk2 BIT_COUNTER_MAX", false,-1, 2,0);
        tracep->declBit(c+5087,"ascon_top key1_reg clk", false,-1);
        tracep->declBit(c+5088,"ascon_top key1_reg reset_n", false,-1);
        tracep->declBit(c+2047,"ascon_top key1_reg load", false,-1);
        tracep->declQuad(c+5091,"ascon_top key1_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+2116,"ascon_top key1_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+2116,"ascon_top key1_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top key2_reg clk", false,-1);
        tracep->declBit(c+5088,"ascon_top key2_reg reset_n", false,-1);
        tracep->declBit(c+2048,"ascon_top key2_reg load", false,-1);
        tracep->declQuad(c+5093,"ascon_top key2_reg data_in", false,-1, 63,0);
        tracep->declQuad(c+2118,"ascon_top key2_reg data_out", false,-1, 63,0);
        tracep->declQuad(c+2118,"ascon_top key2_reg reg_q", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top sipo_reg_x0_debug clk", false,-1);
        tracep->declBit(c+5088,"ascon_top sipo_reg_x0_debug reset_n", false,-1);
        tracep->declBit(c+2054,"ascon_top sipo_reg_x0_debug shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top sipo_reg_x0_debug shift_type", false,-1);
        tracep->declBit(c+2055,"ascon_top sipo_reg_x0_debug last_cycle", false,-1);
        tracep->declQuad(c+2860,"ascon_top sipo_reg_x0_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+2862,"ascon_top sipo_reg_x0_debug in_shifted_1bit", false,-1, 21,0);
        tracep->declQuad(c+2120,"ascon_top sipo_reg_x0_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+2120,"ascon_top sipo_reg_x0_debug state", false,-1, 63,0);
        tracep->declQuad(c+2863,"ascon_top sipo_reg_x0_debug next_state", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top sipo_reg_x1_debug clk", false,-1);
        tracep->declBit(c+5088,"ascon_top sipo_reg_x1_debug reset_n", false,-1);
        tracep->declBit(c+2054,"ascon_top sipo_reg_x1_debug shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top sipo_reg_x1_debug shift_type", false,-1);
        tracep->declBit(c+2055,"ascon_top sipo_reg_x1_debug last_cycle", false,-1);
        tracep->declQuad(c+2865,"ascon_top sipo_reg_x1_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+2867,"ascon_top sipo_reg_x1_debug in_shifted_1bit", false,-1, 21,0);
        tracep->declQuad(c+2122,"ascon_top sipo_reg_x1_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+2122,"ascon_top sipo_reg_x1_debug state", false,-1, 63,0);
        tracep->declQuad(c+2868,"ascon_top sipo_reg_x1_debug next_state", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top sipo_reg_x2_debug clk", false,-1);
        tracep->declBit(c+5088,"ascon_top sipo_reg_x2_debug reset_n", false,-1);
        tracep->declBit(c+2054,"ascon_top sipo_reg_x2_debug shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top sipo_reg_x2_debug shift_type", false,-1);
        tracep->declBit(c+2055,"ascon_top sipo_reg_x2_debug last_cycle", false,-1);
        tracep->declQuad(c+2870,"ascon_top sipo_reg_x2_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+2872,"ascon_top sipo_reg_x2_debug in_shifted_1bit", false,-1, 21,0);
        tracep->declQuad(c+2124,"ascon_top sipo_reg_x2_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+2124,"ascon_top sipo_reg_x2_debug state", false,-1, 63,0);
        tracep->declQuad(c+2873,"ascon_top sipo_reg_x2_debug next_state", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top sipo_reg_x3_debug clk", false,-1);
        tracep->declBit(c+5088,"ascon_top sipo_reg_x3_debug reset_n", false,-1);
        tracep->declBit(c+2054,"ascon_top sipo_reg_x3_debug shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top sipo_reg_x3_debug shift_type", false,-1);
        tracep->declBit(c+2055,"ascon_top sipo_reg_x3_debug last_cycle", false,-1);
        tracep->declQuad(c+2875,"ascon_top sipo_reg_x3_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+2877,"ascon_top sipo_reg_x3_debug in_shifted_1bit", false,-1, 21,0);
        tracep->declQuad(c+2126,"ascon_top sipo_reg_x3_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+2126,"ascon_top sipo_reg_x3_debug state", false,-1, 63,0);
        tracep->declQuad(c+2878,"ascon_top sipo_reg_x3_debug next_state", false,-1, 63,0);
        tracep->declBit(c+5087,"ascon_top sipo_reg_x4_debug clk", false,-1);
        tracep->declBit(c+5088,"ascon_top sipo_reg_x4_debug reset_n", false,-1);
        tracep->declBit(c+2054,"ascon_top sipo_reg_x4_debug shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top sipo_reg_x4_debug shift_type", false,-1);
        tracep->declBit(c+2055,"ascon_top sipo_reg_x4_debug last_cycle", false,-1);
        tracep->declQuad(c+2880,"ascon_top sipo_reg_x4_debug in_shifted_dplus1", false,-1, 63,0);
        tracep->declBus(c+2882,"ascon_top sipo_reg_x4_debug in_shifted_1bit", false,-1, 21,0);
        tracep->declQuad(c+2128,"ascon_top sipo_reg_x4_debug data_out", false,-1, 63,0);
        tracep->declQuad(c+2128,"ascon_top sipo_reg_x4_debug state", false,-1, 63,0);
        tracep->declQuad(c+2883,"ascon_top sipo_reg_x4_debug next_state", false,-1, 63,0);
        tracep->declArray(c+2163,"ascon_top share_creator data_in", false,-1, 109,0);
        tracep->declArray(c+3012,"ascon_top share_creator random_masks", false,-1, 219,0);
        tracep->declArray(c+4301,"ascon_top share_creator shares_out", false,-1, 329,0);
        tracep->declArray(c+4358,"ascon_top share_creator temp", false,-1, 109,0);
        tracep->declBus(c+5220,"ascon_top share_creator unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_state_regs[0] state_reg_share clk", false,-1);
        tracep->declBit(c+5088,"ascon_top gen_state_regs[0] state_reg_share reset_n", false,-1);
        tracep->declBit(c+4211,"ascon_top gen_state_regs[0] state_reg_share write_en", false,-1);
        tracep->declBit(c+2044,"ascon_top gen_state_regs[0] state_reg_share shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top gen_state_regs[0] state_reg_share shift_type", false,-1);
        tracep->declBit(c+2046,"ascon_top gen_state_regs[0] state_reg_share last_cycle", false,-1);
        tracep->declArray(c+4261,"ascon_top gen_state_regs[0] state_reg_share data_in", false,-1, 319,0);
        tracep->declArray(c+4475,"ascon_top gen_state_regs[0] state_reg_share in_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+4485,"ascon_top gen_state_regs[0] state_reg_share in_shifted_1bit", false,-1, 109,0);
        tracep->declArray(c+2885,"ascon_top gen_state_regs[0] state_reg_share out_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+2895,"ascon_top gen_state_regs[0] state_reg_share data_out", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+2905+i*2,"ascon_top gen_state_regs[0] state_reg_share state", true,(i+0), 63,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+4271+i*2,"ascon_top gen_state_regs[0] state_reg_share next_state", true,(i+0), 63,0);}}
        tracep->declBus(c+5221,"ascon_top gen_state_regs[0] state_reg_share gen_case2 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+2915,"ascon_top gen_state_regs[0] state_reg_share unnamedblk4 i", false,-1, 31,0);
        tracep->declBus(c+2916,"ascon_top gen_state_regs[0] state_reg_share unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_state_regs[0] state_reg_share gen_caseNoPArMAx unnamedblk6 i", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_state_regs[1] state_reg_share clk", false,-1);
        tracep->declBit(c+5088,"ascon_top gen_state_regs[1] state_reg_share reset_n", false,-1);
        tracep->declBit(c+5205,"ascon_top gen_state_regs[1] state_reg_share write_en", false,-1);
        tracep->declBit(c+2044,"ascon_top gen_state_regs[1] state_reg_share shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top gen_state_regs[1] state_reg_share shift_type", false,-1);
        tracep->declBit(c+2046,"ascon_top gen_state_regs[1] state_reg_share last_cycle", false,-1);
        tracep->declArray(c+4281,"ascon_top gen_state_regs[1] state_reg_share data_in", false,-1, 319,0);
        tracep->declArray(c+4489,"ascon_top gen_state_regs[1] state_reg_share in_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+4499,"ascon_top gen_state_regs[1] state_reg_share in_shifted_1bit", false,-1, 109,0);
        tracep->declArray(c+2917,"ascon_top gen_state_regs[1] state_reg_share out_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+2927,"ascon_top gen_state_regs[1] state_reg_share data_out", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+2937+i*2,"ascon_top gen_state_regs[1] state_reg_share state", true,(i+0), 63,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+4503+i*2,"ascon_top gen_state_regs[1] state_reg_share next_state", true,(i+0), 63,0);}}
        tracep->declBus(c+5221,"ascon_top gen_state_regs[1] state_reg_share gen_case2 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+2947,"ascon_top gen_state_regs[1] state_reg_share unnamedblk4 i", false,-1, 31,0);
        tracep->declBus(c+2948,"ascon_top gen_state_regs[1] state_reg_share unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_state_regs[1] state_reg_share gen_caseNoPArMAx unnamedblk6 i", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_state_regs[2] state_reg_share clk", false,-1);
        tracep->declBit(c+5088,"ascon_top gen_state_regs[2] state_reg_share reset_n", false,-1);
        tracep->declBit(c+5205,"ascon_top gen_state_regs[2] state_reg_share write_en", false,-1);
        tracep->declBit(c+2044,"ascon_top gen_state_regs[2] state_reg_share shift_en", false,-1);
        tracep->declBit(c+2045,"ascon_top gen_state_regs[2] state_reg_share shift_type", false,-1);
        tracep->declBit(c+2046,"ascon_top gen_state_regs[2] state_reg_share last_cycle", false,-1);
        tracep->declArray(c+4291,"ascon_top gen_state_regs[2] state_reg_share data_in", false,-1, 319,0);
        tracep->declArray(c+4513,"ascon_top gen_state_regs[2] state_reg_share in_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+4523,"ascon_top gen_state_regs[2] state_reg_share in_shifted_1bit", false,-1, 109,0);
        tracep->declArray(c+2949,"ascon_top gen_state_regs[2] state_reg_share out_shifted_dplus1", false,-1, 319,0);
        tracep->declArray(c+2959,"ascon_top gen_state_regs[2] state_reg_share data_out", false,-1, 319,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+2969+i*2,"ascon_top gen_state_regs[2] state_reg_share state", true,(i+0), 63,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+4527+i*2,"ascon_top gen_state_regs[2] state_reg_share next_state", true,(i+0), 63,0);}}
        tracep->declBus(c+5221,"ascon_top gen_state_regs[2] state_reg_share gen_case2 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+2979,"ascon_top gen_state_regs[2] state_reg_share unnamedblk4 i", false,-1, 31,0);
        tracep->declBus(c+2980,"ascon_top gen_state_regs[2] state_reg_share unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_state_regs[2] state_reg_share gen_caseNoPArMAx unnamedblk6 i", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[0] u_sbox clk", false,-1);
        tracep->declBus(c+3573,"ascon_top gen_cog gen_sbox[0] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5181,"ascon_top gen_cog gen_sbox[0] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[0] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3574,"ascon_top gen_cog gen_sbox[0] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4537,"ascon_top gen_cog gen_sbox[0] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3575+i*1,"ascon_top gen_cog gen_sbox[0] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4538,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4539,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4540,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4541,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4542,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4543,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4544,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4545,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4546,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4547,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4548,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4549,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4550,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4551,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4552,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3580,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3581,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3582,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3583,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3584,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3585,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3586,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3587,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3588,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3589,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3590,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3591,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3592,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3593,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3594,"ascon_top gen_cog gen_sbox[0] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3595+i*1,"ascon_top gen_cog gen_sbox[0] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4553+i*1,"ascon_top gen_cog gen_sbox[0] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4558,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4559,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4560,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4561,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3600,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3601,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[0] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[1] u_sbox clk", false,-1);
        tracep->declBus(c+3602,"ascon_top gen_cog gen_sbox[1] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5182,"ascon_top gen_cog gen_sbox[1] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[1] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3603,"ascon_top gen_cog gen_sbox[1] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4562,"ascon_top gen_cog gen_sbox[1] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3604+i*1,"ascon_top gen_cog gen_sbox[1] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4563,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4564,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4565,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4566,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4567,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4568,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4569,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4570,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4571,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4572,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4573,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4574,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4575,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4576,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4577,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3609,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3610,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3611,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3612,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3613,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3614,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3615,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3616,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3617,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3618,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3619,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3620,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3621,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3622,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3623,"ascon_top gen_cog gen_sbox[1] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3624+i*1,"ascon_top gen_cog gen_sbox[1] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4578+i*1,"ascon_top gen_cog gen_sbox[1] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4583,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4584,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4585,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4586,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3629,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3630,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[1] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[2] u_sbox clk", false,-1);
        tracep->declBus(c+3631,"ascon_top gen_cog gen_sbox[2] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5183,"ascon_top gen_cog gen_sbox[2] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[2] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3632,"ascon_top gen_cog gen_sbox[2] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4587,"ascon_top gen_cog gen_sbox[2] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3633+i*1,"ascon_top gen_cog gen_sbox[2] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4588,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4589,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4590,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4591,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4592,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4593,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4594,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4595,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4596,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4597,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4598,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4599,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4600,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4601,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4602,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3638,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3639,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3640,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3641,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3642,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3643,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3644,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3645,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3646,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3647,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3648,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3649,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3650,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3651,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3652,"ascon_top gen_cog gen_sbox[2] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3653+i*1,"ascon_top gen_cog gen_sbox[2] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4603+i*1,"ascon_top gen_cog gen_sbox[2] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4608,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4609,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4610,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4611,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3658,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3659,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[2] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[3] u_sbox clk", false,-1);
        tracep->declBus(c+3660,"ascon_top gen_cog gen_sbox[3] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5184,"ascon_top gen_cog gen_sbox[3] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[3] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3661,"ascon_top gen_cog gen_sbox[3] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4612,"ascon_top gen_cog gen_sbox[3] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3662+i*1,"ascon_top gen_cog gen_sbox[3] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4613,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4614,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4615,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4616,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4617,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4618,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4619,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4620,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4621,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4622,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4623,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4624,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4625,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4626,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4627,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3667,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3668,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3669,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3670,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3671,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3672,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3673,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3674,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3675,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3676,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3677,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3678,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3679,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3680,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3681,"ascon_top gen_cog gen_sbox[3] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3682+i*1,"ascon_top gen_cog gen_sbox[3] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4628+i*1,"ascon_top gen_cog gen_sbox[3] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4633,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4634,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4635,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4636,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3687,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3688,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[3] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[4] u_sbox clk", false,-1);
        tracep->declBus(c+3689,"ascon_top gen_cog gen_sbox[4] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5185,"ascon_top gen_cog gen_sbox[4] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[4] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3690,"ascon_top gen_cog gen_sbox[4] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4637,"ascon_top gen_cog gen_sbox[4] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3691+i*1,"ascon_top gen_cog gen_sbox[4] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4638,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4639,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4640,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4641,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4642,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4643,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4644,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4645,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4646,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4647,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4648,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4649,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4650,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4651,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4652,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3696,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3697,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3698,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3699,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3700,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3701,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3702,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3703,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3704,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3705,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3706,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3707,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3708,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3709,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3710,"ascon_top gen_cog gen_sbox[4] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3711+i*1,"ascon_top gen_cog gen_sbox[4] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4653+i*1,"ascon_top gen_cog gen_sbox[4] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4658,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4659,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4660,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4661,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3716,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3717,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[4] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[5] u_sbox clk", false,-1);
        tracep->declBus(c+3718,"ascon_top gen_cog gen_sbox[5] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5186,"ascon_top gen_cog gen_sbox[5] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[5] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3719,"ascon_top gen_cog gen_sbox[5] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4662,"ascon_top gen_cog gen_sbox[5] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3720+i*1,"ascon_top gen_cog gen_sbox[5] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4663,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4664,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4665,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4666,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4667,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4668,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4669,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4670,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4671,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4672,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4673,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4674,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4675,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4676,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4677,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3725,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3726,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3727,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3728,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3729,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3730,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3731,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3732,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3733,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3734,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3735,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3736,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3737,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3738,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3739,"ascon_top gen_cog gen_sbox[5] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3740+i*1,"ascon_top gen_cog gen_sbox[5] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4678+i*1,"ascon_top gen_cog gen_sbox[5] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4683,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4684,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4685,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4686,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3745,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3746,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[5] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[6] u_sbox clk", false,-1);
        tracep->declBus(c+3747,"ascon_top gen_cog gen_sbox[6] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5187,"ascon_top gen_cog gen_sbox[6] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[6] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3748,"ascon_top gen_cog gen_sbox[6] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4687,"ascon_top gen_cog gen_sbox[6] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3749+i*1,"ascon_top gen_cog gen_sbox[6] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4688,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4689,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4690,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4691,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4692,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4693,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4694,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4695,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4696,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4697,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4698,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4699,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4700,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4701,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4702,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3754,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3755,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3756,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3757,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3758,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3759,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3760,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3761,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3762,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3763,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3764,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3765,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3766,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3767,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3768,"ascon_top gen_cog gen_sbox[6] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3769+i*1,"ascon_top gen_cog gen_sbox[6] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4703+i*1,"ascon_top gen_cog gen_sbox[6] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4708,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4709,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4710,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4711,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3774,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3775,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[6] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[7] u_sbox clk", false,-1);
        tracep->declBus(c+3776,"ascon_top gen_cog gen_sbox[7] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5188,"ascon_top gen_cog gen_sbox[7] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[7] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3777,"ascon_top gen_cog gen_sbox[7] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4712,"ascon_top gen_cog gen_sbox[7] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3778+i*1,"ascon_top gen_cog gen_sbox[7] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4713,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4714,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4715,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4716,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4717,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4718,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4719,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4720,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4721,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4722,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4723,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4724,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4725,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4726,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4727,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3783,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3784,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3785,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3786,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3787,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3788,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3789,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3790,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3791,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3792,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3793,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3794,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3795,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3796,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3797,"ascon_top gen_cog gen_sbox[7] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3798+i*1,"ascon_top gen_cog gen_sbox[7] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4728+i*1,"ascon_top gen_cog gen_sbox[7] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4733,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4734,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4735,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4736,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3803,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3804,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[7] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[8] u_sbox clk", false,-1);
        tracep->declBus(c+3805,"ascon_top gen_cog gen_sbox[8] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5189,"ascon_top gen_cog gen_sbox[8] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[8] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3806,"ascon_top gen_cog gen_sbox[8] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4737,"ascon_top gen_cog gen_sbox[8] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3807+i*1,"ascon_top gen_cog gen_sbox[8] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4738,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4739,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4740,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4741,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4742,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4743,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4744,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4745,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4746,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4747,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4748,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4749,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4750,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4751,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4752,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3812,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3813,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3814,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3815,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3816,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3817,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3818,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3819,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3820,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3821,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3822,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3823,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3824,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3825,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3826,"ascon_top gen_cog gen_sbox[8] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3827+i*1,"ascon_top gen_cog gen_sbox[8] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4753+i*1,"ascon_top gen_cog gen_sbox[8] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4758,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4759,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4760,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4761,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3832,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3833,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[8] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[9] u_sbox clk", false,-1);
        tracep->declBus(c+3834,"ascon_top gen_cog gen_sbox[9] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5190,"ascon_top gen_cog gen_sbox[9] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[9] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3835,"ascon_top gen_cog gen_sbox[9] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4762,"ascon_top gen_cog gen_sbox[9] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3836+i*1,"ascon_top gen_cog gen_sbox[9] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4763,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4764,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4765,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4766,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4767,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4768,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4769,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4770,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4771,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4772,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4773,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4774,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4775,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4776,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4777,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3841,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3842,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3843,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3844,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3845,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3846,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3847,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3848,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3849,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3850,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3851,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3852,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3853,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3854,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3855,"ascon_top gen_cog gen_sbox[9] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3856+i*1,"ascon_top gen_cog gen_sbox[9] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4778+i*1,"ascon_top gen_cog gen_sbox[9] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4783,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4784,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4785,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4786,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3861,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3862,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[9] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[10] u_sbox clk", false,-1);
        tracep->declBus(c+3863,"ascon_top gen_cog gen_sbox[10] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5191,"ascon_top gen_cog gen_sbox[10] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[10] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3864,"ascon_top gen_cog gen_sbox[10] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4787,"ascon_top gen_cog gen_sbox[10] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3865+i*1,"ascon_top gen_cog gen_sbox[10] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4788,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4789,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4790,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4791,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4792,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4793,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4794,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4795,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4796,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4797,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4798,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4799,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4800,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4801,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4802,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3870,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3871,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3872,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3873,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3874,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3875,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3876,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3877,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3878,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3879,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3880,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3881,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3882,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3883,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3884,"ascon_top gen_cog gen_sbox[10] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3885+i*1,"ascon_top gen_cog gen_sbox[10] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4803+i*1,"ascon_top gen_cog gen_sbox[10] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4808,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4809,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4810,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4811,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3890,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3891,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[10] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[11] u_sbox clk", false,-1);
        tracep->declBus(c+3892,"ascon_top gen_cog gen_sbox[11] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5192,"ascon_top gen_cog gen_sbox[11] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[11] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3893,"ascon_top gen_cog gen_sbox[11] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4812,"ascon_top gen_cog gen_sbox[11] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3894+i*1,"ascon_top gen_cog gen_sbox[11] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4813,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4814,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4815,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4816,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4817,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4818,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4819,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4820,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4821,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4822,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4823,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4824,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4825,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4826,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4827,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3899,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3900,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3901,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3902,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3903,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3904,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3905,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3906,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3907,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3908,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3909,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3910,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3911,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3912,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3913,"ascon_top gen_cog gen_sbox[11] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3914+i*1,"ascon_top gen_cog gen_sbox[11] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4828+i*1,"ascon_top gen_cog gen_sbox[11] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4833,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4834,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4835,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4836,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3919,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3920,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[11] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[12] u_sbox clk", false,-1);
        tracep->declBus(c+3921,"ascon_top gen_cog gen_sbox[12] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5193,"ascon_top gen_cog gen_sbox[12] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[12] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3922,"ascon_top gen_cog gen_sbox[12] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4837,"ascon_top gen_cog gen_sbox[12] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3923+i*1,"ascon_top gen_cog gen_sbox[12] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4838,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4839,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4840,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4841,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4842,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4843,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4844,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4845,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4846,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4847,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4848,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4849,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4850,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4851,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4852,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3928,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3929,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3930,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3931,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3932,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3933,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3934,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3935,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3936,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3937,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3938,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3939,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3940,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3941,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3942,"ascon_top gen_cog gen_sbox[12] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3943+i*1,"ascon_top gen_cog gen_sbox[12] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4853+i*1,"ascon_top gen_cog gen_sbox[12] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4858,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4859,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4860,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4861,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3948,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3949,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[12] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[13] u_sbox clk", false,-1);
        tracep->declBus(c+3950,"ascon_top gen_cog gen_sbox[13] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5194,"ascon_top gen_cog gen_sbox[13] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[13] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3951,"ascon_top gen_cog gen_sbox[13] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4862,"ascon_top gen_cog gen_sbox[13] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3952+i*1,"ascon_top gen_cog gen_sbox[13] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4863,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4864,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4865,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4866,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4867,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4868,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4869,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4870,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4871,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4872,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4873,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4874,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4875,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4876,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4877,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3957,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3958,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3959,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3960,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3961,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3962,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3963,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3964,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3965,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3966,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3967,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3968,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3969,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3970,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+3971,"ascon_top gen_cog gen_sbox[13] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3972+i*1,"ascon_top gen_cog gen_sbox[13] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4878+i*1,"ascon_top gen_cog gen_sbox[13] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4883,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4884,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4885,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4886,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+3977,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+3978,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[13] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[14] u_sbox clk", false,-1);
        tracep->declBus(c+3979,"ascon_top gen_cog gen_sbox[14] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5195,"ascon_top gen_cog gen_sbox[14] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[14] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+3980,"ascon_top gen_cog gen_sbox[14] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4887,"ascon_top gen_cog gen_sbox[14] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+3981+i*1,"ascon_top gen_cog gen_sbox[14] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4888,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4889,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4890,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4891,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4892,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4893,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4894,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4895,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4896,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4897,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4898,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4899,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4900,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4901,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4902,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+3986,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+3987,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+3988,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+3989,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+3990,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+3991,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+3992,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+3993,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+3994,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+3995,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+3996,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+3997,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+3998,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+3999,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4000,"ascon_top gen_cog gen_sbox[14] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4001+i*1,"ascon_top gen_cog gen_sbox[14] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4903+i*1,"ascon_top gen_cog gen_sbox[14] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4908,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4909,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4910,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4911,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4006,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4007,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[14] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[15] u_sbox clk", false,-1);
        tracep->declBus(c+4008,"ascon_top gen_cog gen_sbox[15] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5196,"ascon_top gen_cog gen_sbox[15] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[15] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4009,"ascon_top gen_cog gen_sbox[15] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4912,"ascon_top gen_cog gen_sbox[15] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4010+i*1,"ascon_top gen_cog gen_sbox[15] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4913,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4914,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4915,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4916,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4917,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4918,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4919,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4920,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4921,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4922,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4923,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4924,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4925,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4926,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4927,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4015,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4016,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4017,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4018,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4019,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4020,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4021,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4022,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4023,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4024,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4025,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4026,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4027,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4028,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4029,"ascon_top gen_cog gen_sbox[15] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4030+i*1,"ascon_top gen_cog gen_sbox[15] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4928+i*1,"ascon_top gen_cog gen_sbox[15] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4933,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4934,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4935,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4936,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4035,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4036,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[15] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[16] u_sbox clk", false,-1);
        tracep->declBus(c+4037,"ascon_top gen_cog gen_sbox[16] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5197,"ascon_top gen_cog gen_sbox[16] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[16] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4038,"ascon_top gen_cog gen_sbox[16] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4937,"ascon_top gen_cog gen_sbox[16] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4039+i*1,"ascon_top gen_cog gen_sbox[16] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4938,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4939,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4940,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4941,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4942,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4943,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4944,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4945,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4946,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4947,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4948,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4949,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4950,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4951,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4952,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4044,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4045,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4046,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4047,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4048,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4049,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4050,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4051,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4052,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4053,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4054,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4055,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4056,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4057,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4058,"ascon_top gen_cog gen_sbox[16] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4059+i*1,"ascon_top gen_cog gen_sbox[16] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4953+i*1,"ascon_top gen_cog gen_sbox[16] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4958,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4959,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4960,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4961,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4064,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4065,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[16] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[17] u_sbox clk", false,-1);
        tracep->declBus(c+4066,"ascon_top gen_cog gen_sbox[17] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5198,"ascon_top gen_cog gen_sbox[17] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[17] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4067,"ascon_top gen_cog gen_sbox[17] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4962,"ascon_top gen_cog gen_sbox[17] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4068+i*1,"ascon_top gen_cog gen_sbox[17] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4963,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4964,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4965,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4966,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4967,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4968,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4969,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4970,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4971,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4972,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4973,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4974,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4975,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4976,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4977,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4073,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4074,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4075,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4076,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4077,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4078,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4079,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4080,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4081,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4082,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4083,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4084,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4085,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4086,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4087,"ascon_top gen_cog gen_sbox[17] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4088+i*1,"ascon_top gen_cog gen_sbox[17] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4978+i*1,"ascon_top gen_cog gen_sbox[17] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+4983,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+4984,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+4985,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+4986,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4093,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4094,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[17] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[18] u_sbox clk", false,-1);
        tracep->declBus(c+4095,"ascon_top gen_cog gen_sbox[18] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5199,"ascon_top gen_cog gen_sbox[18] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[18] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4096,"ascon_top gen_cog gen_sbox[18] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+4987,"ascon_top gen_cog gen_sbox[18] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4097+i*1,"ascon_top gen_cog gen_sbox[18] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+4988,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4989,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4990,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4991,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4992,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4993,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4994,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4995,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4996,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4997,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4998,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4999,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+5000,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+5001,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+5002,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4102,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4103,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4104,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4105,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4106,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4107,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4108,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4109,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4110,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4111,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4112,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4113,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4114,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4115,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4116,"ascon_top gen_cog gen_sbox[18] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4117+i*1,"ascon_top gen_cog gen_sbox[18] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5003+i*1,"ascon_top gen_cog gen_sbox[18] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5008,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+5009,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+5010,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+5011,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4122,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4123,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[18] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[19] u_sbox clk", false,-1);
        tracep->declBus(c+4124,"ascon_top gen_cog gen_sbox[19] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5200,"ascon_top gen_cog gen_sbox[19] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[19] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4125,"ascon_top gen_cog gen_sbox[19] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+5012,"ascon_top gen_cog gen_sbox[19] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4126+i*1,"ascon_top gen_cog gen_sbox[19] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+5013,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+5014,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+5015,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+5016,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+5017,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+5018,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+5019,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+5020,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+5021,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+5022,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+5023,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+5024,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+5025,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+5026,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+5027,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4131,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4132,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4133,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4134,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4135,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4136,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4137,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4138,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4139,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4140,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4141,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4142,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4143,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4144,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4145,"ascon_top gen_cog gen_sbox[19] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4146+i*1,"ascon_top gen_cog gen_sbox[19] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5028+i*1,"ascon_top gen_cog gen_sbox[19] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5033,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+5034,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+5035,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+5036,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4151,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4152,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[19] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[20] u_sbox clk", false,-1);
        tracep->declBus(c+4153,"ascon_top gen_cog gen_sbox[20] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5201,"ascon_top gen_cog gen_sbox[20] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[20] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4154,"ascon_top gen_cog gen_sbox[20] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+5037,"ascon_top gen_cog gen_sbox[20] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4155+i*1,"ascon_top gen_cog gen_sbox[20] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+5038,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+5039,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+5040,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+5041,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+5042,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+5043,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+5044,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+5045,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+5046,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+5047,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+5048,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+5049,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+5050,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+5051,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+5052,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4160,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4161,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4162,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4163,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4164,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4165,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4166,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4167,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4168,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4169,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4170,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4171,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4172,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4173,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4174,"ascon_top gen_cog gen_sbox[20] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4175+i*1,"ascon_top gen_cog gen_sbox[20] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5053+i*1,"ascon_top gen_cog gen_sbox[20] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5058,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+5059,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+5060,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+5061,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4180,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4181,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[20] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBit(c+5087,"ascon_top gen_cog gen_sbox[21] u_sbox clk", false,-1);
        tracep->declBus(c+4182,"ascon_top gen_cog gen_sbox[21] u_sbox x_in", false,-1, 14,0);
        tracep->declBus(c+5202,"ascon_top gen_cog gen_sbox[21] u_sbox fresh_r", false,-1, 2,0);
        tracep->declBit(c+2050,"ascon_top gen_cog gen_sbox[21] u_sbox sel_masked_round", false,-1);
        tracep->declBus(c+4183,"ascon_top gen_cog gen_sbox[21] u_sbox x_out", false,-1, 14,0);
        tracep->declBus(c+5062,"ascon_top gen_cog gen_sbox[21] u_sbox x_out_noMask", false,-1, 14,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4184+i*1,"ascon_top gen_cog gen_sbox[21] u_sbox x", true,(i+0), 2,0);}}
        tracep->declBus(c+5063,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(0)(0)", false,-1, 2,0);
        tracep->declBus(c+5064,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(0)(1)", false,-1, 2,0);
        tracep->declBus(c+5065,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(0)(2)", false,-1, 2,0);
        tracep->declBus(c+5066,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(1)(0)", false,-1, 2,0);
        tracep->declBus(c+5067,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(1)(1)", false,-1, 2,0);
        tracep->declBus(c+5068,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(1)(2)", false,-1, 2,0);
        tracep->declBus(c+5069,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(2)(0)", false,-1, 2,0);
        tracep->declBus(c+5070,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(2)(1)", false,-1, 2,0);
        tracep->declBus(c+5071,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(2)(2)", false,-1, 2,0);
        tracep->declBus(c+5072,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(3)(0)", false,-1, 2,0);
        tracep->declBus(c+5073,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(3)(1)", false,-1, 2,0);
        tracep->declBus(c+5074,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(3)(2)", false,-1, 2,0);
        tracep->declBus(c+5075,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(4)(0)", false,-1, 2,0);
        tracep->declBus(c+5076,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(4)(1)", false,-1, 2,0);
        tracep->declBus(c+5077,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_bank(4)(2)", false,-1, 2,0);
        tracep->declBus(c+4189,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(0)(0)", false,-1, 2,0);
        tracep->declBus(c+4190,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(0)(1)", false,-1, 2,0);
        tracep->declBus(c+4191,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(0)(2)", false,-1, 2,0);
        tracep->declBus(c+4192,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(1)(0)", false,-1, 2,0);
        tracep->declBus(c+4193,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(1)(1)", false,-1, 2,0);
        tracep->declBus(c+4194,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(1)(2)", false,-1, 2,0);
        tracep->declBus(c+4195,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(2)(0)", false,-1, 2,0);
        tracep->declBus(c+4196,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(2)(1)", false,-1, 2,0);
        tracep->declBus(c+4197,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(2)(2)", false,-1, 2,0);
        tracep->declBus(c+4198,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(3)(0)", false,-1, 2,0);
        tracep->declBus(c+4199,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(3)(1)", false,-1, 2,0);
        tracep->declBus(c+4200,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(3)(2)", false,-1, 2,0);
        tracep->declBus(c+4201,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(4)(0)", false,-1, 2,0);
        tracep->declBus(c+4202,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(4)(1)", false,-1, 2,0);
        tracep->declBus(c+4203,"ascon_top gen_cog gen_sbox[21] u_sbox and_result_reg(4)(2)", false,-1, 2,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+4204+i*1,"ascon_top gen_cog gen_sbox[21] u_sbox y", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+5078+i*1,"ascon_top gen_cog gen_sbox[21] u_sbox y_noMask", true,(i+0), 2,0);}}
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 fresh_idx", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+5083,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xi", false,-1, 2,0);
        tracep->declBus(c+5084,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox1", false,-1, 2,0);
        tracep->declBus(c+5085,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 xiprox2", false,-1, 2,0);
        tracep->declBus(c+5086,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 not_xiprox1", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 j", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk1 unnamedblk2 unnamedblk3 unnamedblk4 unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+4209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+5221,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+4210,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 temp", false,-1, 2,0);
        tracep->declBus(c+5209,"ascon_top gen_cog gen_sbox[21] u_sbox unnamedblk9 unnamedblk10 unnamedblk11 unnamedblk12 k", false,-1, 31,0);
        tracep->declBus(c+5222,"ascon_params d", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_params PAR", false,-1, 31,0);
        tracep->declBus(c+5223,"ascon_params COL_SIZE", false,-1, 31,0);
        tracep->declBus(c+5224,"ascon_params WORD_SIZE", false,-1, 31,0);
        tracep->declBus(c+5225,"ascon_params STATE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+5206,"ascon_params num_shares", false,-1, 31,0);
        tracep->declBus(c+5210,"ascon_params SHIFT_PAR", false,-1, 31,0);
        tracep->declBus(c+5224,"ascon_params SHIFT_PAR_D_PLUS_1", false,-1, 31,0);
        tracep->declBus(c+5208,"ascon_params SHIFT_PAR_LAST", false,-1, 31,0);
        tracep->declBus(c+5224,"ascon_params SHIFT_PAR_D_PLUS_1_LAST", false,-1, 31,0);
        tracep->declBus(c+5226,"ascon_params NUMBER_BIT_MASK", false,-1, 31,0);
        tracep->declBus(c+5227,"ascon_params NUMBER_BIT_NOMASK", false,-1, 31,0);
        tracep->declBus(c+5203,"ascon_params SHIFT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+5203,"ascon_params PADDED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+5228,"ascon_params RAND_WIDTH", false,-1, 31,0);
        tracep->declBus(c+5228,"ascon_params DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+5229,"ascon_params REVERSE", false,-1);
        tracep->declBus(c+5230,"ascon_params LFSR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+5231,"ascon_params LFSR_POLY", false,-1, 30,0);
        tracep->declBus(c+5232,"ascon_params LFSR_FEED_FORWARD", false,-1, 31,0);
        tracep->declBus(c+5233,"ascon_params STYLE_AUTO", false,-1, 31,0);
        tracep->declBus(c+5227,"ascon_params STYLE_LOOP", false,-1, 31,0);
        tracep->declBus(c+5222,"ascon_params STYLE_REDUCTION", false,-1, 31,0);
        tracep->declBus(c+5233,"ascon_params CFG_FIBONACCI", false,-1, 31,0);
        tracep->declBus(c+5227,"ascon_params CFG_GALOIS", false,-1, 31,0);
        tracep->declBus(c+5227,"ascon_params STYLE", false,-1, 31,0);
        tracep->declBus(c+5233,"ascon_params LFSR_CONFIG", false,-1, 31,0);
    }
}

void Vascon_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vascon_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vascon_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vascon_top___024root__traceRegister(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vascon_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vascon_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vascon_top___024root__traceCleanup, vlSelf);
    }
}

void Vascon_top___024root__traceFullSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vascon_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vascon_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vascon_top___024root__traceFullSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp48421;
    VlWide<4>/*127:0*/ __Vtemp48424;
    VlWide<10>/*319:0*/ __Vtemp48428;
    VlWide<7>/*223:0*/ __Vtemp48431;
    VlWide<10>/*319:0*/ __Vtemp48432;
    VlWide<10>/*319:0*/ __Vtemp48433;
    VlWide<10>/*319:0*/ __Vtemp48434;
    VlWide<10>/*319:0*/ __Vtemp48438;
    VlWide<4>/*127:0*/ __Vtemp48439;
    VlWide<10>/*319:0*/ __Vtemp48440;
    VlWide<4>/*127:0*/ __Vtemp48441;
    VlWide<10>/*319:0*/ __Vtemp48442;
    VlWide<4>/*127:0*/ __Vtemp48443;
    VlWide<10>/*319:0*/ __Vtemp48447;
    VlWide<7>/*223:0*/ __Vtemp48448;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ascon_top__DOT__rotations_a[0]),32);
        tracep->fullIData(oldp+2,(vlSelf->ascon_top__DOT__rotations_a[1]),32);
        tracep->fullIData(oldp+3,(vlSelf->ascon_top__DOT__rotations_a[2]),32);
        tracep->fullIData(oldp+4,(vlSelf->ascon_top__DOT__rotations_a[3]),32);
        tracep->fullIData(oldp+5,(vlSelf->ascon_top__DOT__rotations_a[4]),32);
        tracep->fullIData(oldp+6,(vlSelf->ascon_top__DOT__rotations_b[0]),32);
        tracep->fullIData(oldp+7,(vlSelf->ascon_top__DOT__rotations_b[1]),32);
        tracep->fullIData(oldp+8,(vlSelf->ascon_top__DOT__rotations_b[2]),32);
        tracep->fullIData(oldp+9,(vlSelf->ascon_top__DOT__rotations_b[3]),32);
        tracep->fullIData(oldp+10,(vlSelf->ascon_top__DOT__rotations_b[4]),32);
        tracep->fullWData(oldp+11,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),254);
        tracep->fullWData(oldp+19,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),254);
        tracep->fullWData(oldp+27,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),254);
        tracep->fullWData(oldp+35,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),254);
        tracep->fullWData(oldp+43,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),254);
        tracep->fullWData(oldp+51,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),254);
        tracep->fullWData(oldp+59,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),254);
        tracep->fullWData(oldp+67,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),254);
        tracep->fullWData(oldp+75,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),254);
        tracep->fullWData(oldp+83,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),254);
        tracep->fullWData(oldp+91,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),254);
        tracep->fullWData(oldp+99,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),254);
        tracep->fullWData(oldp+107,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),254);
        tracep->fullWData(oldp+115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),254);
        tracep->fullWData(oldp+123,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),254);
        tracep->fullWData(oldp+131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),254);
        tracep->fullWData(oldp+139,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),254);
        tracep->fullWData(oldp+147,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),254);
        tracep->fullWData(oldp+155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),254);
        tracep->fullWData(oldp+163,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),254);
        tracep->fullWData(oldp+171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),254);
        tracep->fullWData(oldp+179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),254);
        tracep->fullWData(oldp+187,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),254);
        tracep->fullWData(oldp+195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),254);
        tracep->fullWData(oldp+203,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),254);
        tracep->fullWData(oldp+211,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),254);
        tracep->fullWData(oldp+219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),254);
        tracep->fullWData(oldp+227,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),254);
        tracep->fullWData(oldp+235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),254);
        tracep->fullWData(oldp+243,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),254);
        tracep->fullWData(oldp+251,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),254);
        tracep->fullWData(oldp+259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),254);
        tracep->fullWData(oldp+267,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),254);
        tracep->fullWData(oldp+275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),254);
        tracep->fullWData(oldp+283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),254);
        tracep->fullWData(oldp+291,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),254);
        tracep->fullWData(oldp+299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),254);
        tracep->fullWData(oldp+307,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),254);
        tracep->fullWData(oldp+315,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),254);
        tracep->fullWData(oldp+323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),254);
        tracep->fullWData(oldp+331,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),254);
        tracep->fullWData(oldp+339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),254);
        tracep->fullWData(oldp+347,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),254);
        tracep->fullWData(oldp+355,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),254);
        tracep->fullWData(oldp+363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),254);
        tracep->fullWData(oldp+371,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),254);
        tracep->fullWData(oldp+379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),254);
        tracep->fullWData(oldp+387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),254);
        tracep->fullWData(oldp+395,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),254);
        tracep->fullWData(oldp+403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),254);
        tracep->fullWData(oldp+411,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),254);
        tracep->fullWData(oldp+419,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),254);
        tracep->fullWData(oldp+427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),254);
        tracep->fullWData(oldp+435,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),254);
        tracep->fullWData(oldp+443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),254);
        tracep->fullWData(oldp+451,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),254);
        tracep->fullWData(oldp+459,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),254);
        tracep->fullWData(oldp+467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),254);
        tracep->fullWData(oldp+475,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),254);
        tracep->fullWData(oldp+483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),254);
        tracep->fullWData(oldp+491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),254);
        tracep->fullWData(oldp+499,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),254);
        tracep->fullWData(oldp+507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),254);
        tracep->fullWData(oldp+515,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),254);
        tracep->fullWData(oldp+523,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),254);
        tracep->fullWData(oldp+531,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),254);
        tracep->fullWData(oldp+539,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),254);
        tracep->fullWData(oldp+547,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),254);
        tracep->fullWData(oldp+555,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),254);
        tracep->fullWData(oldp+563,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),254);
        tracep->fullWData(oldp+571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),254);
        tracep->fullWData(oldp+579,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),254);
        tracep->fullWData(oldp+587,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),254);
        tracep->fullWData(oldp+595,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),254);
        tracep->fullWData(oldp+603,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),254);
        tracep->fullWData(oldp+611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),254);
        tracep->fullWData(oldp+619,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),254);
        tracep->fullWData(oldp+627,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),254);
        tracep->fullWData(oldp+635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),254);
        tracep->fullWData(oldp+643,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),254);
        tracep->fullWData(oldp+651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),254);
        tracep->fullWData(oldp+659,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),254);
        tracep->fullWData(oldp+667,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),254);
        tracep->fullWData(oldp+675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),254);
        tracep->fullWData(oldp+683,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),254);
        tracep->fullWData(oldp+691,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),254);
        tracep->fullWData(oldp+699,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),254);
        tracep->fullWData(oldp+707,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),254);
        tracep->fullWData(oldp+715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),254);
        tracep->fullWData(oldp+723,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),254);
        tracep->fullWData(oldp+731,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),254);
        tracep->fullWData(oldp+739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),254);
        tracep->fullWData(oldp+747,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),254);
        tracep->fullWData(oldp+755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),254);
        tracep->fullWData(oldp+763,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),254);
        tracep->fullWData(oldp+771,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),254);
        tracep->fullWData(oldp+779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),254);
        tracep->fullWData(oldp+787,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),254);
        tracep->fullWData(oldp+795,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),254);
        tracep->fullWData(oldp+803,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),254);
        tracep->fullWData(oldp+811,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),254);
        tracep->fullWData(oldp+819,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),254);
        tracep->fullWData(oldp+827,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),254);
        tracep->fullWData(oldp+835,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),254);
        tracep->fullWData(oldp+843,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),254);
        tracep->fullWData(oldp+851,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),254);
        tracep->fullWData(oldp+859,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),254);
        tracep->fullWData(oldp+867,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),254);
        tracep->fullWData(oldp+875,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),254);
        tracep->fullWData(oldp+883,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),254);
        tracep->fullWData(oldp+891,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),254);
        tracep->fullWData(oldp+899,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),254);
        tracep->fullWData(oldp+907,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),254);
        tracep->fullWData(oldp+915,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),254);
        tracep->fullWData(oldp+923,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),254);
        tracep->fullWData(oldp+931,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),254);
        tracep->fullWData(oldp+939,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),254);
        tracep->fullWData(oldp+947,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),254);
        tracep->fullWData(oldp+955,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),254);
        tracep->fullWData(oldp+963,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),254);
        tracep->fullWData(oldp+971,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),254);
        tracep->fullWData(oldp+979,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),254);
        tracep->fullWData(oldp+987,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),254);
        tracep->fullWData(oldp+995,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),254);
        tracep->fullWData(oldp+1003,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),254);
        tracep->fullWData(oldp+1011,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),254);
        tracep->fullWData(oldp+1019,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),254);
        tracep->fullWData(oldp+1027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__mask),254);
        tracep->fullWData(oldp+1035,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__mask),254);
        tracep->fullWData(oldp+1043,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__mask),254);
        tracep->fullWData(oldp+1051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__mask),254);
        tracep->fullWData(oldp+1059,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__mask),254);
        tracep->fullWData(oldp+1067,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__mask),254);
        tracep->fullWData(oldp+1075,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__mask),254);
        tracep->fullWData(oldp+1083,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__mask),254);
        tracep->fullWData(oldp+1091,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__mask),254);
        tracep->fullWData(oldp+1099,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__mask),254);
        tracep->fullWData(oldp+1107,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__mask),254);
        tracep->fullWData(oldp+1115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__mask),254);
        tracep->fullWData(oldp+1123,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__mask),254);
        tracep->fullWData(oldp+1131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__mask),254);
        tracep->fullWData(oldp+1139,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__mask),254);
        tracep->fullWData(oldp+1147,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__mask),254);
        tracep->fullWData(oldp+1155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__mask),254);
        tracep->fullWData(oldp+1163,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__mask),254);
        tracep->fullWData(oldp+1171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__mask),254);
        tracep->fullWData(oldp+1179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__mask),254);
        tracep->fullWData(oldp+1187,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__mask),254);
        tracep->fullWData(oldp+1195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__mask),254);
        tracep->fullWData(oldp+1203,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__mask),254);
        tracep->fullWData(oldp+1211,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__mask),254);
        tracep->fullWData(oldp+1219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__mask),254);
        tracep->fullWData(oldp+1227,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__mask),254);
        tracep->fullWData(oldp+1235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__mask),254);
        tracep->fullWData(oldp+1243,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__mask),254);
        tracep->fullWData(oldp+1251,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__mask),254);
        tracep->fullWData(oldp+1259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__mask),254);
        tracep->fullWData(oldp+1267,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__mask),254);
        tracep->fullWData(oldp+1275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__mask),254);
        tracep->fullWData(oldp+1283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__mask),254);
        tracep->fullWData(oldp+1291,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__mask),254);
        tracep->fullWData(oldp+1299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__mask),254);
        tracep->fullWData(oldp+1307,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__mask),254);
        tracep->fullWData(oldp+1315,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__mask),254);
        tracep->fullWData(oldp+1323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__mask),254);
        tracep->fullWData(oldp+1331,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__mask),254);
        tracep->fullWData(oldp+1339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__mask),254);
        tracep->fullWData(oldp+1347,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__mask),254);
        tracep->fullWData(oldp+1355,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__mask),254);
        tracep->fullWData(oldp+1363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__mask),254);
        tracep->fullWData(oldp+1371,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__mask),254);
        tracep->fullWData(oldp+1379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__mask),254);
        tracep->fullWData(oldp+1387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__mask),254);
        tracep->fullWData(oldp+1395,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__mask),254);
        tracep->fullWData(oldp+1403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__mask),254);
        tracep->fullWData(oldp+1411,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__mask),254);
        tracep->fullWData(oldp+1419,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__mask),254);
        tracep->fullWData(oldp+1427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__mask),254);
        tracep->fullWData(oldp+1435,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__mask),254);
        tracep->fullWData(oldp+1443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__mask),254);
        tracep->fullWData(oldp+1451,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__mask),254);
        tracep->fullWData(oldp+1459,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__mask),254);
        tracep->fullWData(oldp+1467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__mask),254);
        tracep->fullWData(oldp+1475,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__mask),254);
        tracep->fullWData(oldp+1483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__mask),254);
        tracep->fullWData(oldp+1491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__mask),254);
        tracep->fullWData(oldp+1499,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__mask),254);
        tracep->fullWData(oldp+1507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__mask),254);
        tracep->fullWData(oldp+1515,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__mask),254);
        tracep->fullWData(oldp+1523,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__mask),254);
        tracep->fullWData(oldp+1531,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__mask),254);
        tracep->fullWData(oldp+1539,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__mask),254);
        tracep->fullWData(oldp+1547,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__mask),254);
        tracep->fullWData(oldp+1555,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__mask),254);
        tracep->fullWData(oldp+1563,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__mask),254);
        tracep->fullWData(oldp+1571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__mask),254);
        tracep->fullWData(oldp+1579,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__mask),254);
        tracep->fullWData(oldp+1587,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__mask),254);
        tracep->fullWData(oldp+1595,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__mask),254);
        tracep->fullWData(oldp+1603,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__mask),254);
        tracep->fullWData(oldp+1611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__mask),254);
        tracep->fullWData(oldp+1619,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__mask),254);
        tracep->fullWData(oldp+1627,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__mask),254);
        tracep->fullWData(oldp+1635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__mask),254);
        tracep->fullWData(oldp+1643,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__mask),254);
        tracep->fullWData(oldp+1651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__mask),254);
        tracep->fullWData(oldp+1659,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__mask),254);
        tracep->fullWData(oldp+1667,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__mask),254);
        tracep->fullWData(oldp+1675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask),254);
        tracep->fullWData(oldp+1683,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask),254);
        tracep->fullWData(oldp+1691,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask),254);
        tracep->fullWData(oldp+1699,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask),254);
        tracep->fullWData(oldp+1707,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask),254);
        tracep->fullWData(oldp+1715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask),254);
        tracep->fullWData(oldp+1723,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask),254);
        tracep->fullWData(oldp+1731,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask),254);
        tracep->fullWData(oldp+1739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask),254);
        tracep->fullWData(oldp+1747,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask),254);
        tracep->fullWData(oldp+1755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask),254);
        tracep->fullWData(oldp+1763,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask),254);
        tracep->fullWData(oldp+1771,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask),254);
        tracep->fullWData(oldp+1779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask),254);
        tracep->fullWData(oldp+1787,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask),254);
        tracep->fullWData(oldp+1795,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask),254);
        tracep->fullWData(oldp+1803,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask),254);
        tracep->fullWData(oldp+1811,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask),254);
        tracep->fullWData(oldp+1819,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask),254);
        tracep->fullWData(oldp+1827,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask),254);
        tracep->fullWData(oldp+1835,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask),254);
        tracep->fullWData(oldp+1843,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask),254);
        tracep->fullWData(oldp+1851,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask),254);
        tracep->fullWData(oldp+1859,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask),254);
        tracep->fullWData(oldp+1867,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask),254);
        tracep->fullWData(oldp+1875,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask),254);
        tracep->fullWData(oldp+1883,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask),254);
        tracep->fullWData(oldp+1891,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask),254);
        tracep->fullWData(oldp+1899,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask),254);
        tracep->fullWData(oldp+1907,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask),254);
        tracep->fullWData(oldp+1915,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask),254);
        tracep->fullWData(oldp+1923,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask),254);
        tracep->fullWData(oldp+1931,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask),254);
        tracep->fullWData(oldp+1939,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask),254);
        tracep->fullWData(oldp+1947,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask),254);
        tracep->fullWData(oldp+1955,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask),254);
        tracep->fullWData(oldp+1963,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask),254);
        tracep->fullWData(oldp+1971,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask),254);
        tracep->fullWData(oldp+1979,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask),254);
        tracep->fullWData(oldp+1987,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask),254);
        tracep->fullWData(oldp+1995,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask),254);
        tracep->fullWData(oldp+2003,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask),254);
        tracep->fullWData(oldp+2011,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask),254);
        tracep->fullWData(oldp+2019,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask),254);
        tracep->fullWData(oldp+2027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask),254);
        tracep->fullWData(oldp+2035,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask),254);
        tracep->fullBit(oldp+2043,(vlSelf->ascon_top__DOT__extra_padding_ff));
        tracep->fullBit(oldp+2044,(vlSelf->ascon_top__DOT__shift_en));
        tracep->fullBit(oldp+2045,(vlSelf->ascon_top__DOT__shift_type));
        tracep->fullBit(oldp+2046,(vlSelf->ascon_top__DOT__last_cycle));
        tracep->fullBit(oldp+2047,(vlSelf->ascon_top__DOT__reg_key1_load));
        tracep->fullBit(oldp+2048,(vlSelf->ascon_top__DOT__reg_key2_load));
        tracep->fullBit(oldp+2049,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
        tracep->fullBit(oldp+2050,(vlSelf->ascon_top__DOT__sel_masked_round));
        tracep->fullBit(oldp+2051,(vlSelf->ascon_top__DOT__sel_xor_signal));
        tracep->fullCData(oldp+2052,(vlSelf->ascon_top__DOT__round_counter),4);
        tracep->fullCData(oldp+2053,(vlSelf->ascon_top__DOT__bit_counter),3);
        tracep->fullBit(oldp+2054,(vlSelf->ascon_top__DOT__shift_enable_sipo));
        tracep->fullBit(oldp+2055,(vlSelf->ascon_top__DOT__last_cycle_sipo));
        tracep->fullWData(oldp+2056,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0]),320);
        tracep->fullWData(oldp+2066,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1]),320);
        tracep->fullWData(oldp+2076,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2]),320);
        tracep->fullWData(oldp+2086,(vlSelf->ascon_top__DOT__state_reg_out_shares[0]),320);
        tracep->fullWData(oldp+2096,(vlSelf->ascon_top__DOT__state_reg_out_shares[1]),320);
        tracep->fullWData(oldp+2106,(vlSelf->ascon_top__DOT__state_reg_out_shares[2]),320);
        tracep->fullQData(oldp+2116,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+2118,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
        tracep->fullQData(oldp+2120,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
        tracep->fullQData(oldp+2122,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
        tracep->fullQData(oldp+2124,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
        tracep->fullQData(oldp+2126,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
        tracep->fullQData(oldp+2128,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
        tracep->fullQData(oldp+2130,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U][1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                                   [0U][0U])))),64);
        tracep->fullQData(oldp+2132,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U][3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                                   [0U][2U])))),64);
        tracep->fullQData(oldp+2134,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U][5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                                   [0U][4U])))),64);
        tracep->fullQData(oldp+2136,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U][7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                                   [0U][6U])))),64);
        tracep->fullQData(oldp+2138,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U][9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                                   [0U][8U])))),64);
        tracep->fullWData(oldp+2140,(vlSelf->ascon_top__DOT__mux_1st_x0),66);
        tracep->fullWData(oldp+2143,(vlSelf->ascon_top__DOT__mux_1st_x1),66);
        tracep->fullWData(oldp+2146,(vlSelf->ascon_top__DOT__mux_1st_x2),66);
        tracep->fullWData(oldp+2149,(vlSelf->ascon_top__DOT__mux_1st_x3),66);
        tracep->fullWData(oldp+2152,(vlSelf->ascon_top__DOT__mux_1st_x4),66);
        tracep->fullQData(oldp+2155,((0xf0ULL - (0xfULL 
                                                 * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
        VL_EXTEND_WQ(66,64, __Vtemp48421, (0xf0ULL 
                                           - (0xfULL 
                                              * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
        tracep->fullWData(oldp+2157,(__Vtemp48421),66);
        tracep->fullIData(oldp+2160,(vlSelf->ascon_top__DOT__rc_block[0]),22);
        tracep->fullIData(oldp+2161,(vlSelf->ascon_top__DOT__rc_block[1]),22);
        tracep->fullIData(oldp+2162,(vlSelf->ascon_top__DOT__rc_block[2]),22);
        __Vtemp48424[0U] = (IData)((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))));
        __Vtemp48424[1U] = ((vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                             << 0xcU) | (IData)(((((QData)((IData)(
                                                                   (0x3fffffU 
                                                                    & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                                   << 0x16U) 
                                                  | (QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))) 
                                                 >> 0x20U)));
        __Vtemp48424[2U] = ((vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                             << 0x18U) | ((0xfffffcU 
                                           & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                              << 2U)) 
                                          | (3U & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                   >> 0x14U))));
        __Vtemp48424[3U] = (0x3fffU & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                       >> 8U));
        tracep->fullWData(oldp+2163,(__Vtemp48424),110);
        tracep->fullWData(oldp+2167,(vlSelf->ascon_top__DOT__recombine_shares_sbox),320);
        tracep->fullWData(oldp+2177,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
        tracep->fullQData(oldp+2187,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
        tracep->fullQData(oldp+2189,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
        tracep->fullQData(oldp+2191,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
        tracep->fullQData(oldp+2193,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
        tracep->fullQData(oldp+2195,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
        tracep->fullWData(oldp+2197,(vlSelf->ascon_top__DOT__recombine_shares),320);
        tracep->fullQData(oldp+2207,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                       ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                          [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                       : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                      [3U])),64);
        tracep->fullQData(oldp+2209,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                       ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                       : 0x8000000000000000ULL)),64);
        tracep->fullIData(oldp+2211,(vlSelf->ascon_top__DOT__mux_logic__BRA__0__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
        tracep->fullIData(oldp+2212,(vlSelf->ascon_top__DOT__mux_logic__BRA__1__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
        tracep->fullIData(oldp+2213,(vlSelf->ascon_top__DOT__mux_logic__BRA__2__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
        tracep->fullCData(oldp+2214,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2215,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2216,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2217,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2218,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2219,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2220,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2221,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2222,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2223,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2224,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2225,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2226,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2227,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2228,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2229,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2230,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2231,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2232,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2233,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2234,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2235,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2236,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2237,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2238,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2239,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2240,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2241,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2242,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2243,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2244,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2245,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2246,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2247,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2248,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2249,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2250,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2251,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2252,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2253,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2254,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2255,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2256,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2257,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2258,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2259,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2260,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2261,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2262,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2263,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2264,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2265,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2266,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2267,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2268,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2269,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2270,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2271,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2272,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2273,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2274,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2275,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2276,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2277,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2278,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2279,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2280,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2281,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2282,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2283,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2284,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2285,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2286,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2287,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2288,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2289,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2290,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2291,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2292,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2293,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2294,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2295,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2296,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2297,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2298,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2299,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2300,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2301,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2302,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2303,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2304,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2305,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2306,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2307,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2308,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2309,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2310,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2311,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2312,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2313,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2314,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2315,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2316,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2317,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2318,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2319,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2320,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2321,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2322,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2323,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2324,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2325,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2326,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2327,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2328,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2329,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2330,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2331,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2332,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2333,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2334,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2335,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2336,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2337,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2338,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2339,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2340,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2341,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2342,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2343,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2344,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2345,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2346,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2347,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2348,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2349,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2350,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2351,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2352,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2353,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2354,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2355,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2356,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2357,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2358,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2359,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2360,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2361,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2362,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2363,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2364,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2365,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2366,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2367,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2368,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2369,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2370,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2371,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2372,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2373,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2374,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2375,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2376,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2377,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2378,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2379,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2380,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2381,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2382,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2383,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2384,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2385,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2386,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2387,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2388,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2389,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2390,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2391,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2392,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2393,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2394,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2395,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2396,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2397,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2398,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2399,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2400,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2401,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2402,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2403,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2404,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2405,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2406,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2407,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2408,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2409,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2410,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2411,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2412,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2413,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2414,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2415,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2416,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2417,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2418,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2419,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2420,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2421,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2422,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2423,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2424,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2425,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2426,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2427,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2428,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2429,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2430,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2431,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2432,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2433,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2434,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2435,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2436,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2437,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2438,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2439,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2440,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2441,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2442,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2443,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2444,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2445,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2446,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2447,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2448,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2449,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2450,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2451,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2452,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2453,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2454,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2455,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2456,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2457,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2458,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2459,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2460,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2461,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2462,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2463,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2464,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2465,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2466,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2467,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2468,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2469,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2470,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2471,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2472,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2473,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2474,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2475,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2476,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2477,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2478,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2479,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2480,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2481,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2482,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2483,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2484,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2485,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2486,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2487,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2488,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2489,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2490,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2491,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2492,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2493,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2494,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2495,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2496,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2497,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2498,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2499,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2500,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2501,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2502,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2503,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2504,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2505,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2506,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2507,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2508,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2509,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2510,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2511,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2512,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2513,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2514,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2515,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2516,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2517,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2518,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2519,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2520,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2521,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2522,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2523,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2524,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2525,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2526,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2527,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2528,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2529,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2530,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2531,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2532,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2533,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits_sbox),3);
        tracep->fullCData(oldp+2534,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2535,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2536,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2537,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2538,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2539,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2540,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2541,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2542,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2543,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2544,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2545,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2546,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2547,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2548,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2549,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2550,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2551,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2552,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2553,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2554,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2555,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2556,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2557,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2558,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2559,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2560,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2561,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2562,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2563,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2564,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2565,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2566,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2567,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2568,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2569,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2570,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2571,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2572,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2573,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2574,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2575,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2576,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2577,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2578,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2579,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2580,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2581,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2582,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2583,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2584,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2585,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2586,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2587,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2588,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2589,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2590,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2591,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2592,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2593,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2594,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2595,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2596,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2597,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2598,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2599,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2600,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2601,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2602,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2603,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2604,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2605,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2606,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2607,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2608,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2609,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2610,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2611,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2612,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2613,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2614,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2615,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2616,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2617,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2618,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2619,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2620,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2621,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2622,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2623,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2624,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2625,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2626,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2627,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2628,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2629,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2630,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2631,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2632,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2633,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2634,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2635,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2636,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2637,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2638,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2639,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2640,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2641,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2642,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2643,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2644,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2645,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2646,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2647,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2648,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2649,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2650,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2651,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2652,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2653,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2654,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2655,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2656,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2657,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2658,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2659,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2660,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2661,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2662,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2663,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2664,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2665,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2666,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2667,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2668,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2669,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2670,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2671,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2672,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2673,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2674,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2675,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2676,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2677,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2678,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2679,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2680,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2681,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2682,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2683,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2684,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2685,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2686,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2687,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2688,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2689,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2690,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2691,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2692,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2693,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2694,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2695,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2696,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2697,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2698,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2699,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2700,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2701,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2702,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2703,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2704,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2705,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2706,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2707,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2708,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2709,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2710,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2711,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2712,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2713,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2714,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2715,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2716,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2717,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2718,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2719,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2720,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2721,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2722,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2723,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2724,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2725,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2726,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2727,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2728,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2729,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2730,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2731,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2732,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2733,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2734,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2735,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2736,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2737,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2738,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2739,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2740,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2741,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2742,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2743,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2744,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2745,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2746,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2747,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2748,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2749,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2750,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2751,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2752,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2753,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2754,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2755,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2756,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2757,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2758,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2759,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2760,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2761,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2762,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2763,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2764,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2765,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2766,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2767,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2768,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2769,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2770,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2771,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2772,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2773,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2774,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2775,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2776,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2777,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2778,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2779,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2780,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2781,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2782,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2783,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2784,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2785,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2786,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2787,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2788,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2789,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2790,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2791,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2792,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2793,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2794,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2795,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2796,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2797,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2798,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2799,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2800,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2801,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2802,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2803,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2804,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2805,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2806,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2807,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2808,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2809,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2810,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2811,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2812,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2813,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2814,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2815,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2816,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2817,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2818,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2819,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2820,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2821,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2822,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2823,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2824,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2825,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2826,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2827,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2828,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2829,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2830,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2831,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2832,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2833,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2834,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2835,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2836,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2837,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2838,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2839,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2840,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2841,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2842,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2843,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2844,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2845,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2846,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2847,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2848,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2849,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2850,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2851,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2852,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits),3);
        tracep->fullCData(oldp+2853,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits),3);
        tracep->fullBit(oldp+2854,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4));
        tracep->fullCData(oldp+2855,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
        tracep->fullCData(oldp+2856,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),3);
        tracep->fullCData(oldp+2857,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
        tracep->fullBit(oldp+2858,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
        tracep->fullBit(oldp+2859,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
        tracep->fullQData(oldp+2860,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U])))),64);
        tracep->fullIData(oldp+2862,((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x0[0U])),22);
        tracep->fullQData(oldp+2863,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
        tracep->fullQData(oldp+2865,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x1[0U])))),64);
        tracep->fullIData(oldp+2867,((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x1[0U])),22);
        tracep->fullQData(oldp+2868,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
        tracep->fullQData(oldp+2870,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x2[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x2[0U])))),64);
        tracep->fullIData(oldp+2872,((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x2[0U])),22);
        tracep->fullQData(oldp+2873,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
        tracep->fullQData(oldp+2875,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x3[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x3[0U])))),64);
        tracep->fullIData(oldp+2877,((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x3[0U])),22);
        tracep->fullQData(oldp+2878,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
        tracep->fullQData(oldp+2880,((((QData)((IData)(
                                                       vlSelf->ascon_top__DOT__mux_1st_x4[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__mux_1st_x4[0U])))),64);
        tracep->fullIData(oldp+2882,((0x3fffffU & vlSelf->ascon_top__DOT__mux_1st_x4[0U])),22);
        tracep->fullQData(oldp+2883,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
        tracep->fullWData(oldp+2885,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1),320);
        tracep->fullWData(oldp+2895,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out),320);
        tracep->fullQData(oldp+2905,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[0]),64);
        tracep->fullQData(oldp+2907,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[1]),64);
        tracep->fullQData(oldp+2909,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[2]),64);
        tracep->fullQData(oldp+2911,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[3]),64);
        tracep->fullQData(oldp+2913,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[4]),64);
        tracep->fullIData(oldp+2915,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
        tracep->fullIData(oldp+2916,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
        tracep->fullWData(oldp+2917,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1),320);
        tracep->fullWData(oldp+2927,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out),320);
        tracep->fullQData(oldp+2937,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[0]),64);
        tracep->fullQData(oldp+2939,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[1]),64);
        tracep->fullQData(oldp+2941,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[2]),64);
        tracep->fullQData(oldp+2943,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[3]),64);
        tracep->fullQData(oldp+2945,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[4]),64);
        tracep->fullIData(oldp+2947,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
        tracep->fullIData(oldp+2948,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
        tracep->fullWData(oldp+2949,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1),320);
        tracep->fullWData(oldp+2959,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out),320);
        tracep->fullQData(oldp+2969,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[0]),64);
        tracep->fullQData(oldp+2971,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[1]),64);
        tracep->fullQData(oldp+2973,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[2]),64);
        tracep->fullQData(oldp+2975,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[3]),64);
        tracep->fullQData(oldp+2977,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[4]),64);
        tracep->fullIData(oldp+2979,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
        tracep->fullIData(oldp+2980,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
        tracep->fullQData(oldp+2981,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
        tracep->fullQData(oldp+2983,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
        tracep->fullQData(oldp+2985,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
        tracep->fullQData(oldp+2987,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
        tracep->fullQData(oldp+2989,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
        __Vtemp48428[0U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
        __Vtemp48428[1U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                    >> 0x20U));
        __Vtemp48428[2U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
        __Vtemp48428[3U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                    >> 0x20U));
        __Vtemp48428[4U] = (IData)((((QData)((IData)(
                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
        __Vtemp48428[5U] = (IData)(((((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                    >> 0x20U));
        __Vtemp48428[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [3U]));
        __Vtemp48428[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [3U]) >> 0x20U));
        __Vtemp48428[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                     ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                 ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                 : 0x8000000000000000ULL))
                                     : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                    [4U]));
        __Vtemp48428[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                  ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                  : 0x8000000000000000ULL))
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [4U]) >> 0x20U));
        tracep->fullWData(oldp+2991,(__Vtemp48428),320);
        tracep->fullQData(oldp+3001,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                       ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                          [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                   ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                   : 0x8000000000000000ULL))
                                       : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                      [4U])),64);
        tracep->fullWData(oldp+3003,(vlSelf->ascon_top__DOT__lfsr_out),223);
        tracep->fullIData(oldp+3010,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
        tracep->fullIData(oldp+3011,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
        __Vtemp48431[0U] = vlSelf->ascon_top__DOT__lfsr_out[0U];
        __Vtemp48431[1U] = vlSelf->ascon_top__DOT__lfsr_out[1U];
        __Vtemp48431[2U] = vlSelf->ascon_top__DOT__lfsr_out[2U];
        __Vtemp48431[3U] = vlSelf->ascon_top__DOT__lfsr_out[3U];
        __Vtemp48431[4U] = vlSelf->ascon_top__DOT__lfsr_out[4U];
        __Vtemp48431[5U] = vlSelf->ascon_top__DOT__lfsr_out[5U];
        __Vtemp48431[6U] = (0xfffffffU & vlSelf->ascon_top__DOT__lfsr_out[6U]);
        tracep->fullWData(oldp+3012,(__Vtemp48431),220);
        tracep->fullCData(oldp+3019,((7U & (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                                            >> 0x1cU))),3);
        tracep->fullBit(oldp+3020,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg));
        tracep->fullIData(oldp+3021,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i),32);
        tracep->fullBit(oldp+3022,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg));
        tracep->fullIData(oldp+3023,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i),32);
        tracep->fullBit(oldp+3024,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg));
        tracep->fullIData(oldp+3025,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i),32);
        tracep->fullBit(oldp+3026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg));
        tracep->fullIData(oldp+3027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i),32);
        tracep->fullBit(oldp+3028,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg));
        tracep->fullIData(oldp+3029,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i),32);
        tracep->fullBit(oldp+3030,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg));
        tracep->fullIData(oldp+3031,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i),32);
        tracep->fullBit(oldp+3032,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg));
        tracep->fullIData(oldp+3033,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i),32);
        tracep->fullBit(oldp+3034,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg));
        tracep->fullIData(oldp+3035,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i),32);
        tracep->fullBit(oldp+3036,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg));
        tracep->fullIData(oldp+3037,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i),32);
        tracep->fullBit(oldp+3038,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg));
        tracep->fullIData(oldp+3039,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i),32);
        tracep->fullBit(oldp+3040,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg));
        tracep->fullIData(oldp+3041,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i),32);
        tracep->fullBit(oldp+3042,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg));
        tracep->fullIData(oldp+3043,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i),32);
        tracep->fullBit(oldp+3044,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg));
        tracep->fullIData(oldp+3045,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i),32);
        tracep->fullBit(oldp+3046,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg));
        tracep->fullIData(oldp+3047,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i),32);
        tracep->fullBit(oldp+3048,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg));
        tracep->fullIData(oldp+3049,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i),32);
        tracep->fullBit(oldp+3050,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg));
        tracep->fullIData(oldp+3051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i),32);
        tracep->fullBit(oldp+3052,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg));
        tracep->fullIData(oldp+3053,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i),32);
        tracep->fullBit(oldp+3054,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg));
        tracep->fullIData(oldp+3055,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i),32);
        tracep->fullBit(oldp+3056,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg));
        tracep->fullIData(oldp+3057,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i),32);
        tracep->fullBit(oldp+3058,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg));
        tracep->fullIData(oldp+3059,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i),32);
        tracep->fullBit(oldp+3060,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg));
        tracep->fullIData(oldp+3061,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i),32);
        tracep->fullBit(oldp+3062,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg));
        tracep->fullIData(oldp+3063,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i),32);
        tracep->fullBit(oldp+3064,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg));
        tracep->fullIData(oldp+3065,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i),32);
        tracep->fullBit(oldp+3066,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg));
        tracep->fullIData(oldp+3067,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i),32);
        tracep->fullBit(oldp+3068,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg));
        tracep->fullIData(oldp+3069,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i),32);
        tracep->fullBit(oldp+3070,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg));
        tracep->fullIData(oldp+3071,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i),32);
        tracep->fullBit(oldp+3072,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg));
        tracep->fullIData(oldp+3073,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i),32);
        tracep->fullBit(oldp+3074,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg));
        tracep->fullIData(oldp+3075,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i),32);
        tracep->fullBit(oldp+3076,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg));
        tracep->fullIData(oldp+3077,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i),32);
        tracep->fullBit(oldp+3078,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg));
        tracep->fullIData(oldp+3079,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i),32);
        tracep->fullBit(oldp+3080,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg));
        tracep->fullIData(oldp+3081,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i),32);
        tracep->fullBit(oldp+3082,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg));
        tracep->fullIData(oldp+3083,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i),32);
        tracep->fullBit(oldp+3084,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg));
        tracep->fullIData(oldp+3085,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i),32);
        tracep->fullBit(oldp+3086,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg));
        tracep->fullIData(oldp+3087,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i),32);
        tracep->fullBit(oldp+3088,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg));
        tracep->fullIData(oldp+3089,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i),32);
        tracep->fullBit(oldp+3090,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg));
        tracep->fullIData(oldp+3091,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i),32);
        tracep->fullBit(oldp+3092,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg));
        tracep->fullIData(oldp+3093,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i),32);
        tracep->fullBit(oldp+3094,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg));
        tracep->fullIData(oldp+3095,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i),32);
        tracep->fullBit(oldp+3096,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg));
        tracep->fullIData(oldp+3097,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i),32);
        tracep->fullBit(oldp+3098,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg));
        tracep->fullIData(oldp+3099,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i),32);
        tracep->fullBit(oldp+3100,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg));
        tracep->fullIData(oldp+3101,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i),32);
        tracep->fullBit(oldp+3102,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg));
        tracep->fullIData(oldp+3103,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i),32);
        tracep->fullBit(oldp+3104,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg));
        tracep->fullIData(oldp+3105,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i),32);
        tracep->fullBit(oldp+3106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg));
        tracep->fullIData(oldp+3107,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i),32);
        tracep->fullBit(oldp+3108,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg));
        tracep->fullIData(oldp+3109,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i),32);
        tracep->fullBit(oldp+3110,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg));
        tracep->fullIData(oldp+3111,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i),32);
        tracep->fullBit(oldp+3112,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg));
        tracep->fullIData(oldp+3113,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i),32);
        tracep->fullBit(oldp+3114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg));
        tracep->fullIData(oldp+3115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i),32);
        tracep->fullBit(oldp+3116,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg));
        tracep->fullIData(oldp+3117,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i),32);
        tracep->fullBit(oldp+3118,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg));
        tracep->fullIData(oldp+3119,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i),32);
        tracep->fullBit(oldp+3120,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg));
        tracep->fullIData(oldp+3121,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i),32);
        tracep->fullBit(oldp+3122,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg));
        tracep->fullIData(oldp+3123,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i),32);
        tracep->fullBit(oldp+3124,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg));
        tracep->fullIData(oldp+3125,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i),32);
        tracep->fullBit(oldp+3126,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg));
        tracep->fullIData(oldp+3127,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i),32);
        tracep->fullBit(oldp+3128,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg));
        tracep->fullIData(oldp+3129,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i),32);
        tracep->fullBit(oldp+3130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg));
        tracep->fullIData(oldp+3131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i),32);
        tracep->fullBit(oldp+3132,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg));
        tracep->fullIData(oldp+3133,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i),32);
        tracep->fullBit(oldp+3134,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg));
        tracep->fullIData(oldp+3135,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i),32);
        tracep->fullBit(oldp+3136,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg));
        tracep->fullIData(oldp+3137,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i),32);
        tracep->fullBit(oldp+3138,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg));
        tracep->fullIData(oldp+3139,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i),32);
        tracep->fullBit(oldp+3140,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg));
        tracep->fullIData(oldp+3141,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i),32);
        tracep->fullBit(oldp+3142,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg));
        tracep->fullIData(oldp+3143,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i),32);
        tracep->fullBit(oldp+3144,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg));
        tracep->fullIData(oldp+3145,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i),32);
        tracep->fullBit(oldp+3146,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg));
        tracep->fullIData(oldp+3147,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i),32);
        tracep->fullBit(oldp+3148,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg));
        tracep->fullIData(oldp+3149,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i),32);
        tracep->fullBit(oldp+3150,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg));
        tracep->fullIData(oldp+3151,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i),32);
        tracep->fullBit(oldp+3152,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg));
        tracep->fullIData(oldp+3153,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i),32);
        tracep->fullBit(oldp+3154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg));
        tracep->fullIData(oldp+3155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i),32);
        tracep->fullBit(oldp+3156,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg));
        tracep->fullIData(oldp+3157,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i),32);
        tracep->fullBit(oldp+3158,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg));
        tracep->fullIData(oldp+3159,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i),32);
        tracep->fullBit(oldp+3160,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg));
        tracep->fullIData(oldp+3161,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i),32);
        tracep->fullBit(oldp+3162,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg));
        tracep->fullIData(oldp+3163,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i),32);
        tracep->fullBit(oldp+3164,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg));
        tracep->fullIData(oldp+3165,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i),32);
        tracep->fullBit(oldp+3166,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg));
        tracep->fullIData(oldp+3167,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i),32);
        tracep->fullBit(oldp+3168,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg));
        tracep->fullIData(oldp+3169,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i),32);
        tracep->fullBit(oldp+3170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg));
        tracep->fullIData(oldp+3171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i),32);
        tracep->fullBit(oldp+3172,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg));
        tracep->fullIData(oldp+3173,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i),32);
        tracep->fullBit(oldp+3174,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg));
        tracep->fullIData(oldp+3175,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i),32);
        tracep->fullBit(oldp+3176,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg));
        tracep->fullIData(oldp+3177,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i),32);
        tracep->fullBit(oldp+3178,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg));
        tracep->fullIData(oldp+3179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i),32);
        tracep->fullBit(oldp+3180,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg));
        tracep->fullIData(oldp+3181,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i),32);
        tracep->fullBit(oldp+3182,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg));
        tracep->fullIData(oldp+3183,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i),32);
        tracep->fullBit(oldp+3184,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg));
        tracep->fullIData(oldp+3185,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i),32);
        tracep->fullBit(oldp+3186,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg));
        tracep->fullIData(oldp+3187,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i),32);
        tracep->fullBit(oldp+3188,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg));
        tracep->fullIData(oldp+3189,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i),32);
        tracep->fullBit(oldp+3190,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg));
        tracep->fullIData(oldp+3191,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i),32);
        tracep->fullBit(oldp+3192,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg));
        tracep->fullIData(oldp+3193,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i),32);
        tracep->fullBit(oldp+3194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg));
        tracep->fullIData(oldp+3195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i),32);
        tracep->fullBit(oldp+3196,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg));
        tracep->fullIData(oldp+3197,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i),32);
        tracep->fullBit(oldp+3198,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg));
        tracep->fullIData(oldp+3199,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i),32);
        tracep->fullBit(oldp+3200,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg));
        tracep->fullIData(oldp+3201,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i),32);
        tracep->fullBit(oldp+3202,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg));
        tracep->fullIData(oldp+3203,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i),32);
        tracep->fullBit(oldp+3204,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg));
        tracep->fullIData(oldp+3205,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i),32);
        tracep->fullBit(oldp+3206,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg));
        tracep->fullIData(oldp+3207,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i),32);
        tracep->fullBit(oldp+3208,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg));
        tracep->fullIData(oldp+3209,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i),32);
        tracep->fullBit(oldp+3210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg));
        tracep->fullIData(oldp+3211,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i),32);
        tracep->fullBit(oldp+3212,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg));
        tracep->fullIData(oldp+3213,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i),32);
        tracep->fullBit(oldp+3214,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg));
        tracep->fullIData(oldp+3215,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i),32);
        tracep->fullBit(oldp+3216,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg));
        tracep->fullIData(oldp+3217,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i),32);
        tracep->fullBit(oldp+3218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg));
        tracep->fullIData(oldp+3219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i),32);
        tracep->fullBit(oldp+3220,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg));
        tracep->fullIData(oldp+3221,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i),32);
        tracep->fullBit(oldp+3222,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg));
        tracep->fullIData(oldp+3223,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i),32);
        tracep->fullBit(oldp+3224,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg));
        tracep->fullIData(oldp+3225,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i),32);
        tracep->fullBit(oldp+3226,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg));
        tracep->fullIData(oldp+3227,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i),32);
        tracep->fullBit(oldp+3228,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg));
        tracep->fullIData(oldp+3229,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i),32);
        tracep->fullBit(oldp+3230,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg));
        tracep->fullIData(oldp+3231,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i),32);
        tracep->fullBit(oldp+3232,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg));
        tracep->fullIData(oldp+3233,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i),32);
        tracep->fullBit(oldp+3234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg));
        tracep->fullIData(oldp+3235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i),32);
        tracep->fullBit(oldp+3236,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg));
        tracep->fullIData(oldp+3237,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i),32);
        tracep->fullBit(oldp+3238,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg));
        tracep->fullIData(oldp+3239,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i),32);
        tracep->fullBit(oldp+3240,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg));
        tracep->fullIData(oldp+3241,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i),32);
        tracep->fullBit(oldp+3242,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg));
        tracep->fullIData(oldp+3243,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i),32);
        tracep->fullBit(oldp+3244,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg));
        tracep->fullIData(oldp+3245,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i),32);
        tracep->fullBit(oldp+3246,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg));
        tracep->fullIData(oldp+3247,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i),32);
        tracep->fullBit(oldp+3248,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg));
        tracep->fullIData(oldp+3249,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i),32);
        tracep->fullBit(oldp+3250,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg));
        tracep->fullIData(oldp+3251,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i),32);
        tracep->fullBit(oldp+3252,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg));
        tracep->fullIData(oldp+3253,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i),32);
        tracep->fullBit(oldp+3254,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg));
        tracep->fullIData(oldp+3255,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i),32);
        tracep->fullBit(oldp+3256,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg));
        tracep->fullIData(oldp+3257,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i),32);
        tracep->fullBit(oldp+3258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg));
        tracep->fullIData(oldp+3259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i),32);
        tracep->fullBit(oldp+3260,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg));
        tracep->fullIData(oldp+3261,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i),32);
        tracep->fullBit(oldp+3262,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg));
        tracep->fullIData(oldp+3263,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i),32);
        tracep->fullBit(oldp+3264,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg));
        tracep->fullIData(oldp+3265,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i),32);
        tracep->fullBit(oldp+3266,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg));
        tracep->fullIData(oldp+3267,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i),32);
        tracep->fullBit(oldp+3268,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg));
        tracep->fullIData(oldp+3269,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i),32);
        tracep->fullBit(oldp+3270,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg));
        tracep->fullIData(oldp+3271,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i),32);
        tracep->fullBit(oldp+3272,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg));
        tracep->fullIData(oldp+3273,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i),32);
        tracep->fullBit(oldp+3274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__data_reg));
        tracep->fullIData(oldp+3275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__i),32);
        tracep->fullBit(oldp+3276,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__data_reg));
        tracep->fullIData(oldp+3277,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__i),32);
        tracep->fullBit(oldp+3278,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__data_reg));
        tracep->fullIData(oldp+3279,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__i),32);
        tracep->fullBit(oldp+3280,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__data_reg));
        tracep->fullIData(oldp+3281,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__i),32);
        tracep->fullBit(oldp+3282,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__data_reg));
        tracep->fullIData(oldp+3283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__i),32);
        tracep->fullBit(oldp+3284,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__data_reg));
        tracep->fullIData(oldp+3285,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__i),32);
        tracep->fullBit(oldp+3286,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__data_reg));
        tracep->fullIData(oldp+3287,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__i),32);
        tracep->fullBit(oldp+3288,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__data_reg));
        tracep->fullIData(oldp+3289,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__i),32);
        tracep->fullBit(oldp+3290,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__data_reg));
        tracep->fullIData(oldp+3291,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__i),32);
        tracep->fullBit(oldp+3292,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__data_reg));
        tracep->fullIData(oldp+3293,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__i),32);
        tracep->fullBit(oldp+3294,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__data_reg));
        tracep->fullIData(oldp+3295,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__i),32);
        tracep->fullBit(oldp+3296,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__data_reg));
        tracep->fullIData(oldp+3297,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__i),32);
        tracep->fullBit(oldp+3298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__data_reg));
        tracep->fullIData(oldp+3299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__i),32);
        tracep->fullBit(oldp+3300,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__data_reg));
        tracep->fullIData(oldp+3301,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__i),32);
        tracep->fullBit(oldp+3302,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__data_reg));
        tracep->fullIData(oldp+3303,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__i),32);
        tracep->fullBit(oldp+3304,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__data_reg));
        tracep->fullIData(oldp+3305,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__i),32);
        tracep->fullBit(oldp+3306,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__data_reg));
        tracep->fullIData(oldp+3307,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__i),32);
        tracep->fullBit(oldp+3308,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__data_reg));
        tracep->fullIData(oldp+3309,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__i),32);
        tracep->fullBit(oldp+3310,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__data_reg));
        tracep->fullIData(oldp+3311,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__i),32);
        tracep->fullBit(oldp+3312,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__data_reg));
        tracep->fullIData(oldp+3313,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__i),32);
        tracep->fullBit(oldp+3314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__data_reg));
        tracep->fullIData(oldp+3315,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__i),32);
        tracep->fullBit(oldp+3316,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__data_reg));
        tracep->fullIData(oldp+3317,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__i),32);
        tracep->fullBit(oldp+3318,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__data_reg));
        tracep->fullIData(oldp+3319,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__i),32);
        tracep->fullBit(oldp+3320,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__data_reg));
        tracep->fullIData(oldp+3321,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__i),32);
        tracep->fullBit(oldp+3322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__data_reg));
        tracep->fullIData(oldp+3323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__i),32);
        tracep->fullBit(oldp+3324,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__data_reg));
        tracep->fullIData(oldp+3325,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__i),32);
        tracep->fullBit(oldp+3326,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__data_reg));
        tracep->fullIData(oldp+3327,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__i),32);
        tracep->fullBit(oldp+3328,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__data_reg));
        tracep->fullIData(oldp+3329,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__i),32);
        tracep->fullBit(oldp+3330,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__data_reg));
        tracep->fullIData(oldp+3331,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__i),32);
        tracep->fullBit(oldp+3332,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__data_reg));
        tracep->fullIData(oldp+3333,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__i),32);
        tracep->fullBit(oldp+3334,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__data_reg));
        tracep->fullIData(oldp+3335,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__i),32);
        tracep->fullBit(oldp+3336,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__data_reg));
        tracep->fullIData(oldp+3337,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__i),32);
        tracep->fullBit(oldp+3338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__data_reg));
        tracep->fullIData(oldp+3339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__i),32);
        tracep->fullBit(oldp+3340,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__data_reg));
        tracep->fullIData(oldp+3341,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__i),32);
        tracep->fullBit(oldp+3342,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__data_reg));
        tracep->fullIData(oldp+3343,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__i),32);
        tracep->fullBit(oldp+3344,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__data_reg));
        tracep->fullIData(oldp+3345,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__i),32);
        tracep->fullBit(oldp+3346,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__data_reg));
        tracep->fullIData(oldp+3347,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__i),32);
        tracep->fullBit(oldp+3348,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__data_reg));
        tracep->fullIData(oldp+3349,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__i),32);
        tracep->fullBit(oldp+3350,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__data_reg));
        tracep->fullIData(oldp+3351,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__i),32);
        tracep->fullBit(oldp+3352,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__data_reg));
        tracep->fullIData(oldp+3353,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__i),32);
        tracep->fullBit(oldp+3354,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__data_reg));
        tracep->fullIData(oldp+3355,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__i),32);
        tracep->fullBit(oldp+3356,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__data_reg));
        tracep->fullIData(oldp+3357,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__i),32);
        tracep->fullBit(oldp+3358,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__data_reg));
        tracep->fullIData(oldp+3359,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__i),32);
        tracep->fullBit(oldp+3360,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__data_reg));
        tracep->fullIData(oldp+3361,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__i),32);
        tracep->fullBit(oldp+3362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__data_reg));
        tracep->fullIData(oldp+3363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__i),32);
        tracep->fullBit(oldp+3364,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__data_reg));
        tracep->fullIData(oldp+3365,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__i),32);
        tracep->fullBit(oldp+3366,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__data_reg));
        tracep->fullIData(oldp+3367,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__i),32);
        tracep->fullBit(oldp+3368,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__data_reg));
        tracep->fullIData(oldp+3369,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__i),32);
        tracep->fullBit(oldp+3370,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__data_reg));
        tracep->fullIData(oldp+3371,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__i),32);
        tracep->fullBit(oldp+3372,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__data_reg));
        tracep->fullIData(oldp+3373,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__i),32);
        tracep->fullBit(oldp+3374,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__data_reg));
        tracep->fullIData(oldp+3375,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__i),32);
        tracep->fullBit(oldp+3376,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__data_reg));
        tracep->fullIData(oldp+3377,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__i),32);
        tracep->fullBit(oldp+3378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__data_reg));
        tracep->fullIData(oldp+3379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__i),32);
        tracep->fullBit(oldp+3380,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__data_reg));
        tracep->fullIData(oldp+3381,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__i),32);
        tracep->fullBit(oldp+3382,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__data_reg));
        tracep->fullIData(oldp+3383,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__i),32);
        tracep->fullBit(oldp+3384,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__data_reg));
        tracep->fullIData(oldp+3385,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__i),32);
        tracep->fullBit(oldp+3386,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__data_reg));
        tracep->fullIData(oldp+3387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__i),32);
        tracep->fullBit(oldp+3388,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__data_reg));
        tracep->fullIData(oldp+3389,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__i),32);
        tracep->fullBit(oldp+3390,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__data_reg));
        tracep->fullIData(oldp+3391,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__i),32);
        tracep->fullBit(oldp+3392,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__data_reg));
        tracep->fullIData(oldp+3393,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__i),32);
        tracep->fullBit(oldp+3394,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__data_reg));
        tracep->fullIData(oldp+3395,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__i),32);
        tracep->fullBit(oldp+3396,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__data_reg));
        tracep->fullIData(oldp+3397,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__i),32);
        tracep->fullBit(oldp+3398,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__data_reg));
        tracep->fullIData(oldp+3399,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__i),32);
        tracep->fullBit(oldp+3400,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__data_reg));
        tracep->fullIData(oldp+3401,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__i),32);
        tracep->fullBit(oldp+3402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__data_reg));
        tracep->fullIData(oldp+3403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__i),32);
        tracep->fullBit(oldp+3404,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__data_reg));
        tracep->fullIData(oldp+3405,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__i),32);
        tracep->fullBit(oldp+3406,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__data_reg));
        tracep->fullIData(oldp+3407,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__i),32);
        tracep->fullBit(oldp+3408,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__data_reg));
        tracep->fullIData(oldp+3409,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__i),32);
        tracep->fullBit(oldp+3410,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__data_reg));
        tracep->fullIData(oldp+3411,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__i),32);
        tracep->fullBit(oldp+3412,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__data_reg));
        tracep->fullIData(oldp+3413,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__i),32);
        tracep->fullBit(oldp+3414,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__data_reg));
        tracep->fullIData(oldp+3415,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__i),32);
        tracep->fullBit(oldp+3416,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__data_reg));
        tracep->fullIData(oldp+3417,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__i),32);
        tracep->fullBit(oldp+3418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__data_reg));
        tracep->fullIData(oldp+3419,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__i),32);
        tracep->fullBit(oldp+3420,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__data_reg));
        tracep->fullIData(oldp+3421,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__i),32);
        tracep->fullBit(oldp+3422,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__data_reg));
        tracep->fullIData(oldp+3423,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__i),32);
        tracep->fullBit(oldp+3424,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__data_reg));
        tracep->fullIData(oldp+3425,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__i),32);
        tracep->fullBit(oldp+3426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__data_reg));
        tracep->fullIData(oldp+3427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__i),32);
        tracep->fullBit(oldp+3428,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__data_reg));
        tracep->fullIData(oldp+3429,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__i),32);
        tracep->fullBit(oldp+3430,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__data_reg));
        tracep->fullIData(oldp+3431,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__i),32);
        tracep->fullBit(oldp+3432,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__data_reg));
        tracep->fullIData(oldp+3433,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__i),32);
        tracep->fullBit(oldp+3434,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__data_reg));
        tracep->fullIData(oldp+3435,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__i),32);
        tracep->fullBit(oldp+3436,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg));
        tracep->fullIData(oldp+3437,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i),32);
        tracep->fullBit(oldp+3438,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg));
        tracep->fullIData(oldp+3439,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i),32);
        tracep->fullBit(oldp+3440,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg));
        tracep->fullIData(oldp+3441,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i),32);
        tracep->fullBit(oldp+3442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg));
        tracep->fullIData(oldp+3443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i),32);
        tracep->fullBit(oldp+3444,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg));
        tracep->fullIData(oldp+3445,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i),32);
        tracep->fullBit(oldp+3446,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg));
        tracep->fullIData(oldp+3447,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i),32);
        tracep->fullBit(oldp+3448,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg));
        tracep->fullIData(oldp+3449,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i),32);
        tracep->fullBit(oldp+3450,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg));
        tracep->fullIData(oldp+3451,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i),32);
        tracep->fullBit(oldp+3452,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg));
        tracep->fullIData(oldp+3453,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i),32);
        tracep->fullBit(oldp+3454,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg));
        tracep->fullIData(oldp+3455,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i),32);
        tracep->fullBit(oldp+3456,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg));
        tracep->fullIData(oldp+3457,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i),32);
        tracep->fullBit(oldp+3458,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg));
        tracep->fullIData(oldp+3459,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i),32);
        tracep->fullBit(oldp+3460,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg));
        tracep->fullIData(oldp+3461,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i),32);
        tracep->fullBit(oldp+3462,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg));
        tracep->fullIData(oldp+3463,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i),32);
        tracep->fullBit(oldp+3464,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg));
        tracep->fullIData(oldp+3465,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i),32);
        tracep->fullBit(oldp+3466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg));
        tracep->fullIData(oldp+3467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i),32);
        tracep->fullBit(oldp+3468,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg));
        tracep->fullIData(oldp+3469,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i),32);
        tracep->fullBit(oldp+3470,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg));
        tracep->fullIData(oldp+3471,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i),32);
        tracep->fullBit(oldp+3472,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg));
        tracep->fullIData(oldp+3473,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i),32);
        tracep->fullBit(oldp+3474,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg));
        tracep->fullIData(oldp+3475,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i),32);
        tracep->fullBit(oldp+3476,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg));
        tracep->fullIData(oldp+3477,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i),32);
        tracep->fullBit(oldp+3478,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg));
        tracep->fullIData(oldp+3479,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i),32);
        tracep->fullBit(oldp+3480,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg));
        tracep->fullIData(oldp+3481,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i),32);
        tracep->fullBit(oldp+3482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg));
        tracep->fullIData(oldp+3483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i),32);
        tracep->fullBit(oldp+3484,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg));
        tracep->fullIData(oldp+3485,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i),32);
        tracep->fullBit(oldp+3486,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg));
        tracep->fullIData(oldp+3487,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i),32);
        tracep->fullBit(oldp+3488,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg));
        tracep->fullIData(oldp+3489,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i),32);
        tracep->fullBit(oldp+3490,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg));
        tracep->fullIData(oldp+3491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i),32);
        tracep->fullBit(oldp+3492,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg));
        tracep->fullIData(oldp+3493,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i),32);
        tracep->fullBit(oldp+3494,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg));
        tracep->fullIData(oldp+3495,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i),32);
        tracep->fullBit(oldp+3496,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg));
        tracep->fullIData(oldp+3497,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i),32);
        tracep->fullBit(oldp+3498,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg));
        tracep->fullIData(oldp+3499,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i),32);
        tracep->fullBit(oldp+3500,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg));
        tracep->fullIData(oldp+3501,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i),32);
        tracep->fullBit(oldp+3502,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg));
        tracep->fullIData(oldp+3503,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i),32);
        tracep->fullBit(oldp+3504,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg));
        tracep->fullIData(oldp+3505,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i),32);
        tracep->fullBit(oldp+3506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg));
        tracep->fullIData(oldp+3507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i),32);
        tracep->fullBit(oldp+3508,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg));
        tracep->fullIData(oldp+3509,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i),32);
        tracep->fullBit(oldp+3510,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg));
        tracep->fullIData(oldp+3511,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i),32);
        tracep->fullBit(oldp+3512,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg));
        tracep->fullIData(oldp+3513,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i),32);
        tracep->fullBit(oldp+3514,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg));
        tracep->fullIData(oldp+3515,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i),32);
        tracep->fullBit(oldp+3516,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg));
        tracep->fullIData(oldp+3517,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i),32);
        tracep->fullBit(oldp+3518,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg));
        tracep->fullIData(oldp+3519,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i),32);
        tracep->fullBit(oldp+3520,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg));
        tracep->fullIData(oldp+3521,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i),32);
        tracep->fullBit(oldp+3522,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg));
        tracep->fullIData(oldp+3523,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i),32);
        tracep->fullBit(oldp+3524,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg));
        tracep->fullIData(oldp+3525,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i),32);
        tracep->fullBit(oldp+3526,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg));
        tracep->fullIData(oldp+3527,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i),32);
        tracep->fullSData(oldp+3528,(vlSelf->ascon_top__DOT__sbox_input[0]),15);
        tracep->fullSData(oldp+3529,(vlSelf->ascon_top__DOT__sbox_input[1]),15);
        tracep->fullSData(oldp+3530,(vlSelf->ascon_top__DOT__sbox_input[2]),15);
        tracep->fullSData(oldp+3531,(vlSelf->ascon_top__DOT__sbox_input[3]),15);
        tracep->fullSData(oldp+3532,(vlSelf->ascon_top__DOT__sbox_input[4]),15);
        tracep->fullSData(oldp+3533,(vlSelf->ascon_top__DOT__sbox_input[5]),15);
        tracep->fullSData(oldp+3534,(vlSelf->ascon_top__DOT__sbox_input[6]),15);
        tracep->fullSData(oldp+3535,(vlSelf->ascon_top__DOT__sbox_input[7]),15);
        tracep->fullSData(oldp+3536,(vlSelf->ascon_top__DOT__sbox_input[8]),15);
        tracep->fullSData(oldp+3537,(vlSelf->ascon_top__DOT__sbox_input[9]),15);
        tracep->fullSData(oldp+3538,(vlSelf->ascon_top__DOT__sbox_input[10]),15);
        tracep->fullSData(oldp+3539,(vlSelf->ascon_top__DOT__sbox_input[11]),15);
        tracep->fullSData(oldp+3540,(vlSelf->ascon_top__DOT__sbox_input[12]),15);
        tracep->fullSData(oldp+3541,(vlSelf->ascon_top__DOT__sbox_input[13]),15);
        tracep->fullSData(oldp+3542,(vlSelf->ascon_top__DOT__sbox_input[14]),15);
        tracep->fullSData(oldp+3543,(vlSelf->ascon_top__DOT__sbox_input[15]),15);
        tracep->fullSData(oldp+3544,(vlSelf->ascon_top__DOT__sbox_input[16]),15);
        tracep->fullSData(oldp+3545,(vlSelf->ascon_top__DOT__sbox_input[17]),15);
        tracep->fullSData(oldp+3546,(vlSelf->ascon_top__DOT__sbox_input[18]),15);
        tracep->fullSData(oldp+3547,(vlSelf->ascon_top__DOT__sbox_input[19]),15);
        tracep->fullSData(oldp+3548,(vlSelf->ascon_top__DOT__sbox_input[20]),15);
        tracep->fullSData(oldp+3549,(vlSelf->ascon_top__DOT__sbox_input[21]),15);
        tracep->fullSData(oldp+3550,(vlSelf->ascon_top__DOT__sbox_output[0]),15);
        tracep->fullSData(oldp+3551,(vlSelf->ascon_top__DOT__sbox_output[1]),15);
        tracep->fullSData(oldp+3552,(vlSelf->ascon_top__DOT__sbox_output[2]),15);
        tracep->fullSData(oldp+3553,(vlSelf->ascon_top__DOT__sbox_output[3]),15);
        tracep->fullSData(oldp+3554,(vlSelf->ascon_top__DOT__sbox_output[4]),15);
        tracep->fullSData(oldp+3555,(vlSelf->ascon_top__DOT__sbox_output[5]),15);
        tracep->fullSData(oldp+3556,(vlSelf->ascon_top__DOT__sbox_output[6]),15);
        tracep->fullSData(oldp+3557,(vlSelf->ascon_top__DOT__sbox_output[7]),15);
        tracep->fullSData(oldp+3558,(vlSelf->ascon_top__DOT__sbox_output[8]),15);
        tracep->fullSData(oldp+3559,(vlSelf->ascon_top__DOT__sbox_output[9]),15);
        tracep->fullSData(oldp+3560,(vlSelf->ascon_top__DOT__sbox_output[10]),15);
        tracep->fullSData(oldp+3561,(vlSelf->ascon_top__DOT__sbox_output[11]),15);
        tracep->fullSData(oldp+3562,(vlSelf->ascon_top__DOT__sbox_output[12]),15);
        tracep->fullSData(oldp+3563,(vlSelf->ascon_top__DOT__sbox_output[13]),15);
        tracep->fullSData(oldp+3564,(vlSelf->ascon_top__DOT__sbox_output[14]),15);
        tracep->fullSData(oldp+3565,(vlSelf->ascon_top__DOT__sbox_output[15]),15);
        tracep->fullSData(oldp+3566,(vlSelf->ascon_top__DOT__sbox_output[16]),15);
        tracep->fullSData(oldp+3567,(vlSelf->ascon_top__DOT__sbox_output[17]),15);
        tracep->fullSData(oldp+3568,(vlSelf->ascon_top__DOT__sbox_output[18]),15);
        tracep->fullSData(oldp+3569,(vlSelf->ascon_top__DOT__sbox_output[19]),15);
        tracep->fullSData(oldp+3570,(vlSelf->ascon_top__DOT__sbox_output[20]),15);
        tracep->fullSData(oldp+3571,(vlSelf->ascon_top__DOT__sbox_output[21]),15);
        tracep->fullIData(oldp+3572,(vlSelf->ascon_top__DOT__unnamedblk2__DOT__p),32);
        tracep->fullSData(oldp+3573,(vlSelf->ascon_top__DOT__sbox_input
                                     [0U]),15);
        tracep->fullSData(oldp+3574,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3575,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3576,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3577,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3578,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3579,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3580,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3581,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3582,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3583,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3584,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3585,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3586,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3587,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3588,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3589,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3590,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3591,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3592,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3593,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3594,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3595,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3596,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3597,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3598,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3599,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3600,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3601,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3602,(vlSelf->ascon_top__DOT__sbox_input
                                     [1U]),15);
        tracep->fullSData(oldp+3603,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3604,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3605,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3606,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3607,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3608,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3609,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3610,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3611,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3612,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3613,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3614,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3615,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3616,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3617,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3618,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3619,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3620,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3621,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3622,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3623,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3624,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3625,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3626,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3627,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3628,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3629,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3630,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3631,(vlSelf->ascon_top__DOT__sbox_input
                                     [2U]),15);
        tracep->fullSData(oldp+3632,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3633,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3634,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3635,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3636,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3637,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3638,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3639,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3640,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3641,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3642,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3643,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3644,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3645,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3646,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3647,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3648,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3649,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3650,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3651,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3652,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3653,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3654,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3655,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3656,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3657,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3658,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3659,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3660,(vlSelf->ascon_top__DOT__sbox_input
                                     [3U]),15);
        tracep->fullSData(oldp+3661,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3662,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3663,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3664,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3665,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3666,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3667,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3668,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3669,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3670,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3671,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3672,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3673,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3674,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3675,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3676,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3677,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3678,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3679,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3680,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3681,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3682,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3683,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3684,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3685,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3686,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3687,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3688,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3689,(vlSelf->ascon_top__DOT__sbox_input
                                     [4U]),15);
        tracep->fullSData(oldp+3690,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3691,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3692,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3693,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3694,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3695,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3696,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3697,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3698,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3699,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3700,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3701,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3702,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3703,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3704,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3705,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3706,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3707,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3708,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3709,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3710,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3711,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3712,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3713,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3714,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3715,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3716,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3717,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3718,(vlSelf->ascon_top__DOT__sbox_input
                                     [5U]),15);
        tracep->fullSData(oldp+3719,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3720,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3721,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3722,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3723,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3724,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3725,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3726,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3727,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3728,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3729,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3730,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3731,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3732,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3733,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3734,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3735,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3736,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3737,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3738,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3739,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3740,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3741,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3742,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3743,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3744,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3745,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3746,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3747,(vlSelf->ascon_top__DOT__sbox_input
                                     [6U]),15);
        tracep->fullSData(oldp+3748,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3749,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3750,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3751,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3752,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3753,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3754,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3755,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3756,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3757,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3758,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3759,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3760,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3761,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3762,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3763,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3764,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3765,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3766,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3767,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3768,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3769,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3770,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3771,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3772,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3773,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3774,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3775,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3776,(vlSelf->ascon_top__DOT__sbox_input
                                     [7U]),15);
        tracep->fullSData(oldp+3777,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3778,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3779,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3780,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3781,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3782,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3783,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3784,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3785,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3786,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3787,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3788,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3789,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3790,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3791,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3792,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3793,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3794,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3795,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3796,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3797,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3798,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3799,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3800,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3801,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3802,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3803,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3804,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3805,(vlSelf->ascon_top__DOT__sbox_input
                                     [8U]),15);
        tracep->fullSData(oldp+3806,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3807,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3808,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3809,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3810,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3811,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3812,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3813,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3814,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3815,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3816,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3817,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3818,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3819,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3820,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3821,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3822,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3823,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3824,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3825,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3826,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3827,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3828,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3829,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3830,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3831,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3832,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3833,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3834,(vlSelf->ascon_top__DOT__sbox_input
                                     [9U]),15);
        tracep->fullSData(oldp+3835,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3836,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3837,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3838,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3839,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3840,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3841,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3842,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3843,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3844,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3845,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3846,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3847,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3848,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3849,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3850,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3851,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3852,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3853,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3854,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3855,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3856,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3857,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3858,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3859,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3860,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3861,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3862,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3863,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xaU]),15);
        tracep->fullSData(oldp+3864,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3865,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3866,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3867,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3868,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3869,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3870,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3871,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3872,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3873,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3874,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3875,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3876,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3877,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3878,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3879,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3880,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3881,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3882,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3883,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3884,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3885,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3886,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3887,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3888,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3889,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3890,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3891,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3892,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xbU]),15);
        tracep->fullSData(oldp+3893,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3894,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3895,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3896,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3897,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3898,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3899,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3900,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3901,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3902,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3903,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3904,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3905,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3906,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3907,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3908,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3909,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3910,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3911,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3912,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3913,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3914,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3915,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3916,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3917,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3918,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3919,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3920,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3921,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xcU]),15);
        tracep->fullSData(oldp+3922,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3923,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3924,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3925,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3926,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3927,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3928,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3929,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3930,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3931,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3932,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3933,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3934,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3935,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3936,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3937,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3938,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3939,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3940,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3941,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3942,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3943,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3944,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3945,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3946,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3947,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3948,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3949,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3950,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xdU]),15);
        tracep->fullSData(oldp+3951,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3952,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3953,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3954,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3955,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3956,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3957,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3958,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3959,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3960,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3961,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3962,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3963,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3964,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3965,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3966,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3967,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3968,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3969,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3970,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+3971,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+3972,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+3973,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+3974,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+3975,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+3976,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+3977,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+3978,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+3979,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xeU]),15);
        tracep->fullSData(oldp+3980,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+3981,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+3982,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+3983,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+3984,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+3985,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+3986,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+3987,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+3988,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+3989,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+3990,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+3991,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+3992,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+3993,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+3994,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+3995,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+3996,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+3997,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+3998,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+3999,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4000,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4001,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4002,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4003,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4004,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4005,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4006,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4007,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4008,(vlSelf->ascon_top__DOT__sbox_input
                                     [0xfU]),15);
        tracep->fullSData(oldp+4009,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4010,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4011,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4012,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4013,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4014,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4015,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4016,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4017,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4018,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4019,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4020,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4021,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4022,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4023,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4024,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4025,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4026,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4027,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4028,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4029,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4030,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4031,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4032,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4033,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4034,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4035,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4036,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4037,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x10U]),15);
        tracep->fullSData(oldp+4038,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4039,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4040,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4041,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4042,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4043,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4044,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4045,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4046,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4047,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4048,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4049,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4050,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4051,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4052,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4053,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4054,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4055,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4056,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4057,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4058,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4059,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4060,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4061,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4062,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4063,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4064,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4065,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4066,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x11U]),15);
        tracep->fullSData(oldp+4067,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4068,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4069,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4070,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4071,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4072,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4073,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4074,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4075,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4076,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4077,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4078,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4079,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4080,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4081,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4082,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4083,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4084,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4085,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4086,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4087,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4088,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4089,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4090,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4091,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4092,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4093,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4094,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4095,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x12U]),15);
        tracep->fullSData(oldp+4096,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4097,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4098,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4099,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4100,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4101,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4102,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4103,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4104,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4105,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4106,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4107,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4108,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4109,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4110,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4111,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4112,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4113,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4114,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4115,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4116,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4117,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4118,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4119,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4120,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4121,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4122,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4123,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4124,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x13U]),15);
        tracep->fullSData(oldp+4125,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4126,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4127,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4128,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4129,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4130,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4131,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4132,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4133,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4134,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4135,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4136,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4137,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4138,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4139,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4140,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4141,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4142,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4143,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4144,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4145,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4146,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4147,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4148,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4149,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4150,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4151,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4152,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4153,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x14U]),15);
        tracep->fullSData(oldp+4154,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4155,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4156,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4157,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4158,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4159,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4160,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4161,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4162,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4163,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4164,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4165,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4166,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4167,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4168,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4169,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4170,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4171,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4172,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4173,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4174,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4175,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4176,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4177,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4178,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4179,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4180,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4181,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullSData(oldp+4182,(vlSelf->ascon_top__DOT__sbox_input
                                     [0x15U]),15);
        tracep->fullSData(oldp+4183,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                               [0U]))))),15);
        tracep->fullCData(oldp+4184,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[0]),3);
        tracep->fullCData(oldp+4185,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[1]),3);
        tracep->fullCData(oldp+4186,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[2]),3);
        tracep->fullCData(oldp+4187,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[3]),3);
        tracep->fullCData(oldp+4188,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[4]),3);
        tracep->fullCData(oldp+4189,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [0U])),3);
        tracep->fullCData(oldp+4190,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4191,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4192,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [1U])),3);
        tracep->fullCData(oldp+4193,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4194,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4195,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [2U])),3);
        tracep->fullCData(oldp+4196,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4197,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4198,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [3U])),3);
        tracep->fullCData(oldp+4199,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4200,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4201,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                      [4U])),3);
        tracep->fullCData(oldp+4202,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4203,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4204,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[0]),3);
        tracep->fullCData(oldp+4205,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[1]),3);
        tracep->fullCData(oldp+4206,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[2]),3);
        tracep->fullCData(oldp+4207,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[3]),3);
        tracep->fullCData(oldp+4208,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[4]),3);
        tracep->fullIData(oldp+4209,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
        tracep->fullCData(oldp+4210,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        tracep->fullBit(oldp+4211,(vlSelf->ascon_top__DOT__write_en));
        tracep->fullBit(oldp+4212,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
        tracep->fullBit(oldp+4213,(vlSelf->ascon_top__DOT__sel_init_load));
        tracep->fullBit(oldp+4214,(vlSelf->ascon_top__DOT__sel_padding));
        tracep->fullBit(oldp+4215,(vlSelf->ascon_top__DOT__sel_absorb_data));
        tracep->fullWData(oldp+4216,(vlSelf->ascon_top__DOT__state_reg_in_shares[0]),320);
        tracep->fullWData(oldp+4226,(vlSelf->ascon_top__DOT__state_reg_in_shares[1]),320);
        tracep->fullWData(oldp+4236,(vlSelf->ascon_top__DOT__state_reg_in_shares[2]),320);
        tracep->fullWData(oldp+4246,(vlSelf->ascon_top__DOT__data_in_padded),128);
        tracep->fullWData(oldp+4250,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
        tracep->fullIData(oldp+4254,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
        tracep->fullBit(oldp+4255,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
        tracep->fullCData(oldp+4256,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
        tracep->fullBit(oldp+4257,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
        tracep->fullBit(oldp+4258,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
        tracep->fullBit(oldp+4259,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
        tracep->fullBit(oldp+4260,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
        __Vtemp48432[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][0U];
        __Vtemp48432[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][1U];
        __Vtemp48432[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][2U];
        __Vtemp48432[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][3U];
        __Vtemp48432[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][4U];
        __Vtemp48432[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][5U];
        __Vtemp48432[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][6U];
        __Vtemp48432[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][7U];
        __Vtemp48432[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][8U];
        __Vtemp48432[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [0U][9U];
        tracep->fullWData(oldp+4261,(__Vtemp48432),320);
        tracep->fullQData(oldp+4271,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0]),64);
        tracep->fullQData(oldp+4273,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1]),64);
        tracep->fullQData(oldp+4275,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2]),64);
        tracep->fullQData(oldp+4277,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3]),64);
        tracep->fullQData(oldp+4279,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4]),64);
        __Vtemp48433[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][0U];
        __Vtemp48433[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][1U];
        __Vtemp48433[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][2U];
        __Vtemp48433[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][3U];
        __Vtemp48433[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][4U];
        __Vtemp48433[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][5U];
        __Vtemp48433[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][6U];
        __Vtemp48433[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][7U];
        __Vtemp48433[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][8U];
        __Vtemp48433[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [1U][9U];
        tracep->fullWData(oldp+4281,(__Vtemp48433),320);
        __Vtemp48434[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][0U];
        __Vtemp48434[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][1U];
        __Vtemp48434[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][2U];
        __Vtemp48434[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][3U];
        __Vtemp48434[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][4U];
        __Vtemp48434[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][5U];
        __Vtemp48434[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][6U];
        __Vtemp48434[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][7U];
        __Vtemp48434[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][8U];
        __Vtemp48434[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
            [2U][9U];
        tracep->fullWData(oldp+4291,(__Vtemp48434),320);
        tracep->fullWData(oldp+4301,(vlSelf->ascon_top__DOT__shares_out),330);
        tracep->fullWData(oldp+4312,(vlSelf->ascon_top__DOT__affine_layer_in[0]),110);
        tracep->fullWData(oldp+4316,(vlSelf->ascon_top__DOT__affine_layer_in[1]),110);
        tracep->fullWData(oldp+4320,(vlSelf->ascon_top__DOT__affine_layer_in[2]),110);
        tracep->fullWData(oldp+4324,(vlSelf->ascon_top__DOT__affine_layer_out[0]),110);
        tracep->fullWData(oldp+4328,(vlSelf->ascon_top__DOT__affine_layer_out[1]),110);
        tracep->fullWData(oldp+4332,(vlSelf->ascon_top__DOT__affine_layer_out[2]),110);
        tracep->fullSData(oldp+4336,(vlSelf->ascon_top__DOT__next_sbox_input[0]),15);
        tracep->fullSData(oldp+4337,(vlSelf->ascon_top__DOT__next_sbox_input[1]),15);
        tracep->fullSData(oldp+4338,(vlSelf->ascon_top__DOT__next_sbox_input[2]),15);
        tracep->fullSData(oldp+4339,(vlSelf->ascon_top__DOT__next_sbox_input[3]),15);
        tracep->fullSData(oldp+4340,(vlSelf->ascon_top__DOT__next_sbox_input[4]),15);
        tracep->fullSData(oldp+4341,(vlSelf->ascon_top__DOT__next_sbox_input[5]),15);
        tracep->fullSData(oldp+4342,(vlSelf->ascon_top__DOT__next_sbox_input[6]),15);
        tracep->fullSData(oldp+4343,(vlSelf->ascon_top__DOT__next_sbox_input[7]),15);
        tracep->fullSData(oldp+4344,(vlSelf->ascon_top__DOT__next_sbox_input[8]),15);
        tracep->fullSData(oldp+4345,(vlSelf->ascon_top__DOT__next_sbox_input[9]),15);
        tracep->fullSData(oldp+4346,(vlSelf->ascon_top__DOT__next_sbox_input[10]),15);
        tracep->fullSData(oldp+4347,(vlSelf->ascon_top__DOT__next_sbox_input[11]),15);
        tracep->fullSData(oldp+4348,(vlSelf->ascon_top__DOT__next_sbox_input[12]),15);
        tracep->fullSData(oldp+4349,(vlSelf->ascon_top__DOT__next_sbox_input[13]),15);
        tracep->fullSData(oldp+4350,(vlSelf->ascon_top__DOT__next_sbox_input[14]),15);
        tracep->fullSData(oldp+4351,(vlSelf->ascon_top__DOT__next_sbox_input[15]),15);
        tracep->fullSData(oldp+4352,(vlSelf->ascon_top__DOT__next_sbox_input[16]),15);
        tracep->fullSData(oldp+4353,(vlSelf->ascon_top__DOT__next_sbox_input[17]),15);
        tracep->fullSData(oldp+4354,(vlSelf->ascon_top__DOT__next_sbox_input[18]),15);
        tracep->fullSData(oldp+4355,(vlSelf->ascon_top__DOT__next_sbox_input[19]),15);
        tracep->fullSData(oldp+4356,(vlSelf->ascon_top__DOT__next_sbox_input[20]),15);
        tracep->fullSData(oldp+4357,(vlSelf->ascon_top__DOT__next_sbox_input[21]),15);
        tracep->fullWData(oldp+4358,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),110);
        tracep->fullWData(oldp+4362,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0]),320);
        tracep->fullWData(oldp+4372,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[1]),320);
        tracep->fullWData(oldp+4382,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[2]),320);
        tracep->fullWData(oldp+4392,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0]),110);
        tracep->fullWData(oldp+4396,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1]),110);
        tracep->fullWData(oldp+4400,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2]),110);
        tracep->fullSData(oldp+4404,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),15);
        tracep->fullSData(oldp+4405,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),15);
        tracep->fullSData(oldp+4406,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),15);
        tracep->fullSData(oldp+4407,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),15);
        tracep->fullSData(oldp+4408,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),15);
        tracep->fullSData(oldp+4409,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),15);
        tracep->fullSData(oldp+4410,(vlSelf->ascon_top__DOT__sbox_output_unmasked[6]),15);
        tracep->fullSData(oldp+4411,(vlSelf->ascon_top__DOT__sbox_output_unmasked[7]),15);
        tracep->fullSData(oldp+4412,(vlSelf->ascon_top__DOT__sbox_output_unmasked[8]),15);
        tracep->fullSData(oldp+4413,(vlSelf->ascon_top__DOT__sbox_output_unmasked[9]),15);
        tracep->fullSData(oldp+4414,(vlSelf->ascon_top__DOT__sbox_output_unmasked[10]),15);
        tracep->fullSData(oldp+4415,(vlSelf->ascon_top__DOT__sbox_output_unmasked[11]),15);
        tracep->fullSData(oldp+4416,(vlSelf->ascon_top__DOT__sbox_output_unmasked[12]),15);
        tracep->fullSData(oldp+4417,(vlSelf->ascon_top__DOT__sbox_output_unmasked[13]),15);
        tracep->fullSData(oldp+4418,(vlSelf->ascon_top__DOT__sbox_output_unmasked[14]),15);
        tracep->fullSData(oldp+4419,(vlSelf->ascon_top__DOT__sbox_output_unmasked[15]),15);
        tracep->fullSData(oldp+4420,(vlSelf->ascon_top__DOT__sbox_output_unmasked[16]),15);
        tracep->fullSData(oldp+4421,(vlSelf->ascon_top__DOT__sbox_output_unmasked[17]),15);
        tracep->fullSData(oldp+4422,(vlSelf->ascon_top__DOT__sbox_output_unmasked[18]),15);
        tracep->fullSData(oldp+4423,(vlSelf->ascon_top__DOT__sbox_output_unmasked[19]),15);
        tracep->fullSData(oldp+4424,(vlSelf->ascon_top__DOT__sbox_output_unmasked[20]),15);
        tracep->fullSData(oldp+4425,(vlSelf->ascon_top__DOT__sbox_output_unmasked[21]),15);
        tracep->fullSData(oldp+4426,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),15);
        tracep->fullSData(oldp+4427,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),15);
        tracep->fullSData(oldp+4428,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),15);
        tracep->fullSData(oldp+4429,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),15);
        tracep->fullSData(oldp+4430,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),15);
        tracep->fullSData(oldp+4431,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),15);
        tracep->fullSData(oldp+4432,(vlSelf->ascon_top__DOT__mux_sbox_out[6]),15);
        tracep->fullSData(oldp+4433,(vlSelf->ascon_top__DOT__mux_sbox_out[7]),15);
        tracep->fullSData(oldp+4434,(vlSelf->ascon_top__DOT__mux_sbox_out[8]),15);
        tracep->fullSData(oldp+4435,(vlSelf->ascon_top__DOT__mux_sbox_out[9]),15);
        tracep->fullSData(oldp+4436,(vlSelf->ascon_top__DOT__mux_sbox_out[10]),15);
        tracep->fullSData(oldp+4437,(vlSelf->ascon_top__DOT__mux_sbox_out[11]),15);
        tracep->fullSData(oldp+4438,(vlSelf->ascon_top__DOT__mux_sbox_out[12]),15);
        tracep->fullSData(oldp+4439,(vlSelf->ascon_top__DOT__mux_sbox_out[13]),15);
        tracep->fullSData(oldp+4440,(vlSelf->ascon_top__DOT__mux_sbox_out[14]),15);
        tracep->fullSData(oldp+4441,(vlSelf->ascon_top__DOT__mux_sbox_out[15]),15);
        tracep->fullSData(oldp+4442,(vlSelf->ascon_top__DOT__mux_sbox_out[16]),15);
        tracep->fullSData(oldp+4443,(vlSelf->ascon_top__DOT__mux_sbox_out[17]),15);
        tracep->fullSData(oldp+4444,(vlSelf->ascon_top__DOT__mux_sbox_out[18]),15);
        tracep->fullSData(oldp+4445,(vlSelf->ascon_top__DOT__mux_sbox_out[19]),15);
        tracep->fullSData(oldp+4446,(vlSelf->ascon_top__DOT__mux_sbox_out[20]),15);
        tracep->fullSData(oldp+4447,(vlSelf->ascon_top__DOT__mux_sbox_out[21]),15);
        tracep->fullWData(oldp+4448,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),110);
        tracep->fullWData(oldp+4452,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),110);
        tracep->fullWData(oldp+4456,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),110);
        tracep->fullWData(oldp+4460,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),110);
        tracep->fullWData(oldp+4464,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),110);
        tracep->fullWData(oldp+4468,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),110);
        tracep->fullIData(oldp+4472,((0x3fffffU & (~ 
                                                   ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [0U][2U] 
                                                     << 0x14U) 
                                                    | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [0U][1U] 
                                                       >> 0xcU))))),22);
        tracep->fullIData(oldp+4473,((0x3fffffU & (~ 
                                                   ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [1U][2U] 
                                                     << 0x14U) 
                                                    | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [1U][1U] 
                                                       >> 0xcU))))),22);
        tracep->fullIData(oldp+4474,((0x3fffffU & (~ 
                                                   ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [2U][2U] 
                                                     << 0x14U) 
                                                    | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                       [2U][1U] 
                                                       >> 0xcU))))),22);
        __Vtemp48438[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][0U];
        __Vtemp48438[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][1U];
        __Vtemp48438[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][2U];
        __Vtemp48438[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][3U];
        __Vtemp48438[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][4U];
        __Vtemp48438[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][5U];
        __Vtemp48438[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][6U];
        __Vtemp48438[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][7U];
        __Vtemp48438[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][8U];
        __Vtemp48438[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U][9U];
        tracep->fullWData(oldp+4475,(__Vtemp48438),320);
        __Vtemp48439[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [0U][0U];
        __Vtemp48439[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [0U][1U];
        __Vtemp48439[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [0U][2U];
        __Vtemp48439[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [0U][3U];
        tracep->fullWData(oldp+4485,(__Vtemp48439),110);
        __Vtemp48440[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][0U];
        __Vtemp48440[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][1U];
        __Vtemp48440[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][2U];
        __Vtemp48440[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][3U];
        __Vtemp48440[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][4U];
        __Vtemp48440[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][5U];
        __Vtemp48440[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][6U];
        __Vtemp48440[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][7U];
        __Vtemp48440[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][8U];
        __Vtemp48440[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [1U][9U];
        tracep->fullWData(oldp+4489,(__Vtemp48440),320);
        __Vtemp48441[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [1U][0U];
        __Vtemp48441[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [1U][1U];
        __Vtemp48441[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [1U][2U];
        __Vtemp48441[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [1U][3U];
        tracep->fullWData(oldp+4499,(__Vtemp48441),110);
        tracep->fullQData(oldp+4503,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0]),64);
        tracep->fullQData(oldp+4505,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1]),64);
        tracep->fullQData(oldp+4507,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2]),64);
        tracep->fullQData(oldp+4509,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3]),64);
        tracep->fullQData(oldp+4511,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4]),64);
        __Vtemp48442[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][0U];
        __Vtemp48442[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][1U];
        __Vtemp48442[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][2U];
        __Vtemp48442[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][3U];
        __Vtemp48442[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][4U];
        __Vtemp48442[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][5U];
        __Vtemp48442[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][6U];
        __Vtemp48442[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][7U];
        __Vtemp48442[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][8U];
        __Vtemp48442[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [2U][9U];
        tracep->fullWData(oldp+4513,(__Vtemp48442),320);
        __Vtemp48443[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [2U][0U];
        __Vtemp48443[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [2U][1U];
        __Vtemp48443[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [2U][2U];
        __Vtemp48443[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
            [2U][3U];
        tracep->fullWData(oldp+4523,(__Vtemp48443),110);
        tracep->fullQData(oldp+4527,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0]),64);
        tracep->fullQData(oldp+4529,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1]),64);
        tracep->fullQData(oldp+4531,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2]),64);
        tracep->fullQData(oldp+4533,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3]),64);
        tracep->fullQData(oldp+4535,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4]),64);
        tracep->fullSData(oldp+4537,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4538,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4539,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4540,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4541,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4542,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4543,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4544,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4545,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4546,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4547,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4548,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4549,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4550,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4551,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4552,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4553,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4554,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4555,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4556,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4557,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4558,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4559,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4560,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4561,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4562,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4563,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4564,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4565,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4566,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4567,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4568,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4569,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4570,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4571,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4572,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4573,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4574,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4575,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4576,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4577,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4578,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4579,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4580,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4581,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4582,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4583,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4584,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4585,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4586,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4587,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4588,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4589,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4590,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4591,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4592,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4593,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4594,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4595,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4596,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4597,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4598,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4599,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4600,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4601,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4602,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4603,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4604,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4605,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4606,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4607,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4608,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4609,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4610,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4611,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4612,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4613,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4614,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4615,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4616,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4617,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4618,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4619,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4620,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4621,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4622,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4623,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4624,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4625,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4626,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4627,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4628,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4629,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4630,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4631,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4632,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4633,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4634,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4635,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4636,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4637,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4638,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4639,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4640,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4641,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4642,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4643,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4644,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4645,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4646,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4647,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4648,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4649,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4650,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4651,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4652,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4653,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4654,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4655,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4656,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4657,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4658,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4659,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4660,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4661,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4662,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4663,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4664,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4665,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4666,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4667,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4668,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4669,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4670,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4671,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4672,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4673,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4674,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4675,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4676,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4677,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4678,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4679,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4680,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4681,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4682,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4683,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4684,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4685,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4686,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4687,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4688,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4689,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4690,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4691,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4692,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4693,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4694,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4695,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4696,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4697,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4698,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4699,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4700,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4701,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4702,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4703,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4704,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4705,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4706,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4707,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4708,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4709,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4710,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4711,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4712,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4713,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4714,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4715,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4716,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4717,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4718,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4719,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4720,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4721,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4722,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4723,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4724,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4725,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4726,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4727,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4728,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4729,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4730,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4731,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4732,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4733,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4734,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4735,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4736,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4737,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4738,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4739,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4740,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4741,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4742,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4743,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4744,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4745,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4746,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4747,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4748,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4749,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4750,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4751,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4752,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4753,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4754,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4755,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4756,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4757,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4758,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4759,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4760,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4761,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4762,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4763,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4764,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4765,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4766,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4767,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4768,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4769,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4770,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4771,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4772,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4773,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4774,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4775,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4776,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4777,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4778,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4779,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4780,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4781,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4782,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4783,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4784,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4785,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4786,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4787,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4788,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4789,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4790,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4791,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4792,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4793,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4794,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4795,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4796,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4797,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4798,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4799,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4800,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4801,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4802,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4803,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4804,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4805,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4806,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4807,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4808,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4809,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4810,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4811,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4812,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4813,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4814,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4815,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4816,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4817,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4818,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4819,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4820,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4821,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4822,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4823,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4824,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4825,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4826,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4827,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4828,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4829,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4830,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4831,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4832,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4833,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4834,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4835,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4836,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4837,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4838,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4839,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4840,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4841,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4842,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4843,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4844,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4845,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4846,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4847,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4848,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4849,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4850,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4851,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4852,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4853,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4854,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4855,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4856,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4857,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4858,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4859,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4860,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4861,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4862,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4863,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4864,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4865,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4866,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4867,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4868,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4869,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4870,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4871,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4872,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4873,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4874,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4875,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4876,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4877,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4878,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4879,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4880,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4881,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4882,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4883,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4884,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4885,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4886,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4887,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4888,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4889,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4890,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4891,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4892,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4893,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4894,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4895,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4896,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4897,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4898,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4899,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4900,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4901,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4902,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4903,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4904,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4905,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4906,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4907,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4908,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4909,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4910,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4911,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4912,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4913,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4914,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4915,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4916,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4917,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4918,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4919,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4920,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4921,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4922,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4923,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4924,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4925,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4926,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4927,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4928,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4929,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4930,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4931,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4932,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4933,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4934,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4935,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4936,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4937,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4938,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4939,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4940,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4941,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4942,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4943,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4944,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4945,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4946,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4947,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4948,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4949,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4950,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4951,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4952,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4953,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4954,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4955,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4956,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4957,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4958,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4959,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4960,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4961,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4962,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4963,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4964,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4965,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4966,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4967,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4968,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4969,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4970,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4971,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4972,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4973,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4974,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+4975,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+4976,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+4977,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+4978,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+4979,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+4980,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+4981,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+4982,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+4983,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+4984,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+4985,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+4986,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+4987,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+4988,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+4989,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+4990,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+4991,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+4992,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+4993,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+4994,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+4995,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+4996,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+4997,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+4998,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+4999,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+5000,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+5001,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+5002,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+5003,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+5004,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+5005,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+5006,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+5007,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+5008,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+5009,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+5010,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+5011,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+5012,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+5013,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+5014,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+5015,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+5016,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+5017,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+5018,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+5019,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+5020,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+5021,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+5022,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+5023,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+5024,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+5025,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+5026,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+5027,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+5028,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+5029,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+5030,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+5031,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+5032,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+5033,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+5034,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+5035,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+5036,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+5037,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+5038,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+5039,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+5040,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+5041,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+5042,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+5043,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+5044,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+5045,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+5046,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+5047,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+5048,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+5049,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+5050,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+5051,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+5052,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+5053,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+5054,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+5055,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+5056,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+5057,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+5058,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+5059,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+5060,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+5061,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullSData(oldp+5062,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                       [4U] << 0xcU) 
                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                          [3U] << 9U) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                               [0U]))))),15);
        tracep->fullCData(oldp+5063,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [0U])),3);
        tracep->fullCData(oldp+5064,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 3U))),3);
        tracep->fullCData(oldp+5065,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [0U] >> 6U))),3);
        tracep->fullCData(oldp+5066,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [1U])),3);
        tracep->fullCData(oldp+5067,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 3U))),3);
        tracep->fullCData(oldp+5068,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [1U] >> 6U))),3);
        tracep->fullCData(oldp+5069,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [2U])),3);
        tracep->fullCData(oldp+5070,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 3U))),3);
        tracep->fullCData(oldp+5071,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [2U] >> 6U))),3);
        tracep->fullCData(oldp+5072,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [3U])),3);
        tracep->fullCData(oldp+5073,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 3U))),3);
        tracep->fullCData(oldp+5074,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [3U] >> 6U))),3);
        tracep->fullCData(oldp+5075,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                      [4U])),3);
        tracep->fullCData(oldp+5076,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 3U))),3);
        tracep->fullCData(oldp+5077,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                            [4U] >> 6U))),3);
        tracep->fullCData(oldp+5078,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
        tracep->fullCData(oldp+5079,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
        tracep->fullCData(oldp+5080,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
        tracep->fullCData(oldp+5081,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
        tracep->fullCData(oldp+5082,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
        tracep->fullCData(oldp+5083,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
        tracep->fullCData(oldp+5084,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
        tracep->fullCData(oldp+5085,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
        tracep->fullCData(oldp+5086,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        tracep->fullBit(oldp+5087,(vlSelf->clk));
        tracep->fullBit(oldp+5088,(vlSelf->reset_n));
        tracep->fullBit(oldp+5089,(vlSelf->reset_n_lfsr));
        tracep->fullBit(oldp+5090,(vlSelf->start));
        tracep->fullQData(oldp+5091,(vlSelf->key1),64);
        tracep->fullQData(oldp+5093,(vlSelf->key2),64);
        tracep->fullBit(oldp+5095,(vlSelf->load_data));
        tracep->fullQData(oldp+5096,(vlSelf->nonce1),64);
        tracep->fullQData(oldp+5098,(vlSelf->nonce2),64);
        tracep->fullQData(oldp+5100,(vlSelf->initialVector),64);
        tracep->fullWData(oldp+5102,(vlSelf->data_in),128);
        tracep->fullBit(oldp+5106,(vlSelf->valid_data_in));
        tracep->fullBit(oldp+5107,(vlSelf->last_block));
        tracep->fullCData(oldp+5108,(vlSelf->valid_bytes),5);
        tracep->fullBit(oldp+5109,(vlSelf->EOT));
        tracep->fullWData(oldp+5110,(vlSelf->state_reg_out),320);
        tracep->fullBit(oldp+5120,(vlSelf->ciphertext_valid));
        tracep->fullWData(oldp+5121,(vlSelf->ciphertext),128);
        tracep->fullBit(oldp+5125,(vlSelf->done));
        tracep->fullBit(oldp+5126,(vlSelf->ready_tag));
        tracep->fullQData(oldp+5127,(vlSelf->tag1),64);
        tracep->fullQData(oldp+5129,(vlSelf->tag2),64);
        tracep->fullBit(oldp+5131,(vlSelf->ready_for_data));
        tracep->fullBit(oldp+5132,(vlSelf->read_data));
        tracep->fullBit(oldp+5133,(vlSelf->debug_extra_padding_ff));
        tracep->fullCData(oldp+5134,(vlSelf->debug_bitcounter),3);
        tracep->fullCData(oldp+5135,(vlSelf->debug_roundcounter),4);
        tracep->fullCData(oldp+5136,(vlSelf->debug_state),5);
        tracep->fullQData(oldp+5137,(vlSelf->debug_state_0),64);
        tracep->fullQData(oldp+5139,(vlSelf->debug_state_1),64);
        tracep->fullQData(oldp+5141,(vlSelf->debug_state_2),64);
        tracep->fullQData(oldp+5143,(vlSelf->debug_state_3),64);
        tracep->fullQData(oldp+5145,(vlSelf->debug_state_4),64);
        tracep->fullQData(oldp+5147,(vlSelf->debug_round_state_0),64);
        tracep->fullQData(oldp+5149,(vlSelf->debug_round_state_1),64);
        tracep->fullQData(oldp+5151,(vlSelf->debug_round_state_2),64);
        tracep->fullQData(oldp+5153,(vlSelf->debug_round_state_3),64);
        tracep->fullQData(oldp+5155,(vlSelf->debug_round_state_4),64);
        tracep->fullQData(oldp+5157,(vlSelf->debug_sbox_nomasked_0),64);
        tracep->fullQData(oldp+5159,(vlSelf->debug_sbox_nomasked_1),64);
        tracep->fullQData(oldp+5161,(vlSelf->debug_sbox_nomasked_2),64);
        tracep->fullQData(oldp+5163,(vlSelf->debug_sbox_nomasked_3),64);
        tracep->fullQData(oldp+5165,(vlSelf->debug_sbox_nomasked_4),64);
        tracep->fullQData(oldp+5167,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->fullQData(oldp+5169,(vlSelf->debug_linear_diffusion_state4),64);
        __Vtemp48447[0U] = (IData)(vlSelf->initialVector);
        __Vtemp48447[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp48447[2U] = (IData)(vlSelf->key1);
        __Vtemp48447[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp48447[4U] = (IData)(vlSelf->key2);
        __Vtemp48447[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp48447[6U] = (IData)(vlSelf->nonce1);
        __Vtemp48447[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp48447[8U] = (IData)(vlSelf->nonce2);
        __Vtemp48447[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->fullWData(oldp+5171,(__Vtemp48447),320);
        tracep->fullCData(oldp+5181,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 1U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 4U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0xbU))))),3);
        tracep->fullCData(oldp+5182,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 2U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 5U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0xcU))))),3);
        tracep->fullCData(oldp+5183,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 3U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 6U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0xdU))))),3);
        tracep->fullCData(oldp+5184,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 4U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 7U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0xeU))))),3);
        tracep->fullCData(oldp+5185,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 5U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 8U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0xfU))))),3);
        tracep->fullCData(oldp+5186,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 6U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 9U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x10U))))),3);
        tracep->fullCData(oldp+5187,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 7U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xaU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x11U))))),3);
        tracep->fullCData(oldp+5188,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 8U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xbU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x12U))))),3);
        tracep->fullCData(oldp+5189,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 9U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xcU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x13U))))),3);
        tracep->fullCData(oldp+5190,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xaU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xdU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x14U))))),3);
        tracep->fullCData(oldp+5191,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xbU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xeU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x15U))))),3);
        tracep->fullCData(oldp+5192,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xcU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0xfU)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x16U))))),3);
        tracep->fullCData(oldp+5193,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xdU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x10U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x17U))))),3);
        tracep->fullCData(oldp+5194,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xeU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x11U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x18U))))),3);
        tracep->fullCData(oldp+5195,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0xfU)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x12U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x19U))))),3);
        tracep->fullCData(oldp+5196,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x10U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x13U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x1aU))))),3);
        tracep->fullCData(oldp+5197,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x11U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x14U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x1bU))))),3);
        tracep->fullCData(oldp+5198,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x12U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x15U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x1cU))))),3);
        tracep->fullCData(oldp+5199,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x13U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x16U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x1dU))))),3);
        tracep->fullCData(oldp+5200,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x14U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x17U)) 
                                         | (1U & (vlSelf->state_reg_out[0U] 
                                                  >> 0x1eU))))),3);
        tracep->fullCData(oldp+5201,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x15U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x18U)) 
                                         | (vlSelf->state_reg_out[0U] 
                                            >> 0x1fU)))),3);
        tracep->fullCData(oldp+5202,(((4U & (vlSelf->state_reg_out[1U] 
                                             >> 0x16U)) 
                                      | ((2U & (vlSelf->state_reg_out[1U] 
                                                >> 0x19U)) 
                                         | (1U & vlSelf->state_reg_out[1U])))),3);
        tracep->fullIData(oldp+5203,(0x42U),32);
        tracep->fullBit(oldp+5204,(1U));
        tracep->fullBit(oldp+5205,(0U));
        tracep->fullIData(oldp+5206,(3U),32);
        tracep->fullCData(oldp+5207,(3U),3);
        tracep->fullIData(oldp+5208,(0x14U),32);
        tracep->fullIData(oldp+5209,(3U),32);
        tracep->fullIData(oldp+5210,(0x16U),32);
        __Vtemp48448[0U] = 0U;
        __Vtemp48448[1U] = 0U;
        __Vtemp48448[2U] = 0U;
        __Vtemp48448[3U] = 0U;
        __Vtemp48448[4U] = 0U;
        __Vtemp48448[5U] = 0U;
        __Vtemp48448[6U] = 0U;
        tracep->fullWData(oldp+5211,(__Vtemp48448),223);
        tracep->fullIData(oldp+5218,(1U),32);
        tracep->fullIData(oldp+5219,(0x10U),32);
        tracep->fullIData(oldp+5220,(2U),32);
        tracep->fullIData(oldp+5221,(5U),32);
        tracep->fullIData(oldp+5222,(2U),32);
        tracep->fullIData(oldp+5223,(5U),32);
        tracep->fullIData(oldp+5224,(0x40U),32);
        tracep->fullIData(oldp+5225,(0x140U),32);
        tracep->fullIData(oldp+5226,(4U),32);
        tracep->fullIData(oldp+5227,(1U),32);
        tracep->fullIData(oldp+5228,(0xdfU),32);
        tracep->fullBit(oldp+5229,(0U));
        tracep->fullIData(oldp+5230,(0x1fU),32);
        tracep->fullIData(oldp+5231,(0x10000001U),31);
        tracep->fullIData(oldp+5232,(0U),32);
        tracep->fullIData(oldp+5233,(0U),32);
    }
}
