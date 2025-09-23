// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


void Vascon_top___024root__traceChgSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

void Vascon_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vascon_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vascon_top___024root__traceChgSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp48454;
    VlWide<4>/*127:0*/ __Vtemp48457;
    VlWide<10>/*319:0*/ __Vtemp48461;
    VlWide<7>/*223:0*/ __Vtemp48464;
    VlWide<10>/*319:0*/ __Vtemp48465;
    VlWide<10>/*319:0*/ __Vtemp48466;
    VlWide<10>/*319:0*/ __Vtemp48467;
    VlWide<10>/*319:0*/ __Vtemp48471;
    VlWide<4>/*127:0*/ __Vtemp48472;
    VlWide<10>/*319:0*/ __Vtemp48473;
    VlWide<4>/*127:0*/ __Vtemp48474;
    VlWide<10>/*319:0*/ __Vtemp48475;
    VlWide<4>/*127:0*/ __Vtemp48476;
    VlWide<10>/*319:0*/ __Vtemp48480;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ascon_top__DOT__rotations_a[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->ascon_top__DOT__rotations_a[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->ascon_top__DOT__rotations_a[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->ascon_top__DOT__rotations_a[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->ascon_top__DOT__rotations_a[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->ascon_top__DOT__rotations_b[0]),32);
            tracep->chgIData(oldp+6,(vlSelf->ascon_top__DOT__rotations_b[1]),32);
            tracep->chgIData(oldp+7,(vlSelf->ascon_top__DOT__rotations_b[2]),32);
            tracep->chgIData(oldp+8,(vlSelf->ascon_top__DOT__rotations_b[3]),32);
            tracep->chgIData(oldp+9,(vlSelf->ascon_top__DOT__rotations_b[4]),32);
            tracep->chgWData(oldp+10,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),254);
            tracep->chgWData(oldp+18,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),254);
            tracep->chgWData(oldp+26,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),254);
            tracep->chgWData(oldp+34,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),254);
            tracep->chgWData(oldp+42,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),254);
            tracep->chgWData(oldp+50,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),254);
            tracep->chgWData(oldp+58,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),254);
            tracep->chgWData(oldp+66,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),254);
            tracep->chgWData(oldp+74,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),254);
            tracep->chgWData(oldp+82,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),254);
            tracep->chgWData(oldp+90,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),254);
            tracep->chgWData(oldp+98,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),254);
            tracep->chgWData(oldp+106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),254);
            tracep->chgWData(oldp+114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),254);
            tracep->chgWData(oldp+122,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),254);
            tracep->chgWData(oldp+130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),254);
            tracep->chgWData(oldp+138,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),254);
            tracep->chgWData(oldp+146,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),254);
            tracep->chgWData(oldp+154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),254);
            tracep->chgWData(oldp+162,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),254);
            tracep->chgWData(oldp+170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),254);
            tracep->chgWData(oldp+178,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),254);
            tracep->chgWData(oldp+186,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),254);
            tracep->chgWData(oldp+194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),254);
            tracep->chgWData(oldp+202,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),254);
            tracep->chgWData(oldp+210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),254);
            tracep->chgWData(oldp+218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),254);
            tracep->chgWData(oldp+226,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),254);
            tracep->chgWData(oldp+234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),254);
            tracep->chgWData(oldp+242,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),254);
            tracep->chgWData(oldp+250,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),254);
            tracep->chgWData(oldp+258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),254);
            tracep->chgWData(oldp+266,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),254);
            tracep->chgWData(oldp+274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),254);
            tracep->chgWData(oldp+282,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),254);
            tracep->chgWData(oldp+290,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),254);
            tracep->chgWData(oldp+298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),254);
            tracep->chgWData(oldp+306,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),254);
            tracep->chgWData(oldp+314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),254);
            tracep->chgWData(oldp+322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),254);
            tracep->chgWData(oldp+330,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),254);
            tracep->chgWData(oldp+338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),254);
            tracep->chgWData(oldp+346,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),254);
            tracep->chgWData(oldp+354,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),254);
            tracep->chgWData(oldp+362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),254);
            tracep->chgWData(oldp+370,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),254);
            tracep->chgWData(oldp+378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),254);
            tracep->chgWData(oldp+386,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),254);
            tracep->chgWData(oldp+394,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),254);
            tracep->chgWData(oldp+402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),254);
            tracep->chgWData(oldp+410,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),254);
            tracep->chgWData(oldp+418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),254);
            tracep->chgWData(oldp+426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),254);
            tracep->chgWData(oldp+434,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),254);
            tracep->chgWData(oldp+442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),254);
            tracep->chgWData(oldp+450,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),254);
            tracep->chgWData(oldp+458,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),254);
            tracep->chgWData(oldp+466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),254);
            tracep->chgWData(oldp+474,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),254);
            tracep->chgWData(oldp+482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),254);
            tracep->chgWData(oldp+490,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),254);
            tracep->chgWData(oldp+498,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),254);
            tracep->chgWData(oldp+506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),254);
            tracep->chgWData(oldp+514,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),254);
            tracep->chgWData(oldp+522,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),254);
            tracep->chgWData(oldp+530,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),254);
            tracep->chgWData(oldp+538,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),254);
            tracep->chgWData(oldp+546,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),254);
            tracep->chgWData(oldp+554,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),254);
            tracep->chgWData(oldp+562,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),254);
            tracep->chgWData(oldp+570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),254);
            tracep->chgWData(oldp+578,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),254);
            tracep->chgWData(oldp+586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),254);
            tracep->chgWData(oldp+594,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),254);
            tracep->chgWData(oldp+602,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),254);
            tracep->chgWData(oldp+610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),254);
            tracep->chgWData(oldp+618,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),254);
            tracep->chgWData(oldp+626,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),254);
            tracep->chgWData(oldp+634,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),254);
            tracep->chgWData(oldp+642,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),254);
            tracep->chgWData(oldp+650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),254);
            tracep->chgWData(oldp+658,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),254);
            tracep->chgWData(oldp+666,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),254);
            tracep->chgWData(oldp+674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),254);
            tracep->chgWData(oldp+682,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),254);
            tracep->chgWData(oldp+690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),254);
            tracep->chgWData(oldp+698,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),254);
            tracep->chgWData(oldp+706,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),254);
            tracep->chgWData(oldp+714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),254);
            tracep->chgWData(oldp+722,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),254);
            tracep->chgWData(oldp+730,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),254);
            tracep->chgWData(oldp+738,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),254);
            tracep->chgWData(oldp+746,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),254);
            tracep->chgWData(oldp+754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),254);
            tracep->chgWData(oldp+762,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),254);
            tracep->chgWData(oldp+770,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),254);
            tracep->chgWData(oldp+778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),254);
            tracep->chgWData(oldp+786,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),254);
            tracep->chgWData(oldp+794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),254);
            tracep->chgWData(oldp+802,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),254);
            tracep->chgWData(oldp+810,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),254);
            tracep->chgWData(oldp+818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),254);
            tracep->chgWData(oldp+826,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),254);
            tracep->chgWData(oldp+834,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),254);
            tracep->chgWData(oldp+842,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),254);
            tracep->chgWData(oldp+850,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),254);
            tracep->chgWData(oldp+858,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),254);
            tracep->chgWData(oldp+866,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),254);
            tracep->chgWData(oldp+874,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),254);
            tracep->chgWData(oldp+882,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),254);
            tracep->chgWData(oldp+890,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),254);
            tracep->chgWData(oldp+898,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),254);
            tracep->chgWData(oldp+906,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),254);
            tracep->chgWData(oldp+914,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),254);
            tracep->chgWData(oldp+922,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),254);
            tracep->chgWData(oldp+930,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),254);
            tracep->chgWData(oldp+938,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),254);
            tracep->chgWData(oldp+946,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),254);
            tracep->chgWData(oldp+954,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),254);
            tracep->chgWData(oldp+962,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),254);
            tracep->chgWData(oldp+970,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),254);
            tracep->chgWData(oldp+978,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),254);
            tracep->chgWData(oldp+986,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),254);
            tracep->chgWData(oldp+994,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),254);
            tracep->chgWData(oldp+1002,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),254);
            tracep->chgWData(oldp+1010,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),254);
            tracep->chgWData(oldp+1018,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),254);
            tracep->chgWData(oldp+1026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__mask),254);
            tracep->chgWData(oldp+1034,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__mask),254);
            tracep->chgWData(oldp+1042,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__mask),254);
            tracep->chgWData(oldp+1050,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__mask),254);
            tracep->chgWData(oldp+1058,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__mask),254);
            tracep->chgWData(oldp+1066,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__mask),254);
            tracep->chgWData(oldp+1074,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__mask),254);
            tracep->chgWData(oldp+1082,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__mask),254);
            tracep->chgWData(oldp+1090,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__mask),254);
            tracep->chgWData(oldp+1098,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__mask),254);
            tracep->chgWData(oldp+1106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__mask),254);
            tracep->chgWData(oldp+1114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__mask),254);
            tracep->chgWData(oldp+1122,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__mask),254);
            tracep->chgWData(oldp+1130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__mask),254);
            tracep->chgWData(oldp+1138,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__mask),254);
            tracep->chgWData(oldp+1146,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__mask),254);
            tracep->chgWData(oldp+1154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__mask),254);
            tracep->chgWData(oldp+1162,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__mask),254);
            tracep->chgWData(oldp+1170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__mask),254);
            tracep->chgWData(oldp+1178,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__mask),254);
            tracep->chgWData(oldp+1186,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__mask),254);
            tracep->chgWData(oldp+1194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__mask),254);
            tracep->chgWData(oldp+1202,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__mask),254);
            tracep->chgWData(oldp+1210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__mask),254);
            tracep->chgWData(oldp+1218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__mask),254);
            tracep->chgWData(oldp+1226,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__mask),254);
            tracep->chgWData(oldp+1234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__mask),254);
            tracep->chgWData(oldp+1242,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__mask),254);
            tracep->chgWData(oldp+1250,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__mask),254);
            tracep->chgWData(oldp+1258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__mask),254);
            tracep->chgWData(oldp+1266,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__mask),254);
            tracep->chgWData(oldp+1274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__mask),254);
            tracep->chgWData(oldp+1282,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__mask),254);
            tracep->chgWData(oldp+1290,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__mask),254);
            tracep->chgWData(oldp+1298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__mask),254);
            tracep->chgWData(oldp+1306,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__mask),254);
            tracep->chgWData(oldp+1314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__mask),254);
            tracep->chgWData(oldp+1322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__mask),254);
            tracep->chgWData(oldp+1330,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__mask),254);
            tracep->chgWData(oldp+1338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__mask),254);
            tracep->chgWData(oldp+1346,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__mask),254);
            tracep->chgWData(oldp+1354,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__mask),254);
            tracep->chgWData(oldp+1362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__mask),254);
            tracep->chgWData(oldp+1370,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__mask),254);
            tracep->chgWData(oldp+1378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__mask),254);
            tracep->chgWData(oldp+1386,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__mask),254);
            tracep->chgWData(oldp+1394,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__mask),254);
            tracep->chgWData(oldp+1402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__mask),254);
            tracep->chgWData(oldp+1410,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__mask),254);
            tracep->chgWData(oldp+1418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__mask),254);
            tracep->chgWData(oldp+1426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__mask),254);
            tracep->chgWData(oldp+1434,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__mask),254);
            tracep->chgWData(oldp+1442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__mask),254);
            tracep->chgWData(oldp+1450,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__mask),254);
            tracep->chgWData(oldp+1458,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__mask),254);
            tracep->chgWData(oldp+1466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__mask),254);
            tracep->chgWData(oldp+1474,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__mask),254);
            tracep->chgWData(oldp+1482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__mask),254);
            tracep->chgWData(oldp+1490,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__mask),254);
            tracep->chgWData(oldp+1498,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__mask),254);
            tracep->chgWData(oldp+1506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__mask),254);
            tracep->chgWData(oldp+1514,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__mask),254);
            tracep->chgWData(oldp+1522,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__mask),254);
            tracep->chgWData(oldp+1530,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__mask),254);
            tracep->chgWData(oldp+1538,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__mask),254);
            tracep->chgWData(oldp+1546,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__mask),254);
            tracep->chgWData(oldp+1554,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__mask),254);
            tracep->chgWData(oldp+1562,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__mask),254);
            tracep->chgWData(oldp+1570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__mask),254);
            tracep->chgWData(oldp+1578,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__mask),254);
            tracep->chgWData(oldp+1586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__mask),254);
            tracep->chgWData(oldp+1594,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__mask),254);
            tracep->chgWData(oldp+1602,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__mask),254);
            tracep->chgWData(oldp+1610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__mask),254);
            tracep->chgWData(oldp+1618,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__mask),254);
            tracep->chgWData(oldp+1626,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__mask),254);
            tracep->chgWData(oldp+1634,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__mask),254);
            tracep->chgWData(oldp+1642,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__mask),254);
            tracep->chgWData(oldp+1650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__mask),254);
            tracep->chgWData(oldp+1658,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__mask),254);
            tracep->chgWData(oldp+1666,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__mask),254);
            tracep->chgWData(oldp+1674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask),254);
            tracep->chgWData(oldp+1682,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask),254);
            tracep->chgWData(oldp+1690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask),254);
            tracep->chgWData(oldp+1698,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask),254);
            tracep->chgWData(oldp+1706,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask),254);
            tracep->chgWData(oldp+1714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask),254);
            tracep->chgWData(oldp+1722,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask),254);
            tracep->chgWData(oldp+1730,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask),254);
            tracep->chgWData(oldp+1738,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask),254);
            tracep->chgWData(oldp+1746,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask),254);
            tracep->chgWData(oldp+1754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask),254);
            tracep->chgWData(oldp+1762,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask),254);
            tracep->chgWData(oldp+1770,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask),254);
            tracep->chgWData(oldp+1778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask),254);
            tracep->chgWData(oldp+1786,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask),254);
            tracep->chgWData(oldp+1794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask),254);
            tracep->chgWData(oldp+1802,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask),254);
            tracep->chgWData(oldp+1810,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask),254);
            tracep->chgWData(oldp+1818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask),254);
            tracep->chgWData(oldp+1826,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask),254);
            tracep->chgWData(oldp+1834,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask),254);
            tracep->chgWData(oldp+1842,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask),254);
            tracep->chgWData(oldp+1850,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask),254);
            tracep->chgWData(oldp+1858,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask),254);
            tracep->chgWData(oldp+1866,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask),254);
            tracep->chgWData(oldp+1874,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask),254);
            tracep->chgWData(oldp+1882,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask),254);
            tracep->chgWData(oldp+1890,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask),254);
            tracep->chgWData(oldp+1898,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask),254);
            tracep->chgWData(oldp+1906,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask),254);
            tracep->chgWData(oldp+1914,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask),254);
            tracep->chgWData(oldp+1922,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask),254);
            tracep->chgWData(oldp+1930,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask),254);
            tracep->chgWData(oldp+1938,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask),254);
            tracep->chgWData(oldp+1946,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask),254);
            tracep->chgWData(oldp+1954,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask),254);
            tracep->chgWData(oldp+1962,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask),254);
            tracep->chgWData(oldp+1970,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask),254);
            tracep->chgWData(oldp+1978,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask),254);
            tracep->chgWData(oldp+1986,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask),254);
            tracep->chgWData(oldp+1994,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask),254);
            tracep->chgWData(oldp+2002,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask),254);
            tracep->chgWData(oldp+2010,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask),254);
            tracep->chgWData(oldp+2018,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask),254);
            tracep->chgWData(oldp+2026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask),254);
            tracep->chgWData(oldp+2034,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask),254);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+2042,(vlSelf->ascon_top__DOT__extra_padding_ff));
            tracep->chgBit(oldp+2043,(vlSelf->ascon_top__DOT__shift_en));
            tracep->chgBit(oldp+2044,(vlSelf->ascon_top__DOT__shift_type));
            tracep->chgBit(oldp+2045,(vlSelf->ascon_top__DOT__last_cycle));
            tracep->chgBit(oldp+2046,(vlSelf->ascon_top__DOT__reg_key1_load));
            tracep->chgBit(oldp+2047,(vlSelf->ascon_top__DOT__reg_key2_load));
            tracep->chgBit(oldp+2048,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
            tracep->chgBit(oldp+2049,(vlSelf->ascon_top__DOT__sel_masked_round));
            tracep->chgBit(oldp+2050,(vlSelf->ascon_top__DOT__sel_xor_signal));
            tracep->chgCData(oldp+2051,(vlSelf->ascon_top__DOT__round_counter),4);
            tracep->chgCData(oldp+2052,(vlSelf->ascon_top__DOT__bit_counter),3);
            tracep->chgBit(oldp+2053,(vlSelf->ascon_top__DOT__shift_enable_sipo));
            tracep->chgBit(oldp+2054,(vlSelf->ascon_top__DOT__last_cycle_sipo));
            tracep->chgWData(oldp+2055,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0]),320);
            tracep->chgWData(oldp+2065,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1]),320);
            tracep->chgWData(oldp+2075,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2]),320);
            tracep->chgWData(oldp+2085,(vlSelf->ascon_top__DOT__state_reg_out_shares[0]),320);
            tracep->chgWData(oldp+2095,(vlSelf->ascon_top__DOT__state_reg_out_shares[1]),320);
            tracep->chgWData(oldp+2105,(vlSelf->ascon_top__DOT__state_reg_out_shares[2]),320);
            tracep->chgQData(oldp+2115,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+2117,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+2119,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
            tracep->chgQData(oldp+2121,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
            tracep->chgQData(oldp+2123,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
            tracep->chgQData(oldp+2125,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
            tracep->chgQData(oldp+2127,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
            tracep->chgQData(oldp+2129,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                          [0U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                           [0U][0U])))),64);
            tracep->chgQData(oldp+2131,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                          [0U][3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                           [0U][2U])))),64);
            tracep->chgQData(oldp+2133,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                          [0U][5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                           [0U][4U])))),64);
            tracep->chgQData(oldp+2135,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                          [0U][7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                           [0U][6U])))),64);
            tracep->chgQData(oldp+2137,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                          [0U][9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                           [0U][8U])))),64);
            tracep->chgWData(oldp+2139,(vlSelf->ascon_top__DOT__mux_1st_x0),66);
            tracep->chgWData(oldp+2142,(vlSelf->ascon_top__DOT__mux_1st_x1),66);
            tracep->chgWData(oldp+2145,(vlSelf->ascon_top__DOT__mux_1st_x2),66);
            tracep->chgWData(oldp+2148,(vlSelf->ascon_top__DOT__mux_1st_x3),66);
            tracep->chgWData(oldp+2151,(vlSelf->ascon_top__DOT__mux_1st_x4),66);
            tracep->chgQData(oldp+2154,((0xf0ULL - 
                                         (0xfULL * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
            VL_EXTEND_WQ(66,64, __Vtemp48454, (0xf0ULL 
                                               - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
            tracep->chgWData(oldp+2156,(__Vtemp48454),66);
            tracep->chgIData(oldp+2159,(vlSelf->ascon_top__DOT__rc_block[0]),22);
            tracep->chgIData(oldp+2160,(vlSelf->ascon_top__DOT__rc_block[1]),22);
            tracep->chgIData(oldp+2161,(vlSelf->ascon_top__DOT__rc_block[2]),22);
            __Vtemp48457[0U] = (IData)((((QData)((IData)(
                                                         (0x3fffffU 
                                                          & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                         << 0x16U) 
                                        | (QData)((IData)(
                                                          (0x3fffffU 
                                                           & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))));
            __Vtemp48457[1U] = ((vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                 << 0xcU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (0x3fffffU 
                                                                        & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                                       << 0x16U) 
                                                      | (QData)((IData)(
                                                                        (0x3fffffU 
                                                                         & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))) 
                                                     >> 0x20U)));
            __Vtemp48457[2U] = ((vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                 << 0x18U) | ((0xfffffcU 
                                               & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                                  << 2U)) 
                                              | (3U 
                                                 & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                    >> 0x14U))));
            __Vtemp48457[3U] = (0x3fffU & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                           >> 8U));
            tracep->chgWData(oldp+2162,(__Vtemp48457),110);
            tracep->chgWData(oldp+2166,(vlSelf->ascon_top__DOT__recombine_shares_sbox),320);
            tracep->chgWData(oldp+2176,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
            tracep->chgQData(oldp+2186,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
            tracep->chgQData(oldp+2188,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
            tracep->chgQData(oldp+2190,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
            tracep->chgQData(oldp+2192,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
            tracep->chgQData(oldp+2194,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
            tracep->chgWData(oldp+2196,(vlSelf->ascon_top__DOT__recombine_shares),320);
            tracep->chgQData(oldp+2206,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U])),64);
            tracep->chgQData(oldp+2208,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                          ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                          : 0x8000000000000000ULL)),64);
            tracep->chgIData(oldp+2210,(vlSelf->ascon_top__DOT__mux_logic__BRA__0__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
            tracep->chgIData(oldp+2211,(vlSelf->ascon_top__DOT__mux_logic__BRA__1__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
            tracep->chgIData(oldp+2212,(vlSelf->ascon_top__DOT__mux_logic__BRA__2__KET____DOT__unnamedblk1__DOT__rc_block_temp),22);
            tracep->chgCData(oldp+2213,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2214,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2215,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2216,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2217,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2218,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2219,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2220,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2221,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2222,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2223,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2224,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2225,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2226,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2227,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2228,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2229,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2230,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2231,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2232,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2233,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2234,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2235,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2236,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2237,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2238,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2239,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2240,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2241,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2242,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2243,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2244,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2245,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2246,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2247,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2248,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2249,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2250,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2251,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2252,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2253,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2254,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2255,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2256,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2257,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2258,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2259,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2260,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2261,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2262,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2263,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2264,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2265,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2266,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2267,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2268,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2269,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2270,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2271,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2272,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2273,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2274,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2275,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2276,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2277,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2278,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2279,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2280,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2281,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2282,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2283,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2284,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2285,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2286,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2287,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2288,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2289,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2290,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2291,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2292,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2293,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2294,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2295,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2296,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2297,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2298,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2299,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2300,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2301,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2302,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2303,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2304,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2305,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2306,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2307,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2308,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2309,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2310,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2311,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2312,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2313,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2314,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2315,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2316,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2317,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2318,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2319,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2320,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2321,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2322,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2323,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2324,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2325,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2326,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2327,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2328,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2329,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2330,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2331,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2332,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2333,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2334,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2335,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2336,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2337,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2338,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2339,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2340,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2341,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2342,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2343,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2344,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2345,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2346,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2347,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2348,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2349,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2350,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2351,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2352,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2353,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2354,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2355,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2356,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2357,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2358,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2359,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2360,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2361,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2362,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2363,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2364,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2365,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2366,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2367,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2368,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2369,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2370,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2371,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2372,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2373,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2374,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2375,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2376,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2377,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2378,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2379,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2380,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2381,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2382,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2383,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2384,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2385,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2386,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2387,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2388,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2389,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2390,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2391,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2392,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2393,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2394,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2395,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2396,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2397,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2398,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2399,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2400,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2401,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2402,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2403,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2404,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2405,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2406,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2407,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2408,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2409,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2410,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2411,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2412,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2413,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2414,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2415,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2416,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2417,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2418,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2419,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2420,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2421,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2422,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2423,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2424,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2425,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2426,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2427,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2428,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2429,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2430,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2431,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2432,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2433,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2434,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2435,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2436,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2437,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2438,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2439,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2440,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2441,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2442,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2443,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2444,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2445,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2446,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2447,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2448,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2449,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2450,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2451,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2452,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2453,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2454,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2455,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2456,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2457,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2458,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2459,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2460,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2461,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2462,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2463,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2464,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2465,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2466,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2467,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2468,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2469,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2470,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2471,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2472,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2473,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2474,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2475,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2476,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2477,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2478,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2479,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2480,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2481,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2482,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2483,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2484,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2485,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2486,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2487,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2488,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2489,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2490,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2491,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2492,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2493,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2494,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2495,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2496,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2497,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2498,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2499,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2500,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2501,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2502,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2503,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2504,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2505,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2506,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2507,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2508,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2509,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2510,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2511,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2512,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2513,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2514,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2515,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2516,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2517,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2518,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2519,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2520,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2521,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2522,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2523,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2524,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2525,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2526,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2527,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2528,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2529,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2530,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2531,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2532,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+2533,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2534,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2535,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2536,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2537,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2538,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2539,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2540,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2541,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2542,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2543,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2544,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2545,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2546,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2547,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2548,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2549,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2550,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2551,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2552,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2553,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2554,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2555,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2556,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2557,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2558,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2559,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2560,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2561,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2562,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2563,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2564,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2565,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2566,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2567,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2568,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2569,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2570,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2571,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2572,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2573,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2574,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2575,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2576,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2577,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2578,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2579,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2580,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2581,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2582,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2583,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2584,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2585,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2586,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2587,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2588,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2589,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2590,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2591,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2592,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2593,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2594,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2595,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2596,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2597,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2598,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2599,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2600,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2601,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2602,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2603,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2604,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2605,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2606,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2607,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2608,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2609,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2610,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2611,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2612,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2613,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2614,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2615,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2616,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2617,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2618,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2619,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2620,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2621,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2622,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2623,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2624,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2625,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2626,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2627,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2628,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2629,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2630,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2631,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2632,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2633,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2634,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2635,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2636,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2637,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2638,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2639,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2640,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2641,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2642,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2643,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2644,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2645,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2646,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2647,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2648,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2649,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2650,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2651,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2652,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2653,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2654,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2655,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2656,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2657,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2658,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2659,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2660,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2661,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2662,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2663,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2664,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2665,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2666,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2667,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2668,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2669,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2670,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2671,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2672,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2673,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2674,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2675,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2676,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2677,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2678,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2679,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2680,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2681,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2682,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2683,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2684,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2685,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2686,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2687,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2688,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2689,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2690,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2691,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2692,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2693,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2694,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2695,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2696,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2697,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2698,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2699,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2700,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2701,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2702,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2703,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2704,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2705,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2706,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2707,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2708,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2709,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2710,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2711,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2712,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2713,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2714,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2715,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2716,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2717,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2718,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2719,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2720,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2721,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2722,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2723,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2724,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2725,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2726,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2727,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2728,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2729,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2730,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2731,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2732,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2733,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2734,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2735,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2736,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2737,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2738,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2739,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2740,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2741,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2742,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2743,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2744,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2745,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2746,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2747,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2748,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2749,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2750,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2751,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2752,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2753,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2754,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2755,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2756,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2757,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2758,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2759,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2760,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2761,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2762,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2763,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2764,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2765,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2766,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2767,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2768,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2769,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2770,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2771,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2772,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2773,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2774,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2775,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2776,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2777,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2778,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2779,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2780,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2781,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2782,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2783,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2784,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2785,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2786,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2787,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2788,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2789,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2790,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2791,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2792,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2793,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2794,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2795,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2796,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2797,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2798,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2799,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2800,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2801,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2802,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2803,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2804,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2805,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2806,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2807,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2808,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2809,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2810,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2811,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2812,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2813,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2814,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2815,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2816,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2817,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2818,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2819,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2820,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2821,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2822,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2823,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2824,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2825,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2826,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2827,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2828,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2829,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2830,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2831,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2832,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2833,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2834,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2835,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2836,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2837,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2838,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2839,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2840,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2841,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2842,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2843,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2844,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2845,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2846,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2847,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2848,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2849,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2850,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2851,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+2852,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits),3);
            tracep->chgBit(oldp+2853,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4));
            tracep->chgCData(oldp+2854,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
            tracep->chgCData(oldp+2855,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),3);
            tracep->chgCData(oldp+2856,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
            tracep->chgBit(oldp+2857,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
            tracep->chgBit(oldp+2858,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
            tracep->chgQData(oldp+2859,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x0[0U])))),64);
            tracep->chgIData(oldp+2861,((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x0[0U])),22);
            tracep->chgQData(oldp+2862,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
            tracep->chgQData(oldp+2864,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x1[0U])))),64);
            tracep->chgIData(oldp+2866,((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x1[0U])),22);
            tracep->chgQData(oldp+2867,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
            tracep->chgQData(oldp+2869,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x2[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x2[0U])))),64);
            tracep->chgIData(oldp+2871,((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x2[0U])),22);
            tracep->chgQData(oldp+2872,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
            tracep->chgQData(oldp+2874,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x3[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x3[0U])))),64);
            tracep->chgIData(oldp+2876,((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x3[0U])),22);
            tracep->chgQData(oldp+2877,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
            tracep->chgQData(oldp+2879,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x4[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x4[0U])))),64);
            tracep->chgIData(oldp+2881,((0x3fffffU 
                                         & vlSelf->ascon_top__DOT__mux_1st_x4[0U])),22);
            tracep->chgQData(oldp+2882,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
            tracep->chgWData(oldp+2884,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1),320);
            tracep->chgWData(oldp+2894,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+2904,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+2906,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+2908,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+2910,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+2912,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+2914,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+2915,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
            tracep->chgWData(oldp+2916,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1),320);
            tracep->chgWData(oldp+2926,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+2936,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+2938,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+2940,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+2942,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+2944,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+2946,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+2947,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
            tracep->chgWData(oldp+2948,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1),320);
            tracep->chgWData(oldp+2958,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+2968,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+2970,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+2972,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+2974,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+2976,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+2978,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+2979,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgQData(oldp+2980,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
            tracep->chgQData(oldp+2982,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
            tracep->chgQData(oldp+2984,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
            tracep->chgQData(oldp+2986,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
            tracep->chgQData(oldp+2988,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
            __Vtemp48461[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
            __Vtemp48461[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                        >> 0x20U));
            __Vtemp48461[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
            __Vtemp48461[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                        >> 0x20U));
            __Vtemp48461[4U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
            __Vtemp48461[5U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                        >> 0x20U));
            __Vtemp48461[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U]));
            __Vtemp48461[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U]) >> 0x20U));
            __Vtemp48461[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U]));
            __Vtemp48461[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U]) >> 0x20U));
            tracep->chgWData(oldp+2990,(__Vtemp48461),320);
            tracep->chgQData(oldp+3000,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+3002,(vlSelf->ascon_top__DOT__lfsr_out),223);
            tracep->chgIData(oldp+3009,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
            tracep->chgIData(oldp+3010,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
            __Vtemp48464[0U] = vlSelf->ascon_top__DOT__lfsr_out[0U];
            __Vtemp48464[1U] = vlSelf->ascon_top__DOT__lfsr_out[1U];
            __Vtemp48464[2U] = vlSelf->ascon_top__DOT__lfsr_out[2U];
            __Vtemp48464[3U] = vlSelf->ascon_top__DOT__lfsr_out[3U];
            __Vtemp48464[4U] = vlSelf->ascon_top__DOT__lfsr_out[4U];
            __Vtemp48464[5U] = vlSelf->ascon_top__DOT__lfsr_out[5U];
            __Vtemp48464[6U] = (0xfffffffU & vlSelf->ascon_top__DOT__lfsr_out[6U]);
            tracep->chgWData(oldp+3011,(__Vtemp48464),220);
            tracep->chgCData(oldp+3018,((7U & (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+3019,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg));
            tracep->chgIData(oldp+3020,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i),32);
            tracep->chgBit(oldp+3021,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg));
            tracep->chgIData(oldp+3022,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i),32);
            tracep->chgBit(oldp+3023,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg));
            tracep->chgIData(oldp+3024,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i),32);
            tracep->chgBit(oldp+3025,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg));
            tracep->chgIData(oldp+3026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i),32);
            tracep->chgBit(oldp+3027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg));
            tracep->chgIData(oldp+3028,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i),32);
            tracep->chgBit(oldp+3029,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg));
            tracep->chgIData(oldp+3030,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i),32);
            tracep->chgBit(oldp+3031,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg));
            tracep->chgIData(oldp+3032,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i),32);
            tracep->chgBit(oldp+3033,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg));
            tracep->chgIData(oldp+3034,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i),32);
            tracep->chgBit(oldp+3035,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg));
            tracep->chgIData(oldp+3036,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i),32);
            tracep->chgBit(oldp+3037,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg));
            tracep->chgIData(oldp+3038,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i),32);
            tracep->chgBit(oldp+3039,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg));
            tracep->chgIData(oldp+3040,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i),32);
            tracep->chgBit(oldp+3041,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg));
            tracep->chgIData(oldp+3042,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i),32);
            tracep->chgBit(oldp+3043,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg));
            tracep->chgIData(oldp+3044,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i),32);
            tracep->chgBit(oldp+3045,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg));
            tracep->chgIData(oldp+3046,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i),32);
            tracep->chgBit(oldp+3047,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg));
            tracep->chgIData(oldp+3048,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i),32);
            tracep->chgBit(oldp+3049,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg));
            tracep->chgIData(oldp+3050,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i),32);
            tracep->chgBit(oldp+3051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg));
            tracep->chgIData(oldp+3052,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i),32);
            tracep->chgBit(oldp+3053,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg));
            tracep->chgIData(oldp+3054,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i),32);
            tracep->chgBit(oldp+3055,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg));
            tracep->chgIData(oldp+3056,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i),32);
            tracep->chgBit(oldp+3057,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg));
            tracep->chgIData(oldp+3058,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i),32);
            tracep->chgBit(oldp+3059,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg));
            tracep->chgIData(oldp+3060,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i),32);
            tracep->chgBit(oldp+3061,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg));
            tracep->chgIData(oldp+3062,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i),32);
            tracep->chgBit(oldp+3063,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg));
            tracep->chgIData(oldp+3064,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i),32);
            tracep->chgBit(oldp+3065,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg));
            tracep->chgIData(oldp+3066,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i),32);
            tracep->chgBit(oldp+3067,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg));
            tracep->chgIData(oldp+3068,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i),32);
            tracep->chgBit(oldp+3069,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg));
            tracep->chgIData(oldp+3070,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i),32);
            tracep->chgBit(oldp+3071,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg));
            tracep->chgIData(oldp+3072,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i),32);
            tracep->chgBit(oldp+3073,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg));
            tracep->chgIData(oldp+3074,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i),32);
            tracep->chgBit(oldp+3075,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg));
            tracep->chgIData(oldp+3076,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i),32);
            tracep->chgBit(oldp+3077,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg));
            tracep->chgIData(oldp+3078,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i),32);
            tracep->chgBit(oldp+3079,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg));
            tracep->chgIData(oldp+3080,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i),32);
            tracep->chgBit(oldp+3081,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg));
            tracep->chgIData(oldp+3082,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i),32);
            tracep->chgBit(oldp+3083,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg));
            tracep->chgIData(oldp+3084,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i),32);
            tracep->chgBit(oldp+3085,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg));
            tracep->chgIData(oldp+3086,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i),32);
            tracep->chgBit(oldp+3087,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg));
            tracep->chgIData(oldp+3088,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i),32);
            tracep->chgBit(oldp+3089,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg));
            tracep->chgIData(oldp+3090,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i),32);
            tracep->chgBit(oldp+3091,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg));
            tracep->chgIData(oldp+3092,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i),32);
            tracep->chgBit(oldp+3093,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg));
            tracep->chgIData(oldp+3094,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i),32);
            tracep->chgBit(oldp+3095,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg));
            tracep->chgIData(oldp+3096,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i),32);
            tracep->chgBit(oldp+3097,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg));
            tracep->chgIData(oldp+3098,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i),32);
            tracep->chgBit(oldp+3099,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg));
            tracep->chgIData(oldp+3100,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i),32);
            tracep->chgBit(oldp+3101,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg));
            tracep->chgIData(oldp+3102,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i),32);
            tracep->chgBit(oldp+3103,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg));
            tracep->chgIData(oldp+3104,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i),32);
            tracep->chgBit(oldp+3105,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg));
            tracep->chgIData(oldp+3106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i),32);
            tracep->chgBit(oldp+3107,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg));
            tracep->chgIData(oldp+3108,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i),32);
            tracep->chgBit(oldp+3109,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg));
            tracep->chgIData(oldp+3110,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i),32);
            tracep->chgBit(oldp+3111,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg));
            tracep->chgIData(oldp+3112,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i),32);
            tracep->chgBit(oldp+3113,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg));
            tracep->chgIData(oldp+3114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i),32);
            tracep->chgBit(oldp+3115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg));
            tracep->chgIData(oldp+3116,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i),32);
            tracep->chgBit(oldp+3117,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg));
            tracep->chgIData(oldp+3118,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i),32);
            tracep->chgBit(oldp+3119,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg));
            tracep->chgIData(oldp+3120,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i),32);
            tracep->chgBit(oldp+3121,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg));
            tracep->chgIData(oldp+3122,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i),32);
            tracep->chgBit(oldp+3123,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg));
            tracep->chgIData(oldp+3124,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i),32);
            tracep->chgBit(oldp+3125,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg));
            tracep->chgIData(oldp+3126,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i),32);
            tracep->chgBit(oldp+3127,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg));
            tracep->chgIData(oldp+3128,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i),32);
            tracep->chgBit(oldp+3129,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg));
            tracep->chgIData(oldp+3130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i),32);
            tracep->chgBit(oldp+3131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg));
            tracep->chgIData(oldp+3132,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i),32);
            tracep->chgBit(oldp+3133,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg));
            tracep->chgIData(oldp+3134,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i),32);
            tracep->chgBit(oldp+3135,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg));
            tracep->chgIData(oldp+3136,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i),32);
            tracep->chgBit(oldp+3137,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg));
            tracep->chgIData(oldp+3138,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i),32);
            tracep->chgBit(oldp+3139,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg));
            tracep->chgIData(oldp+3140,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i),32);
            tracep->chgBit(oldp+3141,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg));
            tracep->chgIData(oldp+3142,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i),32);
            tracep->chgBit(oldp+3143,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg));
            tracep->chgIData(oldp+3144,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i),32);
            tracep->chgBit(oldp+3145,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg));
            tracep->chgIData(oldp+3146,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i),32);
            tracep->chgBit(oldp+3147,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg));
            tracep->chgIData(oldp+3148,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i),32);
            tracep->chgBit(oldp+3149,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg));
            tracep->chgIData(oldp+3150,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i),32);
            tracep->chgBit(oldp+3151,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg));
            tracep->chgIData(oldp+3152,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i),32);
            tracep->chgBit(oldp+3153,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg));
            tracep->chgIData(oldp+3154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i),32);
            tracep->chgBit(oldp+3155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg));
            tracep->chgIData(oldp+3156,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i),32);
            tracep->chgBit(oldp+3157,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg));
            tracep->chgIData(oldp+3158,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i),32);
            tracep->chgBit(oldp+3159,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg));
            tracep->chgIData(oldp+3160,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i),32);
            tracep->chgBit(oldp+3161,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg));
            tracep->chgIData(oldp+3162,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i),32);
            tracep->chgBit(oldp+3163,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg));
            tracep->chgIData(oldp+3164,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i),32);
            tracep->chgBit(oldp+3165,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg));
            tracep->chgIData(oldp+3166,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i),32);
            tracep->chgBit(oldp+3167,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg));
            tracep->chgIData(oldp+3168,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i),32);
            tracep->chgBit(oldp+3169,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg));
            tracep->chgIData(oldp+3170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i),32);
            tracep->chgBit(oldp+3171,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg));
            tracep->chgIData(oldp+3172,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i),32);
            tracep->chgBit(oldp+3173,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg));
            tracep->chgIData(oldp+3174,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i),32);
            tracep->chgBit(oldp+3175,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg));
            tracep->chgIData(oldp+3176,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i),32);
            tracep->chgBit(oldp+3177,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg));
            tracep->chgIData(oldp+3178,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i),32);
            tracep->chgBit(oldp+3179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg));
            tracep->chgIData(oldp+3180,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i),32);
            tracep->chgBit(oldp+3181,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg));
            tracep->chgIData(oldp+3182,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i),32);
            tracep->chgBit(oldp+3183,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg));
            tracep->chgIData(oldp+3184,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i),32);
            tracep->chgBit(oldp+3185,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg));
            tracep->chgIData(oldp+3186,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i),32);
            tracep->chgBit(oldp+3187,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg));
            tracep->chgIData(oldp+3188,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i),32);
            tracep->chgBit(oldp+3189,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg));
            tracep->chgIData(oldp+3190,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i),32);
            tracep->chgBit(oldp+3191,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg));
            tracep->chgIData(oldp+3192,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i),32);
            tracep->chgBit(oldp+3193,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg));
            tracep->chgIData(oldp+3194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i),32);
            tracep->chgBit(oldp+3195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg));
            tracep->chgIData(oldp+3196,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i),32);
            tracep->chgBit(oldp+3197,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg));
            tracep->chgIData(oldp+3198,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i),32);
            tracep->chgBit(oldp+3199,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg));
            tracep->chgIData(oldp+3200,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i),32);
            tracep->chgBit(oldp+3201,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg));
            tracep->chgIData(oldp+3202,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i),32);
            tracep->chgBit(oldp+3203,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg));
            tracep->chgIData(oldp+3204,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i),32);
            tracep->chgBit(oldp+3205,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg));
            tracep->chgIData(oldp+3206,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i),32);
            tracep->chgBit(oldp+3207,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg));
            tracep->chgIData(oldp+3208,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i),32);
            tracep->chgBit(oldp+3209,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg));
            tracep->chgIData(oldp+3210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i),32);
            tracep->chgBit(oldp+3211,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg));
            tracep->chgIData(oldp+3212,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i),32);
            tracep->chgBit(oldp+3213,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg));
            tracep->chgIData(oldp+3214,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i),32);
            tracep->chgBit(oldp+3215,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg));
            tracep->chgIData(oldp+3216,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i),32);
            tracep->chgBit(oldp+3217,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg));
            tracep->chgIData(oldp+3218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i),32);
            tracep->chgBit(oldp+3219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg));
            tracep->chgIData(oldp+3220,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i),32);
            tracep->chgBit(oldp+3221,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg));
            tracep->chgIData(oldp+3222,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i),32);
            tracep->chgBit(oldp+3223,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg));
            tracep->chgIData(oldp+3224,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i),32);
            tracep->chgBit(oldp+3225,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg));
            tracep->chgIData(oldp+3226,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i),32);
            tracep->chgBit(oldp+3227,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg));
            tracep->chgIData(oldp+3228,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i),32);
            tracep->chgBit(oldp+3229,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg));
            tracep->chgIData(oldp+3230,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i),32);
            tracep->chgBit(oldp+3231,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg));
            tracep->chgIData(oldp+3232,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i),32);
            tracep->chgBit(oldp+3233,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg));
            tracep->chgIData(oldp+3234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i),32);
            tracep->chgBit(oldp+3235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg));
            tracep->chgIData(oldp+3236,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i),32);
            tracep->chgBit(oldp+3237,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg));
            tracep->chgIData(oldp+3238,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i),32);
            tracep->chgBit(oldp+3239,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg));
            tracep->chgIData(oldp+3240,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i),32);
            tracep->chgBit(oldp+3241,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg));
            tracep->chgIData(oldp+3242,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i),32);
            tracep->chgBit(oldp+3243,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg));
            tracep->chgIData(oldp+3244,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i),32);
            tracep->chgBit(oldp+3245,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg));
            tracep->chgIData(oldp+3246,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i),32);
            tracep->chgBit(oldp+3247,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg));
            tracep->chgIData(oldp+3248,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i),32);
            tracep->chgBit(oldp+3249,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg));
            tracep->chgIData(oldp+3250,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i),32);
            tracep->chgBit(oldp+3251,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg));
            tracep->chgIData(oldp+3252,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i),32);
            tracep->chgBit(oldp+3253,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg));
            tracep->chgIData(oldp+3254,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i),32);
            tracep->chgBit(oldp+3255,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg));
            tracep->chgIData(oldp+3256,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i),32);
            tracep->chgBit(oldp+3257,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg));
            tracep->chgIData(oldp+3258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i),32);
            tracep->chgBit(oldp+3259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg));
            tracep->chgIData(oldp+3260,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i),32);
            tracep->chgBit(oldp+3261,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg));
            tracep->chgIData(oldp+3262,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i),32);
            tracep->chgBit(oldp+3263,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg));
            tracep->chgIData(oldp+3264,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i),32);
            tracep->chgBit(oldp+3265,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg));
            tracep->chgIData(oldp+3266,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i),32);
            tracep->chgBit(oldp+3267,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg));
            tracep->chgIData(oldp+3268,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i),32);
            tracep->chgBit(oldp+3269,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg));
            tracep->chgIData(oldp+3270,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i),32);
            tracep->chgBit(oldp+3271,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg));
            tracep->chgIData(oldp+3272,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i),32);
            tracep->chgBit(oldp+3273,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__data_reg));
            tracep->chgIData(oldp+3274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__i),32);
            tracep->chgBit(oldp+3275,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__data_reg));
            tracep->chgIData(oldp+3276,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__i),32);
            tracep->chgBit(oldp+3277,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__data_reg));
            tracep->chgIData(oldp+3278,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__i),32);
            tracep->chgBit(oldp+3279,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__data_reg));
            tracep->chgIData(oldp+3280,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__i),32);
            tracep->chgBit(oldp+3281,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__data_reg));
            tracep->chgIData(oldp+3282,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__i),32);
            tracep->chgBit(oldp+3283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__data_reg));
            tracep->chgIData(oldp+3284,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__i),32);
            tracep->chgBit(oldp+3285,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__data_reg));
            tracep->chgIData(oldp+3286,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__i),32);
            tracep->chgBit(oldp+3287,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__data_reg));
            tracep->chgIData(oldp+3288,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__i),32);
            tracep->chgBit(oldp+3289,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__data_reg));
            tracep->chgIData(oldp+3290,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__i),32);
            tracep->chgBit(oldp+3291,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__data_reg));
            tracep->chgIData(oldp+3292,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__i),32);
            tracep->chgBit(oldp+3293,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__data_reg));
            tracep->chgIData(oldp+3294,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__i),32);
            tracep->chgBit(oldp+3295,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__data_reg));
            tracep->chgIData(oldp+3296,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__i),32);
            tracep->chgBit(oldp+3297,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__data_reg));
            tracep->chgIData(oldp+3298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__i),32);
            tracep->chgBit(oldp+3299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__data_reg));
            tracep->chgIData(oldp+3300,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__i),32);
            tracep->chgBit(oldp+3301,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__data_reg));
            tracep->chgIData(oldp+3302,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__i),32);
            tracep->chgBit(oldp+3303,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__data_reg));
            tracep->chgIData(oldp+3304,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__i),32);
            tracep->chgBit(oldp+3305,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__data_reg));
            tracep->chgIData(oldp+3306,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__i),32);
            tracep->chgBit(oldp+3307,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__data_reg));
            tracep->chgIData(oldp+3308,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__i),32);
            tracep->chgBit(oldp+3309,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__data_reg));
            tracep->chgIData(oldp+3310,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__i),32);
            tracep->chgBit(oldp+3311,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__data_reg));
            tracep->chgIData(oldp+3312,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__i),32);
            tracep->chgBit(oldp+3313,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__data_reg));
            tracep->chgIData(oldp+3314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__i),32);
            tracep->chgBit(oldp+3315,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__data_reg));
            tracep->chgIData(oldp+3316,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__i),32);
            tracep->chgBit(oldp+3317,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__data_reg));
            tracep->chgIData(oldp+3318,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__i),32);
            tracep->chgBit(oldp+3319,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__data_reg));
            tracep->chgIData(oldp+3320,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__i),32);
            tracep->chgBit(oldp+3321,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__data_reg));
            tracep->chgIData(oldp+3322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__i),32);
            tracep->chgBit(oldp+3323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__data_reg));
            tracep->chgIData(oldp+3324,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__i),32);
            tracep->chgBit(oldp+3325,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__data_reg));
            tracep->chgIData(oldp+3326,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__i),32);
            tracep->chgBit(oldp+3327,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__data_reg));
            tracep->chgIData(oldp+3328,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__i),32);
            tracep->chgBit(oldp+3329,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__data_reg));
            tracep->chgIData(oldp+3330,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__i),32);
            tracep->chgBit(oldp+3331,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__data_reg));
            tracep->chgIData(oldp+3332,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__i),32);
            tracep->chgBit(oldp+3333,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__data_reg));
            tracep->chgIData(oldp+3334,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__i),32);
            tracep->chgBit(oldp+3335,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__data_reg));
            tracep->chgIData(oldp+3336,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__i),32);
            tracep->chgBit(oldp+3337,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__data_reg));
            tracep->chgIData(oldp+3338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__i),32);
            tracep->chgBit(oldp+3339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__data_reg));
            tracep->chgIData(oldp+3340,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__i),32);
            tracep->chgBit(oldp+3341,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__data_reg));
            tracep->chgIData(oldp+3342,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__i),32);
            tracep->chgBit(oldp+3343,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__data_reg));
            tracep->chgIData(oldp+3344,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__i),32);
            tracep->chgBit(oldp+3345,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__data_reg));
            tracep->chgIData(oldp+3346,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__i),32);
            tracep->chgBit(oldp+3347,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__data_reg));
            tracep->chgIData(oldp+3348,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__i),32);
            tracep->chgBit(oldp+3349,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__data_reg));
            tracep->chgIData(oldp+3350,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__i),32);
            tracep->chgBit(oldp+3351,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__data_reg));
            tracep->chgIData(oldp+3352,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__i),32);
            tracep->chgBit(oldp+3353,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__data_reg));
            tracep->chgIData(oldp+3354,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__i),32);
            tracep->chgBit(oldp+3355,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__data_reg));
            tracep->chgIData(oldp+3356,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__i),32);
            tracep->chgBit(oldp+3357,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__data_reg));
            tracep->chgIData(oldp+3358,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__i),32);
            tracep->chgBit(oldp+3359,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__data_reg));
            tracep->chgIData(oldp+3360,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__i),32);
            tracep->chgBit(oldp+3361,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__data_reg));
            tracep->chgIData(oldp+3362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__i),32);
            tracep->chgBit(oldp+3363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__data_reg));
            tracep->chgIData(oldp+3364,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__i),32);
            tracep->chgBit(oldp+3365,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__data_reg));
            tracep->chgIData(oldp+3366,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__i),32);
            tracep->chgBit(oldp+3367,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__data_reg));
            tracep->chgIData(oldp+3368,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__i),32);
            tracep->chgBit(oldp+3369,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__data_reg));
            tracep->chgIData(oldp+3370,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__i),32);
            tracep->chgBit(oldp+3371,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__data_reg));
            tracep->chgIData(oldp+3372,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__i),32);
            tracep->chgBit(oldp+3373,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__data_reg));
            tracep->chgIData(oldp+3374,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__i),32);
            tracep->chgBit(oldp+3375,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__data_reg));
            tracep->chgIData(oldp+3376,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__i),32);
            tracep->chgBit(oldp+3377,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__data_reg));
            tracep->chgIData(oldp+3378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__i),32);
            tracep->chgBit(oldp+3379,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__data_reg));
            tracep->chgIData(oldp+3380,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__i),32);
            tracep->chgBit(oldp+3381,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__data_reg));
            tracep->chgIData(oldp+3382,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__i),32);
            tracep->chgBit(oldp+3383,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__data_reg));
            tracep->chgIData(oldp+3384,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__i),32);
            tracep->chgBit(oldp+3385,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__data_reg));
            tracep->chgIData(oldp+3386,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__i),32);
            tracep->chgBit(oldp+3387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__data_reg));
            tracep->chgIData(oldp+3388,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__i),32);
            tracep->chgBit(oldp+3389,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__data_reg));
            tracep->chgIData(oldp+3390,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__i),32);
            tracep->chgBit(oldp+3391,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__data_reg));
            tracep->chgIData(oldp+3392,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__i),32);
            tracep->chgBit(oldp+3393,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__data_reg));
            tracep->chgIData(oldp+3394,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__i),32);
            tracep->chgBit(oldp+3395,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__data_reg));
            tracep->chgIData(oldp+3396,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__i),32);
            tracep->chgBit(oldp+3397,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__data_reg));
            tracep->chgIData(oldp+3398,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__i),32);
            tracep->chgBit(oldp+3399,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__data_reg));
            tracep->chgIData(oldp+3400,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__i),32);
            tracep->chgBit(oldp+3401,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__data_reg));
            tracep->chgIData(oldp+3402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__i),32);
            tracep->chgBit(oldp+3403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__data_reg));
            tracep->chgIData(oldp+3404,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__i),32);
            tracep->chgBit(oldp+3405,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__data_reg));
            tracep->chgIData(oldp+3406,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__i),32);
            tracep->chgBit(oldp+3407,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__data_reg));
            tracep->chgIData(oldp+3408,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__i),32);
            tracep->chgBit(oldp+3409,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__data_reg));
            tracep->chgIData(oldp+3410,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__i),32);
            tracep->chgBit(oldp+3411,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__data_reg));
            tracep->chgIData(oldp+3412,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__i),32);
            tracep->chgBit(oldp+3413,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__data_reg));
            tracep->chgIData(oldp+3414,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__i),32);
            tracep->chgBit(oldp+3415,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__data_reg));
            tracep->chgIData(oldp+3416,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__i),32);
            tracep->chgBit(oldp+3417,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__data_reg));
            tracep->chgIData(oldp+3418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__i),32);
            tracep->chgBit(oldp+3419,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__data_reg));
            tracep->chgIData(oldp+3420,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__i),32);
            tracep->chgBit(oldp+3421,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__data_reg));
            tracep->chgIData(oldp+3422,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__i),32);
            tracep->chgBit(oldp+3423,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__data_reg));
            tracep->chgIData(oldp+3424,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__i),32);
            tracep->chgBit(oldp+3425,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__data_reg));
            tracep->chgIData(oldp+3426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__i),32);
            tracep->chgBit(oldp+3427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__data_reg));
            tracep->chgIData(oldp+3428,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__i),32);
            tracep->chgBit(oldp+3429,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__data_reg));
            tracep->chgIData(oldp+3430,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__i),32);
            tracep->chgBit(oldp+3431,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__data_reg));
            tracep->chgIData(oldp+3432,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__i),32);
            tracep->chgBit(oldp+3433,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__data_reg));
            tracep->chgIData(oldp+3434,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__i),32);
            tracep->chgBit(oldp+3435,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__data_reg));
            tracep->chgIData(oldp+3436,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__i),32);
            tracep->chgBit(oldp+3437,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__data_reg));
            tracep->chgIData(oldp+3438,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__i),32);
            tracep->chgBit(oldp+3439,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__data_reg));
            tracep->chgIData(oldp+3440,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__i),32);
            tracep->chgBit(oldp+3441,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__data_reg));
            tracep->chgIData(oldp+3442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__i),32);
            tracep->chgBit(oldp+3443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__data_reg));
            tracep->chgIData(oldp+3444,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__i),32);
            tracep->chgBit(oldp+3445,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__data_reg));
            tracep->chgIData(oldp+3446,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__i),32);
            tracep->chgBit(oldp+3447,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__data_reg));
            tracep->chgIData(oldp+3448,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__i),32);
            tracep->chgBit(oldp+3449,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__data_reg));
            tracep->chgIData(oldp+3450,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__i),32);
            tracep->chgBit(oldp+3451,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__data_reg));
            tracep->chgIData(oldp+3452,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__i),32);
            tracep->chgBit(oldp+3453,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__data_reg));
            tracep->chgIData(oldp+3454,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__i),32);
            tracep->chgBit(oldp+3455,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__data_reg));
            tracep->chgIData(oldp+3456,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__i),32);
            tracep->chgBit(oldp+3457,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__data_reg));
            tracep->chgIData(oldp+3458,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__i),32);
            tracep->chgBit(oldp+3459,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__data_reg));
            tracep->chgIData(oldp+3460,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__i),32);
            tracep->chgBit(oldp+3461,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__data_reg));
            tracep->chgIData(oldp+3462,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__i),32);
            tracep->chgBit(oldp+3463,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__data_reg));
            tracep->chgIData(oldp+3464,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__i),32);
            tracep->chgBit(oldp+3465,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__data_reg));
            tracep->chgIData(oldp+3466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__i),32);
            tracep->chgBit(oldp+3467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__data_reg));
            tracep->chgIData(oldp+3468,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__i),32);
            tracep->chgBit(oldp+3469,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__data_reg));
            tracep->chgIData(oldp+3470,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__i),32);
            tracep->chgBit(oldp+3471,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__data_reg));
            tracep->chgIData(oldp+3472,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__i),32);
            tracep->chgBit(oldp+3473,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__data_reg));
            tracep->chgIData(oldp+3474,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__i),32);
            tracep->chgBit(oldp+3475,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__data_reg));
            tracep->chgIData(oldp+3476,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__i),32);
            tracep->chgBit(oldp+3477,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__data_reg));
            tracep->chgIData(oldp+3478,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__i),32);
            tracep->chgBit(oldp+3479,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__data_reg));
            tracep->chgIData(oldp+3480,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__i),32);
            tracep->chgBit(oldp+3481,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__data_reg));
            tracep->chgIData(oldp+3482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__i),32);
            tracep->chgBit(oldp+3483,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__data_reg));
            tracep->chgIData(oldp+3484,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__i),32);
            tracep->chgBit(oldp+3485,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__data_reg));
            tracep->chgIData(oldp+3486,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__i),32);
            tracep->chgBit(oldp+3487,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__data_reg));
            tracep->chgIData(oldp+3488,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__i),32);
            tracep->chgBit(oldp+3489,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__data_reg));
            tracep->chgIData(oldp+3490,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__i),32);
            tracep->chgBit(oldp+3491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__data_reg));
            tracep->chgIData(oldp+3492,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__i),32);
            tracep->chgBit(oldp+3493,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__data_reg));
            tracep->chgIData(oldp+3494,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__i),32);
            tracep->chgBit(oldp+3495,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__data_reg));
            tracep->chgIData(oldp+3496,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__i),32);
            tracep->chgBit(oldp+3497,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__data_reg));
            tracep->chgIData(oldp+3498,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__i),32);
            tracep->chgBit(oldp+3499,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__data_reg));
            tracep->chgIData(oldp+3500,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__i),32);
            tracep->chgBit(oldp+3501,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__data_reg));
            tracep->chgIData(oldp+3502,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__i),32);
            tracep->chgBit(oldp+3503,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__data_reg));
            tracep->chgIData(oldp+3504,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__i),32);
            tracep->chgBit(oldp+3505,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__data_reg));
            tracep->chgIData(oldp+3506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__i),32);
            tracep->chgBit(oldp+3507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__data_reg));
            tracep->chgIData(oldp+3508,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__i),32);
            tracep->chgBit(oldp+3509,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__data_reg));
            tracep->chgIData(oldp+3510,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__i),32);
            tracep->chgBit(oldp+3511,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__data_reg));
            tracep->chgIData(oldp+3512,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__i),32);
            tracep->chgBit(oldp+3513,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__data_reg));
            tracep->chgIData(oldp+3514,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__i),32);
            tracep->chgBit(oldp+3515,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__data_reg));
            tracep->chgIData(oldp+3516,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__i),32);
            tracep->chgBit(oldp+3517,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__data_reg));
            tracep->chgIData(oldp+3518,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__i),32);
            tracep->chgBit(oldp+3519,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__data_reg));
            tracep->chgIData(oldp+3520,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__i),32);
            tracep->chgBit(oldp+3521,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__data_reg));
            tracep->chgIData(oldp+3522,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__i),32);
            tracep->chgBit(oldp+3523,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__data_reg));
            tracep->chgIData(oldp+3524,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__i),32);
            tracep->chgBit(oldp+3525,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__data_reg));
            tracep->chgIData(oldp+3526,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgSData(oldp+3527,(vlSelf->ascon_top__DOT__sbox_input[0]),15);
            tracep->chgSData(oldp+3528,(vlSelf->ascon_top__DOT__sbox_input[1]),15);
            tracep->chgSData(oldp+3529,(vlSelf->ascon_top__DOT__sbox_input[2]),15);
            tracep->chgSData(oldp+3530,(vlSelf->ascon_top__DOT__sbox_input[3]),15);
            tracep->chgSData(oldp+3531,(vlSelf->ascon_top__DOT__sbox_input[4]),15);
            tracep->chgSData(oldp+3532,(vlSelf->ascon_top__DOT__sbox_input[5]),15);
            tracep->chgSData(oldp+3533,(vlSelf->ascon_top__DOT__sbox_input[6]),15);
            tracep->chgSData(oldp+3534,(vlSelf->ascon_top__DOT__sbox_input[7]),15);
            tracep->chgSData(oldp+3535,(vlSelf->ascon_top__DOT__sbox_input[8]),15);
            tracep->chgSData(oldp+3536,(vlSelf->ascon_top__DOT__sbox_input[9]),15);
            tracep->chgSData(oldp+3537,(vlSelf->ascon_top__DOT__sbox_input[10]),15);
            tracep->chgSData(oldp+3538,(vlSelf->ascon_top__DOT__sbox_input[11]),15);
            tracep->chgSData(oldp+3539,(vlSelf->ascon_top__DOT__sbox_input[12]),15);
            tracep->chgSData(oldp+3540,(vlSelf->ascon_top__DOT__sbox_input[13]),15);
            tracep->chgSData(oldp+3541,(vlSelf->ascon_top__DOT__sbox_input[14]),15);
            tracep->chgSData(oldp+3542,(vlSelf->ascon_top__DOT__sbox_input[15]),15);
            tracep->chgSData(oldp+3543,(vlSelf->ascon_top__DOT__sbox_input[16]),15);
            tracep->chgSData(oldp+3544,(vlSelf->ascon_top__DOT__sbox_input[17]),15);
            tracep->chgSData(oldp+3545,(vlSelf->ascon_top__DOT__sbox_input[18]),15);
            tracep->chgSData(oldp+3546,(vlSelf->ascon_top__DOT__sbox_input[19]),15);
            tracep->chgSData(oldp+3547,(vlSelf->ascon_top__DOT__sbox_input[20]),15);
            tracep->chgSData(oldp+3548,(vlSelf->ascon_top__DOT__sbox_input[21]),15);
            tracep->chgSData(oldp+3549,(vlSelf->ascon_top__DOT__sbox_output[0]),15);
            tracep->chgSData(oldp+3550,(vlSelf->ascon_top__DOT__sbox_output[1]),15);
            tracep->chgSData(oldp+3551,(vlSelf->ascon_top__DOT__sbox_output[2]),15);
            tracep->chgSData(oldp+3552,(vlSelf->ascon_top__DOT__sbox_output[3]),15);
            tracep->chgSData(oldp+3553,(vlSelf->ascon_top__DOT__sbox_output[4]),15);
            tracep->chgSData(oldp+3554,(vlSelf->ascon_top__DOT__sbox_output[5]),15);
            tracep->chgSData(oldp+3555,(vlSelf->ascon_top__DOT__sbox_output[6]),15);
            tracep->chgSData(oldp+3556,(vlSelf->ascon_top__DOT__sbox_output[7]),15);
            tracep->chgSData(oldp+3557,(vlSelf->ascon_top__DOT__sbox_output[8]),15);
            tracep->chgSData(oldp+3558,(vlSelf->ascon_top__DOT__sbox_output[9]),15);
            tracep->chgSData(oldp+3559,(vlSelf->ascon_top__DOT__sbox_output[10]),15);
            tracep->chgSData(oldp+3560,(vlSelf->ascon_top__DOT__sbox_output[11]),15);
            tracep->chgSData(oldp+3561,(vlSelf->ascon_top__DOT__sbox_output[12]),15);
            tracep->chgSData(oldp+3562,(vlSelf->ascon_top__DOT__sbox_output[13]),15);
            tracep->chgSData(oldp+3563,(vlSelf->ascon_top__DOT__sbox_output[14]),15);
            tracep->chgSData(oldp+3564,(vlSelf->ascon_top__DOT__sbox_output[15]),15);
            tracep->chgSData(oldp+3565,(vlSelf->ascon_top__DOT__sbox_output[16]),15);
            tracep->chgSData(oldp+3566,(vlSelf->ascon_top__DOT__sbox_output[17]),15);
            tracep->chgSData(oldp+3567,(vlSelf->ascon_top__DOT__sbox_output[18]),15);
            tracep->chgSData(oldp+3568,(vlSelf->ascon_top__DOT__sbox_output[19]),15);
            tracep->chgSData(oldp+3569,(vlSelf->ascon_top__DOT__sbox_output[20]),15);
            tracep->chgSData(oldp+3570,(vlSelf->ascon_top__DOT__sbox_output[21]),15);
            tracep->chgIData(oldp+3571,(vlSelf->ascon_top__DOT__unnamedblk2__DOT__p),32);
            tracep->chgSData(oldp+3572,(vlSelf->ascon_top__DOT__sbox_input
                                        [0U]),15);
            tracep->chgSData(oldp+3573,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3574,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3575,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3576,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3577,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3578,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3579,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3580,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3581,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3582,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3583,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3584,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3585,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3586,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3587,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3588,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3589,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3590,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3591,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3592,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3593,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3594,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3595,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3596,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3597,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3598,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3599,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3600,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3601,(vlSelf->ascon_top__DOT__sbox_input
                                        [1U]),15);
            tracep->chgSData(oldp+3602,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3603,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3604,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3605,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3606,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3607,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3608,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3609,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3610,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3611,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3612,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3613,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3614,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3615,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3616,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3617,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3618,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3619,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3620,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3621,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3622,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3623,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3624,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3625,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3626,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3627,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3628,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3629,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3630,(vlSelf->ascon_top__DOT__sbox_input
                                        [2U]),15);
            tracep->chgSData(oldp+3631,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3632,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3633,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3634,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3635,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3636,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3637,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3638,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3639,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3640,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3641,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3642,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3643,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3644,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3645,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3646,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3647,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3648,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3649,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3650,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3651,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3652,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3653,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3654,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3655,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3656,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3657,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3658,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3659,(vlSelf->ascon_top__DOT__sbox_input
                                        [3U]),15);
            tracep->chgSData(oldp+3660,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3661,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3662,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3663,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3664,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3665,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3666,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3667,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3668,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3669,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3670,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3671,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3672,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3673,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3674,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3675,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3676,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3677,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3678,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3679,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3680,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3681,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3682,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3683,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3684,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3685,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3686,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3687,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3688,(vlSelf->ascon_top__DOT__sbox_input
                                        [4U]),15);
            tracep->chgSData(oldp+3689,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3690,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3691,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3692,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3693,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3694,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3695,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3696,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3697,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3698,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3699,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3700,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3701,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3702,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3703,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3704,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3705,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3706,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3707,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3708,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3709,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3710,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3711,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3712,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3713,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3714,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3715,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3716,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3717,(vlSelf->ascon_top__DOT__sbox_input
                                        [5U]),15);
            tracep->chgSData(oldp+3718,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3719,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3720,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3721,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3722,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3723,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3724,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3725,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3726,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3727,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3728,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3729,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3730,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3731,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3732,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3733,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3734,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3735,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3736,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3737,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3738,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3739,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3740,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3741,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3742,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3743,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3744,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3745,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3746,(vlSelf->ascon_top__DOT__sbox_input
                                        [6U]),15);
            tracep->chgSData(oldp+3747,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3748,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3749,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3750,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3751,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3752,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3753,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3754,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3755,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3756,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3757,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3758,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3759,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3760,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3761,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3762,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3763,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3764,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3765,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3766,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3767,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3768,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3769,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3770,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3771,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3772,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3773,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3774,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3775,(vlSelf->ascon_top__DOT__sbox_input
                                        [7U]),15);
            tracep->chgSData(oldp+3776,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3777,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3778,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3779,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3780,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3781,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3782,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3783,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3784,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3785,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3786,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3787,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3788,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3789,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3790,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3791,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3792,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3793,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3794,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3795,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3796,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3797,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3798,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3799,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3800,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3801,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3802,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3803,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3804,(vlSelf->ascon_top__DOT__sbox_input
                                        [8U]),15);
            tracep->chgSData(oldp+3805,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3806,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3807,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3808,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3809,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3810,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3811,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3812,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3813,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3814,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3815,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3816,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3817,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3818,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3819,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3820,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3821,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3822,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3823,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3824,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3825,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3826,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3827,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3828,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3829,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3830,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3831,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3832,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3833,(vlSelf->ascon_top__DOT__sbox_input
                                        [9U]),15);
            tracep->chgSData(oldp+3834,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3835,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3836,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3837,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3838,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3839,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3840,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3841,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3842,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3843,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3844,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3845,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3846,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3847,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3848,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3849,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3850,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3851,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3852,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3853,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3854,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3855,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3856,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3857,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3858,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3859,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3860,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3861,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3862,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xaU]),15);
            tracep->chgSData(oldp+3863,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3864,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3865,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3866,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3867,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3868,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3869,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3870,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3871,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3872,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3873,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3874,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3875,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3876,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3877,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3878,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3879,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3880,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3881,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3882,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3883,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3884,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3885,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3886,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3887,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3888,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3889,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3890,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3891,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xbU]),15);
            tracep->chgSData(oldp+3892,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3893,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3894,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3895,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3896,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3897,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3898,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3899,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3900,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3901,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3902,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3903,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3904,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3905,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3906,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3907,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3908,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3909,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3910,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3911,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3912,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3913,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3914,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3915,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3916,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3917,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3918,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3919,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3920,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xcU]),15);
            tracep->chgSData(oldp+3921,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3922,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3923,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3924,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3925,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3926,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3927,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3928,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3929,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3930,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3931,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3932,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3933,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3934,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3935,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3936,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3937,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3938,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3939,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3940,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3941,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3942,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3943,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3944,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3945,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3946,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3947,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3948,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3949,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xdU]),15);
            tracep->chgSData(oldp+3950,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3951,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3952,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3953,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3954,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3955,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3956,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3957,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3958,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3959,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3960,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3961,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3962,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3963,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3964,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3965,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3966,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3967,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3968,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3969,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3970,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3971,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+3972,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+3973,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+3974,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+3975,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+3976,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+3977,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+3978,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xeU]),15);
            tracep->chgSData(oldp+3979,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+3980,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+3981,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+3982,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+3983,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+3984,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+3985,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+3986,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3987,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3988,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+3989,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3990,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3991,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+3992,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3993,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3994,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+3995,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3996,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+3997,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+3998,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+3999,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4000,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4001,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4002,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4003,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4004,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4005,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4006,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4007,(vlSelf->ascon_top__DOT__sbox_input
                                        [0xfU]),15);
            tracep->chgSData(oldp+4008,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4009,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4010,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4011,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4012,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4013,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4014,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4015,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4016,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4017,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4018,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4019,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4020,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4021,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4022,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4023,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4024,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4025,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4026,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4027,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4028,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4029,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4030,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4031,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4032,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4033,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4034,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4035,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4036,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x10U]),15);
            tracep->chgSData(oldp+4037,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4038,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4039,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4040,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4041,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4042,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4043,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4044,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4045,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4046,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4047,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4048,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4049,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4050,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4051,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4052,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4053,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4054,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4055,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4056,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4057,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4058,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4059,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4060,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4061,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4062,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4063,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4064,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4065,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x11U]),15);
            tracep->chgSData(oldp+4066,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4067,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4068,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4069,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4070,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4071,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4072,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4073,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4074,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4075,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4076,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4077,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4078,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4079,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4080,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4081,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4082,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4083,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4084,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4085,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4086,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4087,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4088,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4089,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4090,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4091,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4092,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4093,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4094,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x12U]),15);
            tracep->chgSData(oldp+4095,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4096,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4097,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4098,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4099,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4100,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4101,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4102,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4103,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4104,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4105,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4106,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4107,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4108,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4109,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4110,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4111,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4112,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4113,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4114,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4115,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4116,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4117,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4118,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4119,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4120,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4121,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4122,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4123,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x13U]),15);
            tracep->chgSData(oldp+4124,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4125,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4126,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4127,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4128,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4129,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4130,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4131,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4132,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4133,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4134,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4135,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4136,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4137,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4138,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4139,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4140,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4141,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4142,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4143,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4144,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4145,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4146,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4147,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4148,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4149,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4150,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4151,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4152,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x14U]),15);
            tracep->chgSData(oldp+4153,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4154,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4155,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4156,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4157,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4158,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4159,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4160,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4161,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4162,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4163,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4164,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4165,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4166,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4167,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4168,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4169,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4170,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4171,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4172,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4173,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4174,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4175,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4176,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4177,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4178,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4179,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4180,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
            tracep->chgSData(oldp+4181,(vlSelf->ascon_top__DOT__sbox_input
                                        [0x15U]),15);
            tracep->chgSData(oldp+4182,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4183,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[0]),3);
            tracep->chgCData(oldp+4184,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[1]),3);
            tracep->chgCData(oldp+4185,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[2]),3);
            tracep->chgCData(oldp+4186,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[3]),3);
            tracep->chgCData(oldp+4187,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__x[4]),3);
            tracep->chgCData(oldp+4188,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [0U])),3);
            tracep->chgCData(oldp+4189,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4190,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4191,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [1U])),3);
            tracep->chgCData(oldp+4192,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4193,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4194,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [2U])),3);
            tracep->chgCData(oldp+4195,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4196,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4197,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [3U])),3);
            tracep->chgCData(oldp+4198,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4199,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4200,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                         [4U])),3);
            tracep->chgCData(oldp+4201,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4202,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_reg
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4203,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[0]),3);
            tracep->chgCData(oldp+4204,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[1]),3);
            tracep->chgCData(oldp+4205,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[2]),3);
            tracep->chgCData(oldp+4206,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[3]),3);
            tracep->chgCData(oldp+4207,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y[4]),3);
            tracep->chgIData(oldp+4208,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+4209,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+4210,(vlSelf->ascon_top__DOT__write_en));
            tracep->chgBit(oldp+4211,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
            tracep->chgBit(oldp+4212,(vlSelf->ascon_top__DOT__sel_init_load));
            tracep->chgBit(oldp+4213,(vlSelf->ascon_top__DOT__sel_padding));
            tracep->chgBit(oldp+4214,(vlSelf->ascon_top__DOT__sel_absorb_data));
            tracep->chgWData(oldp+4215,(vlSelf->ascon_top__DOT__state_reg_in_shares[0]),320);
            tracep->chgWData(oldp+4225,(vlSelf->ascon_top__DOT__state_reg_in_shares[1]),320);
            tracep->chgWData(oldp+4235,(vlSelf->ascon_top__DOT__state_reg_in_shares[2]),320);
            tracep->chgWData(oldp+4245,(vlSelf->ascon_top__DOT__data_in_padded),128);
            tracep->chgWData(oldp+4249,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
            tracep->chgIData(oldp+4253,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
            tracep->chgBit(oldp+4254,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
            tracep->chgCData(oldp+4255,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
            tracep->chgBit(oldp+4256,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
            tracep->chgBit(oldp+4257,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
            tracep->chgBit(oldp+4258,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
            tracep->chgBit(oldp+4259,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
            __Vtemp48465[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][0U];
            __Vtemp48465[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][1U];
            __Vtemp48465[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][2U];
            __Vtemp48465[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][3U];
            __Vtemp48465[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][4U];
            __Vtemp48465[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][5U];
            __Vtemp48465[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][6U];
            __Vtemp48465[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][7U];
            __Vtemp48465[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][8U];
            __Vtemp48465[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][9U];
            tracep->chgWData(oldp+4260,(__Vtemp48465),320);
            tracep->chgQData(oldp+4270,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+4272,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+4274,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+4276,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+4278,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4]),64);
            __Vtemp48466[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][0U];
            __Vtemp48466[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][1U];
            __Vtemp48466[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][2U];
            __Vtemp48466[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][3U];
            __Vtemp48466[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][4U];
            __Vtemp48466[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][5U];
            __Vtemp48466[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][6U];
            __Vtemp48466[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][7U];
            __Vtemp48466[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][8U];
            __Vtemp48466[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][9U];
            tracep->chgWData(oldp+4280,(__Vtemp48466),320);
            __Vtemp48467[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][0U];
            __Vtemp48467[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][1U];
            __Vtemp48467[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][2U];
            __Vtemp48467[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][3U];
            __Vtemp48467[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][4U];
            __Vtemp48467[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][5U];
            __Vtemp48467[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][6U];
            __Vtemp48467[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][7U];
            __Vtemp48467[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][8U];
            __Vtemp48467[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][9U];
            tracep->chgWData(oldp+4290,(__Vtemp48467),320);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgWData(oldp+4300,(vlSelf->ascon_top__DOT__shares_out),330);
            tracep->chgWData(oldp+4311,(vlSelf->ascon_top__DOT__affine_layer_in[0]),110);
            tracep->chgWData(oldp+4315,(vlSelf->ascon_top__DOT__affine_layer_in[1]),110);
            tracep->chgWData(oldp+4319,(vlSelf->ascon_top__DOT__affine_layer_in[2]),110);
            tracep->chgWData(oldp+4323,(vlSelf->ascon_top__DOT__affine_layer_out[0]),110);
            tracep->chgWData(oldp+4327,(vlSelf->ascon_top__DOT__affine_layer_out[1]),110);
            tracep->chgWData(oldp+4331,(vlSelf->ascon_top__DOT__affine_layer_out[2]),110);
            tracep->chgSData(oldp+4335,(vlSelf->ascon_top__DOT__next_sbox_input[0]),15);
            tracep->chgSData(oldp+4336,(vlSelf->ascon_top__DOT__next_sbox_input[1]),15);
            tracep->chgSData(oldp+4337,(vlSelf->ascon_top__DOT__next_sbox_input[2]),15);
            tracep->chgSData(oldp+4338,(vlSelf->ascon_top__DOT__next_sbox_input[3]),15);
            tracep->chgSData(oldp+4339,(vlSelf->ascon_top__DOT__next_sbox_input[4]),15);
            tracep->chgSData(oldp+4340,(vlSelf->ascon_top__DOT__next_sbox_input[5]),15);
            tracep->chgSData(oldp+4341,(vlSelf->ascon_top__DOT__next_sbox_input[6]),15);
            tracep->chgSData(oldp+4342,(vlSelf->ascon_top__DOT__next_sbox_input[7]),15);
            tracep->chgSData(oldp+4343,(vlSelf->ascon_top__DOT__next_sbox_input[8]),15);
            tracep->chgSData(oldp+4344,(vlSelf->ascon_top__DOT__next_sbox_input[9]),15);
            tracep->chgSData(oldp+4345,(vlSelf->ascon_top__DOT__next_sbox_input[10]),15);
            tracep->chgSData(oldp+4346,(vlSelf->ascon_top__DOT__next_sbox_input[11]),15);
            tracep->chgSData(oldp+4347,(vlSelf->ascon_top__DOT__next_sbox_input[12]),15);
            tracep->chgSData(oldp+4348,(vlSelf->ascon_top__DOT__next_sbox_input[13]),15);
            tracep->chgSData(oldp+4349,(vlSelf->ascon_top__DOT__next_sbox_input[14]),15);
            tracep->chgSData(oldp+4350,(vlSelf->ascon_top__DOT__next_sbox_input[15]),15);
            tracep->chgSData(oldp+4351,(vlSelf->ascon_top__DOT__next_sbox_input[16]),15);
            tracep->chgSData(oldp+4352,(vlSelf->ascon_top__DOT__next_sbox_input[17]),15);
            tracep->chgSData(oldp+4353,(vlSelf->ascon_top__DOT__next_sbox_input[18]),15);
            tracep->chgSData(oldp+4354,(vlSelf->ascon_top__DOT__next_sbox_input[19]),15);
            tracep->chgSData(oldp+4355,(vlSelf->ascon_top__DOT__next_sbox_input[20]),15);
            tracep->chgSData(oldp+4356,(vlSelf->ascon_top__DOT__next_sbox_input[21]),15);
            tracep->chgWData(oldp+4357,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),110);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgWData(oldp+4361,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0]),320);
            tracep->chgWData(oldp+4371,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[1]),320);
            tracep->chgWData(oldp+4381,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[2]),320);
            tracep->chgWData(oldp+4391,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0]),110);
            tracep->chgWData(oldp+4395,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1]),110);
            tracep->chgWData(oldp+4399,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2]),110);
            tracep->chgSData(oldp+4403,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),15);
            tracep->chgSData(oldp+4404,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),15);
            tracep->chgSData(oldp+4405,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),15);
            tracep->chgSData(oldp+4406,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),15);
            tracep->chgSData(oldp+4407,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),15);
            tracep->chgSData(oldp+4408,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),15);
            tracep->chgSData(oldp+4409,(vlSelf->ascon_top__DOT__sbox_output_unmasked[6]),15);
            tracep->chgSData(oldp+4410,(vlSelf->ascon_top__DOT__sbox_output_unmasked[7]),15);
            tracep->chgSData(oldp+4411,(vlSelf->ascon_top__DOT__sbox_output_unmasked[8]),15);
            tracep->chgSData(oldp+4412,(vlSelf->ascon_top__DOT__sbox_output_unmasked[9]),15);
            tracep->chgSData(oldp+4413,(vlSelf->ascon_top__DOT__sbox_output_unmasked[10]),15);
            tracep->chgSData(oldp+4414,(vlSelf->ascon_top__DOT__sbox_output_unmasked[11]),15);
            tracep->chgSData(oldp+4415,(vlSelf->ascon_top__DOT__sbox_output_unmasked[12]),15);
            tracep->chgSData(oldp+4416,(vlSelf->ascon_top__DOT__sbox_output_unmasked[13]),15);
            tracep->chgSData(oldp+4417,(vlSelf->ascon_top__DOT__sbox_output_unmasked[14]),15);
            tracep->chgSData(oldp+4418,(vlSelf->ascon_top__DOT__sbox_output_unmasked[15]),15);
            tracep->chgSData(oldp+4419,(vlSelf->ascon_top__DOT__sbox_output_unmasked[16]),15);
            tracep->chgSData(oldp+4420,(vlSelf->ascon_top__DOT__sbox_output_unmasked[17]),15);
            tracep->chgSData(oldp+4421,(vlSelf->ascon_top__DOT__sbox_output_unmasked[18]),15);
            tracep->chgSData(oldp+4422,(vlSelf->ascon_top__DOT__sbox_output_unmasked[19]),15);
            tracep->chgSData(oldp+4423,(vlSelf->ascon_top__DOT__sbox_output_unmasked[20]),15);
            tracep->chgSData(oldp+4424,(vlSelf->ascon_top__DOT__sbox_output_unmasked[21]),15);
            tracep->chgSData(oldp+4425,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),15);
            tracep->chgSData(oldp+4426,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),15);
            tracep->chgSData(oldp+4427,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),15);
            tracep->chgSData(oldp+4428,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),15);
            tracep->chgSData(oldp+4429,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),15);
            tracep->chgSData(oldp+4430,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),15);
            tracep->chgSData(oldp+4431,(vlSelf->ascon_top__DOT__mux_sbox_out[6]),15);
            tracep->chgSData(oldp+4432,(vlSelf->ascon_top__DOT__mux_sbox_out[7]),15);
            tracep->chgSData(oldp+4433,(vlSelf->ascon_top__DOT__mux_sbox_out[8]),15);
            tracep->chgSData(oldp+4434,(vlSelf->ascon_top__DOT__mux_sbox_out[9]),15);
            tracep->chgSData(oldp+4435,(vlSelf->ascon_top__DOT__mux_sbox_out[10]),15);
            tracep->chgSData(oldp+4436,(vlSelf->ascon_top__DOT__mux_sbox_out[11]),15);
            tracep->chgSData(oldp+4437,(vlSelf->ascon_top__DOT__mux_sbox_out[12]),15);
            tracep->chgSData(oldp+4438,(vlSelf->ascon_top__DOT__mux_sbox_out[13]),15);
            tracep->chgSData(oldp+4439,(vlSelf->ascon_top__DOT__mux_sbox_out[14]),15);
            tracep->chgSData(oldp+4440,(vlSelf->ascon_top__DOT__mux_sbox_out[15]),15);
            tracep->chgSData(oldp+4441,(vlSelf->ascon_top__DOT__mux_sbox_out[16]),15);
            tracep->chgSData(oldp+4442,(vlSelf->ascon_top__DOT__mux_sbox_out[17]),15);
            tracep->chgSData(oldp+4443,(vlSelf->ascon_top__DOT__mux_sbox_out[18]),15);
            tracep->chgSData(oldp+4444,(vlSelf->ascon_top__DOT__mux_sbox_out[19]),15);
            tracep->chgSData(oldp+4445,(vlSelf->ascon_top__DOT__mux_sbox_out[20]),15);
            tracep->chgSData(oldp+4446,(vlSelf->ascon_top__DOT__mux_sbox_out[21]),15);
            tracep->chgWData(oldp+4447,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),110);
            tracep->chgWData(oldp+4451,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),110);
            tracep->chgWData(oldp+4455,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),110);
            tracep->chgWData(oldp+4459,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),110);
            tracep->chgWData(oldp+4463,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),110);
            tracep->chgWData(oldp+4467,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),110);
            tracep->chgIData(oldp+4471,((0x3fffffU 
                                         & (~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [0U][2U] 
                                                << 0x14U) 
                                               | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0U][1U] 
                                                  >> 0xcU))))),22);
            tracep->chgIData(oldp+4472,((0x3fffffU 
                                         & (~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [1U][2U] 
                                                << 0x14U) 
                                               | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [1U][1U] 
                                                  >> 0xcU))))),22);
            tracep->chgIData(oldp+4473,((0x3fffffU 
                                         & (~ ((vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [2U][2U] 
                                                << 0x14U) 
                                               | (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [2U][1U] 
                                                  >> 0xcU))))),22);
            __Vtemp48471[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][0U];
            __Vtemp48471[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][1U];
            __Vtemp48471[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][2U];
            __Vtemp48471[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][3U];
            __Vtemp48471[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][4U];
            __Vtemp48471[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][5U];
            __Vtemp48471[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][6U];
            __Vtemp48471[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][7U];
            __Vtemp48471[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][8U];
            __Vtemp48471[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [0U][9U];
            tracep->chgWData(oldp+4474,(__Vtemp48471),320);
            __Vtemp48472[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [0U][0U];
            __Vtemp48472[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [0U][1U];
            __Vtemp48472[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [0U][2U];
            __Vtemp48472[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [0U][3U];
            tracep->chgWData(oldp+4484,(__Vtemp48472),110);
            __Vtemp48473[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][0U];
            __Vtemp48473[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][1U];
            __Vtemp48473[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][2U];
            __Vtemp48473[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][3U];
            __Vtemp48473[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][4U];
            __Vtemp48473[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][5U];
            __Vtemp48473[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][6U];
            __Vtemp48473[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][7U];
            __Vtemp48473[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][8U];
            __Vtemp48473[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [1U][9U];
            tracep->chgWData(oldp+4488,(__Vtemp48473),320);
            __Vtemp48474[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [1U][0U];
            __Vtemp48474[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [1U][1U];
            __Vtemp48474[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [1U][2U];
            __Vtemp48474[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [1U][3U];
            tracep->chgWData(oldp+4498,(__Vtemp48474),110);
            tracep->chgQData(oldp+4502,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+4504,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+4506,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+4508,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+4510,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4]),64);
            __Vtemp48475[0U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][0U];
            __Vtemp48475[1U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][1U];
            __Vtemp48475[2U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][2U];
            __Vtemp48475[3U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][3U];
            __Vtemp48475[4U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][4U];
            __Vtemp48475[5U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][5U];
            __Vtemp48475[6U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][6U];
            __Vtemp48475[7U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][7U];
            __Vtemp48475[8U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][8U];
            __Vtemp48475[9U] = vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                [2U][9U];
            tracep->chgWData(oldp+4512,(__Vtemp48475),320);
            __Vtemp48476[0U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [2U][0U];
            __Vtemp48476[1U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [2U][1U];
            __Vtemp48476[2U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [2U][2U];
            __Vtemp48476[3U] = vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                [2U][3U];
            tracep->chgWData(oldp+4522,(__Vtemp48476),110);
            tracep->chgQData(oldp+4526,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+4528,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+4530,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+4532,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+4534,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4]),64);
            tracep->chgSData(oldp+4536,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4537,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4538,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4539,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4540,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4541,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4542,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4543,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4544,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4545,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4546,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4547,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4548,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4549,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4550,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4551,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4552,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4553,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4554,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4555,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4556,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4557,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4558,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4559,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4560,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4561,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4562,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4563,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4564,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4565,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4566,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4567,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4568,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4569,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4570,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4571,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4572,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4573,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4574,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4575,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4576,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4577,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4578,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4579,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4580,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4581,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4582,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4583,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4584,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4585,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4586,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4587,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4588,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4589,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4590,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4591,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4592,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4593,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4594,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4595,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4596,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4597,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4598,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4599,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4600,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4601,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4602,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4603,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4604,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4605,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4606,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4607,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4608,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4609,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4610,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4611,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4612,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4613,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4614,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4615,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4616,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4617,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4618,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4619,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4620,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4621,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4622,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4623,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4624,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4625,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4626,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4627,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4628,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4629,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4630,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4631,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4632,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4633,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4634,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4635,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4636,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4637,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4638,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4639,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4640,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4641,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4642,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4643,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4644,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4645,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4646,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4647,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4648,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4649,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4650,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4651,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4652,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4653,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4654,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4655,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4656,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4657,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4658,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4659,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4660,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4661,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4662,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4663,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4664,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4665,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4666,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4667,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4668,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4669,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4670,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4671,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4672,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4673,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4674,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4675,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4676,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4677,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4678,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4679,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4680,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4681,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4682,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4683,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4684,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4685,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4686,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4687,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4688,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4689,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4690,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4691,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4692,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4693,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4694,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4695,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4696,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4697,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4698,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4699,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4700,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4701,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4702,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4703,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4704,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4705,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4706,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4707,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4708,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4709,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4710,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4711,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4712,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4713,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4714,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4715,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4716,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4717,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4718,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4719,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4720,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4721,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4722,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4723,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4724,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4725,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4726,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4727,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4728,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4729,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4730,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4731,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4732,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4733,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4734,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4735,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4736,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4737,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4738,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4739,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4740,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4741,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4742,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4743,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4744,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4745,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4746,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4747,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4748,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4749,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4750,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4751,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4752,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4753,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4754,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4755,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4756,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4757,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4758,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4759,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4760,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4761,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4762,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4763,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4764,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4765,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4766,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4767,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4768,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4769,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4770,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4771,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4772,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4773,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4774,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4775,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4776,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4777,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4778,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4779,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4780,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4781,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4782,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4783,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4784,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4785,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4786,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4787,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4788,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4789,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4790,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4791,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4792,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4793,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4794,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4795,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4796,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4797,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4798,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4799,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4800,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4801,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4802,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4803,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4804,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4805,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4806,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4807,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4808,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4809,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4810,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4811,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4812,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4813,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4814,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4815,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4816,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4817,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4818,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4819,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4820,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4821,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4822,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4823,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4824,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4825,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4826,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4827,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4828,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4829,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4830,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4831,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4832,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4833,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4834,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4835,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4836,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4837,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4838,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4839,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4840,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4841,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4842,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4843,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4844,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4845,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4846,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4847,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4848,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4849,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4850,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4851,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4852,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4853,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4854,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4855,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4856,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4857,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4858,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4859,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4860,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4861,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4862,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4863,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4864,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4865,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4866,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4867,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4868,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4869,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4870,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4871,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4872,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4873,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4874,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4875,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4876,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4877,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4878,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4879,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4880,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4881,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4882,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4883,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4884,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4885,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4886,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4887,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4888,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4889,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4890,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4891,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4892,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4893,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4894,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4895,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4896,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4897,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4898,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4899,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4900,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4901,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4902,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4903,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4904,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4905,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4906,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4907,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4908,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4909,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4910,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4911,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4912,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4913,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4914,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4915,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4916,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4917,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4918,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4919,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4920,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4921,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4922,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4923,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4924,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4925,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4926,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4927,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4928,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4929,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4930,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4931,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4932,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4933,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4934,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4935,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4936,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4937,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4938,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4939,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4940,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4941,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4942,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4943,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4944,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4945,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4946,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4947,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4948,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4949,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4950,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4951,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4952,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4953,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4954,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4955,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4956,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4957,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4958,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4959,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4960,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4961,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4962,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4963,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4964,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4965,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4966,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4967,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4968,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4969,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4970,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4971,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4972,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4973,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4974,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+4975,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4976,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4977,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+4978,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+4979,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+4980,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+4981,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+4982,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+4983,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+4984,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+4985,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+4986,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+4987,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+4988,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4989,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4990,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+4991,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4992,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4993,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+4994,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4995,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4996,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+4997,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+4998,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+4999,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+5000,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5001,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5002,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+5003,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+5004,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+5005,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+5006,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+5007,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+5008,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+5009,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+5010,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+5011,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+5012,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+5013,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5014,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5015,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+5016,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5017,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5018,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+5019,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5020,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5021,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+5022,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5023,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5024,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+5025,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5026,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5027,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+5028,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+5029,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+5030,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+5031,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+5032,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+5033,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+5034,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+5035,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+5036,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+5037,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+5038,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5039,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5040,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+5041,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5042,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5043,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+5044,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5045,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5046,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+5047,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5048,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5049,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+5050,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5051,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5052,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+5053,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+5054,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+5055,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+5056,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+5057,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+5058,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+5059,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+5060,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
            tracep->chgSData(oldp+5061,(((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+5062,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+5063,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5064,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5065,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+5066,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5067,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5068,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+5069,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5070,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5071,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+5072,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5073,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5074,((7U & vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+5075,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+5076,((7U & (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+5077,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[0]),3);
            tracep->chgCData(oldp+5078,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[1]),3);
            tracep->chgCData(oldp+5079,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[2]),3);
            tracep->chgCData(oldp+5080,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[3]),3);
            tracep->chgCData(oldp+5081,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask[4]),3);
            tracep->chgCData(oldp+5082,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+5083,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+5084,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+5085,(vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        }
        tracep->chgBit(oldp+5086,(vlSelf->clk));
        tracep->chgBit(oldp+5087,(vlSelf->reset_n));
        tracep->chgBit(oldp+5088,(vlSelf->reset_n_lfsr));
        tracep->chgBit(oldp+5089,(vlSelf->start));
        tracep->chgQData(oldp+5090,(vlSelf->key1),64);
        tracep->chgQData(oldp+5092,(vlSelf->key2),64);
        tracep->chgBit(oldp+5094,(vlSelf->load_data));
        tracep->chgQData(oldp+5095,(vlSelf->nonce1),64);
        tracep->chgQData(oldp+5097,(vlSelf->nonce2),64);
        tracep->chgQData(oldp+5099,(vlSelf->initialVector),64);
        tracep->chgWData(oldp+5101,(vlSelf->data_in),128);
        tracep->chgBit(oldp+5105,(vlSelf->valid_data_in));
        tracep->chgBit(oldp+5106,(vlSelf->last_block));
        tracep->chgCData(oldp+5107,(vlSelf->valid_bytes),5);
        tracep->chgBit(oldp+5108,(vlSelf->EOT));
        tracep->chgWData(oldp+5109,(vlSelf->state_reg_out),320);
        tracep->chgBit(oldp+5119,(vlSelf->ciphertext_valid));
        tracep->chgWData(oldp+5120,(vlSelf->ciphertext),128);
        tracep->chgBit(oldp+5124,(vlSelf->done));
        tracep->chgBit(oldp+5125,(vlSelf->ready_tag));
        tracep->chgQData(oldp+5126,(vlSelf->tag1),64);
        tracep->chgQData(oldp+5128,(vlSelf->tag2),64);
        tracep->chgBit(oldp+5130,(vlSelf->ready_for_data));
        tracep->chgBit(oldp+5131,(vlSelf->read_data));
        tracep->chgBit(oldp+5132,(vlSelf->debug_extra_padding_ff));
        tracep->chgCData(oldp+5133,(vlSelf->debug_bitcounter),3);
        tracep->chgCData(oldp+5134,(vlSelf->debug_roundcounter),4);
        tracep->chgCData(oldp+5135,(vlSelf->debug_state),5);
        tracep->chgQData(oldp+5136,(vlSelf->debug_state_0),64);
        tracep->chgQData(oldp+5138,(vlSelf->debug_state_1),64);
        tracep->chgQData(oldp+5140,(vlSelf->debug_state_2),64);
        tracep->chgQData(oldp+5142,(vlSelf->debug_state_3),64);
        tracep->chgQData(oldp+5144,(vlSelf->debug_state_4),64);
        tracep->chgQData(oldp+5146,(vlSelf->debug_round_state_0),64);
        tracep->chgQData(oldp+5148,(vlSelf->debug_round_state_1),64);
        tracep->chgQData(oldp+5150,(vlSelf->debug_round_state_2),64);
        tracep->chgQData(oldp+5152,(vlSelf->debug_round_state_3),64);
        tracep->chgQData(oldp+5154,(vlSelf->debug_round_state_4),64);
        tracep->chgQData(oldp+5156,(vlSelf->debug_sbox_nomasked_0),64);
        tracep->chgQData(oldp+5158,(vlSelf->debug_sbox_nomasked_1),64);
        tracep->chgQData(oldp+5160,(vlSelf->debug_sbox_nomasked_2),64);
        tracep->chgQData(oldp+5162,(vlSelf->debug_sbox_nomasked_3),64);
        tracep->chgQData(oldp+5164,(vlSelf->debug_sbox_nomasked_4),64);
        tracep->chgQData(oldp+5166,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->chgQData(oldp+5168,(vlSelf->debug_linear_diffusion_state4),64);
        __Vtemp48480[0U] = (IData)(vlSelf->initialVector);
        __Vtemp48480[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp48480[2U] = (IData)(vlSelf->key1);
        __Vtemp48480[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp48480[4U] = (IData)(vlSelf->key2);
        __Vtemp48480[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp48480[6U] = (IData)(vlSelf->nonce1);
        __Vtemp48480[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp48480[8U] = (IData)(vlSelf->nonce2);
        __Vtemp48480[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->chgWData(oldp+5170,(__Vtemp48480),320);
        tracep->chgCData(oldp+5180,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 1U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 4U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0xbU))))),3);
        tracep->chgCData(oldp+5181,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 2U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 5U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0xcU))))),3);
        tracep->chgCData(oldp+5182,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 3U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 6U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0xdU))))),3);
        tracep->chgCData(oldp+5183,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 4U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 7U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0xeU))))),3);
        tracep->chgCData(oldp+5184,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 5U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 8U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0xfU))))),3);
        tracep->chgCData(oldp+5185,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 6U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 9U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x10U))))),3);
        tracep->chgCData(oldp+5186,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 7U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xaU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x11U))))),3);
        tracep->chgCData(oldp+5187,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 8U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xbU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x12U))))),3);
        tracep->chgCData(oldp+5188,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 9U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xcU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x13U))))),3);
        tracep->chgCData(oldp+5189,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xaU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xdU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x14U))))),3);
        tracep->chgCData(oldp+5190,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xbU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xeU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x15U))))),3);
        tracep->chgCData(oldp+5191,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xcU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0xfU)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x16U))))),3);
        tracep->chgCData(oldp+5192,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xdU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x10U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x17U))))),3);
        tracep->chgCData(oldp+5193,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xeU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x11U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x18U))))),3);
        tracep->chgCData(oldp+5194,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0xfU)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x12U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x19U))))),3);
        tracep->chgCData(oldp+5195,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x10U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x13U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x1aU))))),3);
        tracep->chgCData(oldp+5196,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x11U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x14U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x1bU))))),3);
        tracep->chgCData(oldp+5197,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x12U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x15U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x1cU))))),3);
        tracep->chgCData(oldp+5198,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x13U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x16U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x1dU))))),3);
        tracep->chgCData(oldp+5199,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x14U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x17U)) 
                                        | (1U & (vlSelf->state_reg_out[0U] 
                                                 >> 0x1eU))))),3);
        tracep->chgCData(oldp+5200,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x15U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x18U)) 
                                        | (vlSelf->state_reg_out[0U] 
                                           >> 0x1fU)))),3);
        tracep->chgCData(oldp+5201,(((4U & (vlSelf->state_reg_out[1U] 
                                            >> 0x16U)) 
                                     | ((2U & (vlSelf->state_reg_out[1U] 
                                               >> 0x19U)) 
                                        | (1U & vlSelf->state_reg_out[1U])))),3);
    }
}

void Vascon_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    }
}
