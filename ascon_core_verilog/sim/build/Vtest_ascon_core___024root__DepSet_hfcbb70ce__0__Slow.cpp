// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_ascon_core.h for the primary calling header

#include "Vtest_ascon_core__pch.h"
#include "Vtest_ascon_core__Syms.h"
#include "Vtest_ascon_core___024root.h"

extern const VlWide<8>/*255:0*/ Vtest_ascon_core__ConstPool__CONST_h531bc51f_0;
extern const VlWide<8>/*255:0*/ Vtest_ascon_core__ConstPool__CONST_h6fa775aa_0;

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_initial__TOP(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk3__DOT__i;
    test_ascon_core__DOT__unnamedblk3__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk3__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk3__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk5__DOT__i;
    test_ascon_core__DOT__unnamedblk5__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk5__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk5__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk7__DOT__i;
    test_ascon_core__DOT__unnamedblk7__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk7__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk7__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk9__DOT__i;
    test_ascon_core__DOT__unnamedblk9__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk9__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk9__DOT__i__Vfirst = 0;
    IData/*31:0*/ test_ascon_core__DOT__unnamedblk11__DOT__i;
    test_ascon_core__DOT__unnamedblk11__DOT__i = 0;
    CData/*0:0*/ test_ascon_core__DOT__unnamedblk11__DOT__i__Vfirst;
    test_ascon_core__DOT__unnamedblk11__DOT__i__Vfirst = 0;
    VlWide<6>/*191:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_34;
    VlWide<7>/*223:0*/ __Vtemp_35;
    VlWide<6>/*191:0*/ __Vtemp_36;
    VlWide<7>/*223:0*/ __Vtemp_37;
    VlWide<7>/*223:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_58;
    // Body
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__a = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 4U));
    vlSelfRef.test_ascon_core__DOT__b = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 3U));
    vlSelfRef.test_ascon_core__DOT__c = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 2U));
    vlSelfRef.test_ascon_core__DOT__d = (1U & ((IData)(vlSelfRef.test_ascon_core__DOT__test) 
                                               >> 1U));
    vlSelfRef.test_ascon_core__DOT__e = (1U & (IData)(vlSelfRef.test_ascon_core__DOT__test));
    vlSelfRef.test_ascon_core__DOT__y = (1U & (~ ((
                                                   ((((IData)(vlSelfRef.test_ascon_core__DOT__a) 
                                                      & (~ (IData)(vlSelfRef.test_ascon_core__DOT__b))) 
                                                     & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                    & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                   & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))) 
                                                  | ((~ (IData)(vlSelfRef.test_ascon_core__DOT__a)) 
                                                     & ((((((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                          | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                              & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                         | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__b)) 
                                                             & (~ (IData)(vlSelfRef.test_ascon_core__DOT__c))) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e)))) 
                                                        | (((~ (IData)(vlSelfRef.test_ascon_core__DOT__c)) 
                                                            & (~ (IData)(vlSelfRef.test_ascon_core__DOT__d))) 
                                                           & (~ (IData)(vlSelfRef.test_ascon_core__DOT__e))))))));
    VL_WRITEF_NX("case %2#, a=%1#, b=%1#, c=%1#, d=%1#, e=%1#, y = %1#\n",0,
                 5,vlSelfRef.test_ascon_core__DOT__test,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__a),
                 1,vlSelfRef.test_ascon_core__DOT__b,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__c),
                 1,vlSelfRef.test_ascon_core__DOT__d,
                 1,(IData)(vlSelfRef.test_ascon_core__DOT__e),
                 1,vlSelfRef.test_ascon_core__DOT__y);
    vlSelfRef.test_ascon_core__DOT__test = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.test_ascon_core__DOT__test)));
    vlSelfRef.test_ascon_core__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF_NX("==========generate data result:\n",0);
    __Vtemp_33[0U] = 0x2e686578U;
    __Vtemp_33[1U] = 0x2f6b6579U;
    __Vtemp_33[2U] = 0x73756c74U;
    __Vtemp_33[3U] = 0x655f7265U;
    __Vtemp_33[4U] = 0x65726174U;
    __Vtemp_33[5U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(6, __Vtemp_33)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_key
                 , 0, ~0ULL);
    __Vtemp_34[0U] = 0x2e686578U;
    __Vtemp_34[1U] = 0x6f6e6365U;
    __Vtemp_34[2U] = 0x6c742f6eU;
    __Vtemp_34[3U] = 0x72657375U;
    __Vtemp_34[4U] = 0x6174655fU;
    __Vtemp_34[5U] = 0x656e6572U;
    __Vtemp_34[6U] = 0x67U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_34)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(8, Vtest_ascon_core__ConstPool__CONST_h531bc51f_0)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                 , 0, ~0ULL);
    __Vtemp_35[0U] = 0x2e686578U;
    __Vtemp_35[1U] = 0x64617461U;
    __Vtemp_35[2U] = 0x6173735fU;
    __Vtemp_35[3U] = 0x756c742fU;
    __Vtemp_35[4U] = 0x5f726573U;
    __Vtemp_35[5U] = 0x72617465U;
    __Vtemp_35[6U] = 0x67656e65U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_35)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(8, Vtest_ascon_core__ConstPool__CONST_h6fa775aa_0)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                 , 0, ~0ULL);
    __Vtemp_36[0U] = 0x2e686578U;
    __Vtemp_36[1U] = 0x2f746167U;
    __Vtemp_36[2U] = 0x73756c74U;
    __Vtemp_36[3U] = 0x655f7265U;
    __Vtemp_36[4U] = 0x65726174U;
    __Vtemp_36[5U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(6, __Vtemp_36)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                 , 0, ~0ULL);
    __Vtemp_37[0U] = 0x2e686578U;
    __Vtemp_37[1U] = 0x73616765U;
    __Vtemp_37[2U] = 0x2f6d6573U;
    __Vtemp_37[3U] = 0x73756c74U;
    __Vtemp_37[4U] = 0x655f7265U;
    __Vtemp_37[5U] = 0x65726174U;
    __Vtemp_37[6U] = 0x67656eU;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_37)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_message
                 , 0, ~0ULL);
    __Vtemp_38[0U] = 0x2e686578U;
    __Vtemp_38[1U] = 0x5f6f7574U;
    __Vtemp_38[2U] = 0x68617368U;
    __Vtemp_38[3U] = 0x756c742fU;
    __Vtemp_38[4U] = 0x5f726573U;
    __Vtemp_38[5U] = 0x72617465U;
    __Vtemp_38[6U] = 0x67656e65U;
    VL_READMEM_N(true, 64, VL_CVT_PACK_STR_NW(7, __Vtemp_38)
                 , vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out
                 , 0, ~0ULL);
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__KEY, vlSelfRef.test_ascon_core__DOT__data_read_file_key
                  .at(0U), vlSelfRef.test_ascon_core__DOT__data_read_file_key
                  .at(1U));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__NONCE, vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                  .at(0U), vlSelfRef.test_ascon_core__DOT__data_read_file_nonce
                  .at(1U));
    VL_CONCAT_WQQ(128,64,64, vlSelfRef.test_ascon_core__DOT__TAG, vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                  .at(1U), vlSelfRef.test_ascon_core__DOT__data_read_file_tag
                  .at(0U));
    VL_WRITEF_NX("KEY: %x\nNONCE: %x\nTAG: %x\n",0,
                 128,vlSelfRef.test_ascon_core__DOT__KEY.data(),
                 128,vlSelfRef.test_ascon_core__DOT__NONCE.data(),
                 128,vlSelfRef.test_ascon_core__DOT__TAG.data());
    vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                  .at(0U));
    VL_WRITEF_NX("PLAINTEXT_LENGTH: %3#\n",0,32,vlSelfRef.test_ascon_core__DOT__PLAINTEXT_LENGTH);
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_39, vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_plaintext
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_39);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk2__DOT__i);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.first(test_ascon_core__DOT__unnamedblk3__DOT__i)))) {
        test_ascon_core__DOT__unnamedblk3__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk3__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__PLAINTEXT.next(test_ascon_core__DOT__unnamedblk3__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk3__DOT__i__Vfirst = 0U;
            VL_ASSIGN_W(128,__Vtemp_42, vlSelfRef.test_ascon_core__DOT__PLAINTEXT
                        .at(test_ascon_core__DOT__unnamedblk3__DOT__i));
            VL_WRITEF_NX("PLAINTEXT[%3d] = %x\n",0,
                         32,test_ascon_core__DOT__unnamedblk3__DOT__i,
                         128,__Vtemp_42.data());
        }
    }
    vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                  .at(0U));
    VL_WRITEF_NX("ASS_DATA_LENGTH: %3#\n",0,32,vlSelfRef.test_ascon_core__DOT__ASS_DATA_LENGTH);
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_43, vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_ass_data
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__ASS_DATA
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_43);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk4__DOT__i);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.first(test_ascon_core__DOT__unnamedblk5__DOT__i)))) {
        test_ascon_core__DOT__unnamedblk5__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk5__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__ASS_DATA.next(test_ascon_core__DOT__unnamedblk5__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk5__DOT__i__Vfirst = 0U;
            VL_ASSIGN_W(128,__Vtemp_46, vlSelfRef.test_ascon_core__DOT__ASS_DATA
                        .at(test_ascon_core__DOT__unnamedblk5__DOT__i));
            VL_WRITEF_NX("ASS_DATA[%3d] = %x\n",0,32,
                         test_ascon_core__DOT__unnamedblk5__DOT__i,
                         128,__Vtemp_46.data());
        }
    }
    vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                  .at(0U));
    VL_WRITEF_NX("CIPHERTEXT_LENGTH: %3#\n",0,32,vlSelfRef.test_ascon_core__DOT__CIPHERTEXT_LENGTH);
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_47, vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i), vlSelfRef.test_ascon_core__DOT__data_read_file_ciphertext
                      .at(((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i)));
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_47);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i 
            = ((IData)(2U) + vlSelfRef.test_ascon_core__DOT__unnamedblk6__DOT__i);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.first(test_ascon_core__DOT__unnamedblk7__DOT__i)))) {
        test_ascon_core__DOT__unnamedblk7__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk7__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__CIPHERTEXT.next(test_ascon_core__DOT__unnamedblk7__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk7__DOT__i__Vfirst = 0U;
            VL_ASSIGN_W(128,__Vtemp_50, vlSelfRef.test_ascon_core__DOT__CIPHERTEXT
                        .at(test_ascon_core__DOT__unnamedblk7__DOT__i));
            VL_WRITEF_NX("CIPHERTEXT[%3d] = %x\n",0,
                         32,test_ascon_core__DOT__unnamedblk7__DOT__i,
                         128,__Vtemp_50.data());
        }
    }
    vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH 
        = (IData)(vlSelfRef.test_ascon_core__DOT__data_read_file_message
                  .at(0U));
    VL_WRITEF_NX("MESSAGE_LENGTH: %3#\n",0,32,vlSelfRef.test_ascon_core__DOT__MESSAGE_LENGTH);
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk8__DOT__i = 1U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk8__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_message.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_51, vlSelfRef.test_ascon_core__DOT__data_read_file_message
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk8__DOT__i), 0ULL);
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__MESSAGE
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_51);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk8__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk8__DOT__i);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.first(test_ascon_core__DOT__unnamedblk9__DOT__i)))) {
        test_ascon_core__DOT__unnamedblk9__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk9__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__MESSAGE.next(test_ascon_core__DOT__unnamedblk9__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk9__DOT__i__Vfirst = 0U;
            VL_ASSIGN_W(128,__Vtemp_54, vlSelfRef.test_ascon_core__DOT__MESSAGE
                        .at(test_ascon_core__DOT__unnamedblk9__DOT__i));
            VL_WRITEF_NX("MESSAGE[%3d] = %x\n",0,32,
                         test_ascon_core__DOT__unnamedblk9__DOT__i,
                         128,__Vtemp_54.data());
        }
    }
    vlSelfRef.test_ascon_core__DOT__count = 0U;
    vlSelfRef.test_ascon_core__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_LTS_III(32, vlSelfRef.test_ascon_core__DOT__unnamedblk10__DOT__i, vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out.size())) {
        VL_CONCAT_WQQ(128,64,64, __Vtemp_55, vlSelfRef.test_ascon_core__DOT__data_read_file_hash_out
                      .at(vlSelfRef.test_ascon_core__DOT__unnamedblk10__DOT__i), 0ULL);
        VL_ASSIGN_W(128,vlSelfRef.test_ascon_core__DOT__HASH_OUT
                    .at(vlSelfRef.test_ascon_core__DOT__count), __Vtemp_55);
        vlSelfRef.test_ascon_core__DOT__count = ((IData)(1U) 
                                                 + vlSelfRef.test_ascon_core__DOT__count);
        vlSelfRef.test_ascon_core__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.test_ascon_core__DOT__unnamedblk10__DOT__i);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.test_ascon_core__DOT__HASH_OUT.first(test_ascon_core__DOT__unnamedblk11__DOT__i)))) {
        test_ascon_core__DOT__unnamedblk11__DOT__i__Vfirst = 1U;
        while (((IData)(test_ascon_core__DOT__unnamedblk11__DOT__i__Vfirst) 
                || (0U != vlSelfRef.test_ascon_core__DOT__HASH_OUT.next(test_ascon_core__DOT__unnamedblk11__DOT__i)))) {
            test_ascon_core__DOT__unnamedblk11__DOT__i__Vfirst = 0U;
            VL_ASSIGN_W(128,__Vtemp_58, vlSelfRef.test_ascon_core__DOT__HASH_OUT
                        .at(test_ascon_core__DOT__unnamedblk11__DOT__i));
            VL_WRITEF_NX("HASH_OUT[%3d] = %x\n",0,32,
                         test_ascon_core__DOT__unnamedblk11__DOT__i,
                         128,__Vtemp_58.data());
        }
    }
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_ascon_core___024root___dump_triggers__stl(Vtest_ascon_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_ascon_core___024root___eval_triggers__stl(Vtest_ascon_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_ascon_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_ascon_core___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_ascon_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
